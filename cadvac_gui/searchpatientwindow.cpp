#include "searchpatientwindow.h"
#include "ui_searchpatientwindow.h"

SearchPatientWindow::SearchPatientWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::SearchPatientWindow)
{
    ui->setupUi(this);
    currentUser = user;
}

SearchPatientWindow::~SearchPatientWindow()
{
    delete searchPatient;
    delete ui;
}

void SearchPatientWindow::on_searchPatientButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

       QString cpf = ui->cpf->text();

       QSqlQuery query;
       if(query.prepare("SELECT * FROM Patients WHERE cpf='"+cpf+"'")){
          if(query.exec()){

              query.first();

              QString cpf = query.value(0).toString();
              QString name = query.value(1).toString();
              QString birth = query.value(2).toString();
              QString nSus = query.value(6).toString();
              int doses = query.value(7).toInt();

              if(cpf.toStdString() != ""){
                  this->close();

                  searchPatient->setName(name.toStdString());
                  searchPatient->setCpf(cpf.toStdString());
                  searchPatient->setBirthDate(birth.toStdString());
                  searchPatient->setSusNumber(nSus.toStdString());
                  searchPatient->setVaccineDosesTaken(doses);

                  this->close();
                  patientDetailsWindow = new PatientDetailsWindow(this, searchPatient);
                  patientDetailsWindow->setVisible(true);
                  dataBase.closeDb();

               } else{
                   QMessageBox::warning(this, "ERROR", "Não encontrado");
               }
            }
        }
    }

    dataBase.closeDb();

}
void SearchPatientWindow::clearForm()
{
  ui->cpf->clear();

}

//    Patient* p = sys->patient->getPatient(ui->cpf->text().toStdString());

//    if(p!=nullptr){
//        patientDetailsWindow.setVisible(true);
//        patientDetailsWindow.setSys(sys);

//        QString cpf = QString::fromUtf8(p->getCpf().c_str());
//        QString name = QString::fromUtf8(p->getName().c_str());
//        QString susNumber = QString::fromUtf8(p->getSusNumber().c_str());
//        QString dateEdit = QString::fromUtf8(p->getBirthDate().c_str());
//        QString vaccineTaken = QString::number(p->getVaccineDosesTaken());

//        //cout<<"P: "<<*p<<endl;
//        patientDetailsWindow.getCpfLineEdit()->setText(cpf);
//        patientDetailsWindow.getNameLineEdit()->setText(name);
//        patientDetailsWindow.getNumberSUSLineEdit()->setText(susNumber);
//        patientDetailsWindow.getBirthDateLineEdit()->setText(dateEdit);
//        patientDetailsWindow.getVaccineDosesTakenLineEdit()->setText(vaccineTaken);
//    }
//    else{
//        QMessageBox qmsg;
//        qmsg.setWindowTitle("ERRO");
//        qmsg.setText("Não existe paciente com este CPF");
//        qmsg.exec();

//    }
//    clearForm();
//    this->close();
