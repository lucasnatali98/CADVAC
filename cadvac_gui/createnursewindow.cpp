#include "createnursewindow.h"
#include "ui_createnursewindow.h"

CreateNurseWindow::CreateNurseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateNurseWindow)
{
    ui->setupUi(this);
    ui->secretario->setText("Secretario1");
    sys = new System();
}

CreateNurseWindow::~CreateNurseWindow()
{
    delete ui;
}

void CreateNurseWindow::on_pushButton_clicked()
{
    //qDebug()<<ui->cpf->text();
    //qDebug()<<ui->nome->text();
    //qDebug()<<ui->coren->text();
    //qDebug()<<ui->dateEdit->text();


    int cor = ui->coren->text().toInt();
    sys->nurse->createNurse(ui->cpf->text().toStdString(), ui->nome->text().toStdString(),
                            ui->dateEdit->text().toStdString(),
                            cor);
    sys->nurse->listNurses();

}
