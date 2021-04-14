#include "searchpatientwindow.h"
#include "ui_searchpatientwindow.h"

SearchPatientWindow::SearchPatientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchPatientWindow)
{
    ui->setupUi(this);
}

SearchPatientWindow::~SearchPatientWindow()
{
    delete ui;
}

void SearchPatientWindow::on_searchPatientButton_clicked()
{
    Patient* p = sys->patient->getPatient(ui->cpf->text().toStdString());

    if(p!=nullptr){
        patientDetailsWindow.setVisible(true);
        patientDetailsWindow.setSys(sys);

        QString cpf = QString::fromUtf8(p->getCpf().c_str());
        QString name = QString::fromUtf8(p->getName().c_str());
        QString susNumber = QString::fromUtf8(p->getSusNumber().c_str());
        QString dateEdit = QString::fromUtf8(p->getBirthDate().c_str());
        QString vaccineTaken = QString::number(p->getVaccineDosesTaken());

        cout<<"P: "<<*p<<endl;
        patientDetailsWindow.getCpfLineEdit()->setText(cpf);
        patientDetailsWindow.getNameLineEdit()->setText(name);
        patientDetailsWindow.getNumberSUSLineEdit()->setText(susNumber);
        patientDetailsWindow.getBirthDateLineEdit()->setText(dateEdit);
        patientDetailsWindow.getVaccineDosesTakenLineEdit()->setText(vaccineTaken);
    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("ERRO");
        qmsg.setText("Não existe paciente com este CPF");
        qmsg.exec();

    }
    clearForm();
    this->close();


}
void SearchPatientWindow::clearForm()
{
  ui->cpf->clear();

}
