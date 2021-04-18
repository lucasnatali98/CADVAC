#include "createnursewindow.h"
#include "ui_createnursewindow.h"

CreateNurseWindow::CreateNurseWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::CreateNurseWindow)
{
    ui->setupUi(this);
    currentUser = user;
    ui->secretario->setText(QString::fromStdString(currentUser->getName()));
}

CreateNurseWindow::~CreateNurseWindow()
{
    delete ui;
}

void CreateNurseWindow::on_pushButton_clicked()
{

    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString cpf = ui->cpf->text();
        QString name = ui->nome->text();
        QString coren = ui->coren->text();
        QString date = ui->dateEdit->text();

        QSqlQuery query;
        if(query.prepare("INSERT INTO Users (name, cpf, type, birth, coren)"
                         "VALUES('"+name+"', '"+cpf+"', 3, '"+date+"', '"+coren+"')")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Enfermeiro cadastrado com sucesso");
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

void CreateNurseWindow::clearForm()
{
    ui->cpf->clear();
    ui->coren->clear();
    ui->dateEdit->clear();
    ui->nome->clear();
}



