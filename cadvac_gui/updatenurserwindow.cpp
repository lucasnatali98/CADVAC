#include "updatenurserwindow.h"
#include "ui_updatenurserwindow.h"

UpdateNurserWindow::UpdateNurserWindow(QWidget *parent, User *searchUser) : QMainWindow(parent), ui(new Ui::UpdateNurserWindow)
{
    ui->setupUi(this);
    user = searchUser;
    parentWindown = parent;

//    parent->setVisible(true);

    ui->cpf->setText(QString::fromStdString(user->getCpf()));
    ui->name->setText(QString::fromStdString(user->getName()));
    ui->coren->setText(QString::number(user->getCoren()));
    ui->date->setText(QString::fromStdString(user->getBirth()));
}

UpdateNurserWindow::~UpdateNurserWindow()
{
    delete ui;
}

void UpdateNurserWindow::on_pushButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString cpf = ui->cpf->text();
        QString name = ui->name->text();
        QString coren = ui->coren->text();
        QString date = ui->date->text();

        QSqlQuery query;
        if(query.prepare("UPDATE Users SET name='"+name+"', cpf='"+cpf+"', birth='"+date+"', coren='"+coren+"'"
                         " WHERE id='"+QString::number(user->getId())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Enfermeiro atualizado com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao atualizar");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}

void UpdateNurserWindow::clearForm()
{
    ui->cpf->clear();
    ui->coren->clear();
    ui->date->clear();
    ui->name->clear();
}
