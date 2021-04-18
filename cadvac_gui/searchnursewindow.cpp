#include "searchnursewindow.h"
#include "ui_searchnursewindow.h"

SearchNurseWindow::SearchNurseWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::SearchNurseWindow)
{
    ui->setupUi(this);
    currentUser = user;
}

SearchNurseWindow::~SearchNurseWindow()
{
    delete searchUser;
    delete ui;
}

void SearchNurseWindow::on_searchNurseButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

       QString cpf = ui->cpf->text();

       QSqlQuery query;
       if(query.prepare("SELECT * FROM Users WHERE cpf='"+cpf+"'")){
          if(query.exec()){

              query.first();

              int id = query.value(0).toInt();
              QString name = query.value(1).toString();
              QString email = query.value(2).toString();
              QString cpf = query.value(3).toString();
              QString password = query.value(4).toString();
              QString birth = query.value(5).toString();
              int coren = query.value(6).toInt();
              int type = query.value(7).toInt();

              if(cpf.toStdString() != "" && type == 3){
                  this->close();

                  searchUser->setId(id);
                  searchUser->setName(name.toStdString());
                  searchUser->setEmail(email.toStdString());
                  searchUser->setCpf(cpf.toStdString());
                  searchUser->setPassword(password.toStdString());
                  searchUser->setBirth(birth.toStdString());
                  searchUser->setCoren(coren);
                  searchUser->setType(type);

                  this->close();
                  nurseDetailsWindow = new NurseDetailsWindow(this, searchUser);
                  nurseDetailsWindow->setVisible(true);
                  dataBase.closeDb();

               } else{
                   QMessageBox::warning(this, "ERROR", "Não encontrado");
               }
            }
        }
    }

    dataBase.closeDb();

}
void SearchNurseWindow::clearForm()
{
  ui->cpf->clear();
}


//    QMessageBox::information(this, "SUCCESS", "Enfermeiro cadastrado com sucesso");
//    clearForm();

//    this->close();



//    Nurse* n = sys->nurse->getNurse(ui->cpf->text().toStdString());

//    if(n != nullptr){
//        nurseDetailsWindow.setVisible(true);
//        nurseDetailsWindow.setSys(sys);
//        QString cpf = QString::fromUtf8(n->getCpf().c_str());
//        QString name = QString::fromUtf8(n->getName().c_str());
//        QString coren = QString::number(n->getCoren());
//        QString dateEdit = QString::fromUtf8(n->getBirthDate().c_str());

//        cout<<"N: "<<n->getCpf()<<endl;
//        nurseDetailsWindow.getCpfLineEdit()->setText(cpf);
//        nurseDetailsWindow.getNameLineEdit()->setText(name);
//        nurseDetailsWindow.getCorenLineEdit()->setText(coren);
//        nurseDetailsWindow.getBirthDateLineEdit()->setText(dateEdit);
//    }
//    else{
//        QMessageBox qmsg;
//        qmsg.setWindowTitle("ERRO");
//        qmsg.setText("Não existe enfermeiro com este CPF");
//        qmsg.exec();

//    }
//    clearForm();
//    this->close();

//                              nurseDetailsWindow->getCpfLineEdit()->setText(cpf);
//                              nurseDetailsWindow->getNameLineEdit()->setText(name);
//                              nurseDetailsWindow->getCorenLineEdit()->setText(QString::number(coren));
//                              nurseDetailsWindow->getBirthDateLineEdit()->setText(birth);


