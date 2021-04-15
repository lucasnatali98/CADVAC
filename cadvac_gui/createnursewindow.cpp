#include "createnursewindow.h"
#include "ui_createnursewindow.h"

System *CreateNurseWindow::getSys() const
{
    return sys;
}

CreateNurseWindow::CreateNurseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateNurseWindow)
{
    ui->setupUi(this);
    ui->secretario->setText("Pazuello");
   // nw = new NurseManagementWindow(this);
    sys = new System();
}

CreateNurseWindow::~CreateNurseWindow()
{
    delete ui;
}

void CreateNurseWindow::on_pushButton_clicked()
{

    int cor = ui->coren->text().toInt();
    sys->nurse->createNurse(ui->cpf->text().toStdString(), ui->nome->text().toStdString(),
                            ui->dateEdit->text().toStdString(),
                            cor);



    QMessageBox qmsg;
    qmsg.setWindowTitle("Confirmação");
    qmsg.setText("O enfermeiro foi criado com sucesso");
    qmsg.exec();
    clearForm();

    this->close();

}

void CreateNurseWindow::clearForm()
{
    ui->cpf->clear();
    ui->coren->clear();
    ui->dateEdit->clear();
    ui->nome->clear();
}
