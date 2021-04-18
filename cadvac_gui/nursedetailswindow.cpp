#include "nursedetailswindow.h"
#include "ui_nursedetailswindow.h"

NurseDetailsWindow::NurseDetailsWindow(QWidget *parent, User* searchUser) : QMainWindow(parent), ui(new Ui::NurseDetailsWindow)
{
    ui->setupUi(this);
    user = searchUser;
    parentWindown = parent;
    // gambiarra
    parent->setVisible(true);

    ui->cpfLineEdit->setText(QString::fromStdString(user->getCpf()));
    ui->nameLineEdit->setText(QString::fromStdString(user->getName()));
    ui->numberCorenlineEdit->setText(QString::number(user->getCoren()));
    ui->birthDateLineEdit->setText(QString::fromStdString(user->getBirth()));
}

NurseDetailsWindow::~NurseDetailsWindow()
{
    delete ui;
}

void NurseDetailsWindow::on_updateNurseButton_clicked()
{

}

void NurseDetailsWindow::on_removeNurseButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QSqlQuery query;
        if(query.prepare("DELETE FROM Users WHERE id='"+QString::number(user->getId())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Usuário removido com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao deletar");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}

void NurseDetailsWindow::clearForm()
{
    ui->birthDateLineEdit->clear();
    ui->cpfLineEdit->clear();
    ui->numberCorenlineEdit->clear();
    ui->nameLineEdit->clear();
}


void NurseDetailsWindow::on_backButton_clicked()
{
//    nurseManagementWindow = new NurseManagementWindow(this, user);
//    nurseManagementWindow->setVisible(true);
//    this->close();
//    this->setVisible(false);
}
