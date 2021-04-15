#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    health = new HealthSecretaryWindow();
    sys = new System();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    bool response =sys->login(ui->cpf->text().toStdString(), ui->password->text().toStdString());
    if(response){
        health->setVisible(true);
    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("ERRO");
        qmsg.setText("Informações invalidas");
        qmsg.exec();
    }

}
