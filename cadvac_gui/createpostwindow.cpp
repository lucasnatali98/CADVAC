#include "createpostwindow.h"
#include "ui_createpostwindow.h"

CreatePostWindow::CreatePostWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::CreatePostWindow)
{
    ui->setupUi(this);
    currentUser = user;
    ui->user->setText(QString::fromStdString(currentUser->getName()));
}

CreatePostWindow::~CreatePostWindow()
{
    delete ui;
}

void CreatePostWindow::on_addPostButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString name = ui->nameLineEdit->text();
        QString address = ui->adressLineEdit->text();

        QSqlQuery query;
        if(query.prepare("INSERT INTO HelthPosts (name, address)"
                         "VALUES('"+name+"', '"+address+"')")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Posto cadastrado com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao inserir");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}
void CreatePostWindow::clearForm()
{
    ui->adressLineEdit->clear();
    ui->nameLineEdit->clear();
}
