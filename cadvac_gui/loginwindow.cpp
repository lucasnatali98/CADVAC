#include "loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete currentUser;
    delete ui;
//    delete this;
}

void LoginWindow::on_pushButton_clicked()
{
    if(!dataBase.openDb()){
            QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{
        QString username = ui->cpf->text();
        QString password = ui->password->text();

        QSqlQuery query;
        if(query.prepare("SELECT * FROM Users WHERE cpf='"+username+"' and password='"+password+"'")){
           if(query.exec()){

               query.first();

               int id = query.value(0).toInt();
               QString name = query.value(1).toString();
               QString email = query.value(2).toString();
               QString cpf = query.value(3).toString();
               QString password = query.value(6).toString();
               QString birth = query.value(4).toString();
               int coren = query.value(5).toInt();
               int type = query.value(7).toInt();

               if(cpf.toStdString() != ""){
                   currentUser->setId(id);
                   currentUser->setName(name.toStdString());
                   currentUser->setEmail(email.toStdString());
                   currentUser->setCpf(cpf.toStdString());
                   currentUser->setPassword(password.toStdString());
                   currentUser->setBirth(birth.toStdString());
                   currentUser->setCoren(coren);
                   currentUser->setType(type);
                   this->close();
                   health = new HealthSecretaryWindow(this, currentUser);
                   health->setVisible(true);
                   dataBase.closeDb();
               } else{
                   QMessageBox::warning(this, "ERROR", "Usuário não encontrado");

               }
           }
        }
    }

    dataBase.closeDb();

}

