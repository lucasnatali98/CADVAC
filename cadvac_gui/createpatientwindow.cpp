#include "createpatientwindow.h"
#include "ui_createpatientwindow.h"

CreatePatientWindow::CreatePatientWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::CreatePatientWindow)
{
    ui->setupUi(this);
    currentUser = user;
    ui->user->setText(QString::fromStdString(currentUser->getName()));
}

CreatePatientWindow::~CreatePatientWindow()
{
    delete ui;
}

void CreatePatientWindow::on_addPatientButton_clicked()
{

    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString cpf = ui->cpf->text();
        QString name = ui->name->text();
        QString sus = ui->susNumber->text();
        QString date = ui->dateEdit->text();

        QSqlQuery query;
        if(query.prepare("INSERT INTO Patients (name, cpf, birth, sus)"
                         "VALUES('"+name+"', '"+cpf+"', '"+date+"', '"+sus+"')")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Paciente cadastrado com sucesso");
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
void CreatePatientWindow::clearForm()
{
    ui->cpf->clear();
    ui->name->clear();
    ui->dateEdit->clear();
    ui->susNumber->clear();
}
