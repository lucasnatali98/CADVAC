#include "createpostwindow.h"
#include "ui_createpostwindow.h"

System *CreatePostWindow::getSys() const
{
    return sys;
}

CreatePostWindow::CreatePostWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreatePostWindow)
{
    ui->setupUi(this);
    sys = new System();
}

CreatePostWindow::~CreatePostWindow()
{
    delete ui;
}

void CreatePostWindow::on_addPostButton_clicked()
{

    sys->post->createPost(ui->nameLineEdit->text().toStdString(),
                          ui->adressLineEdit->text().toStdString());



    QMessageBox qmsg;
    qmsg.setWindowTitle("Confirmação");
    qmsg.setText("O posto de saúde foi criado com sucesso");
    qmsg.exec();
    clearForm();

    this->close();
}
void CreatePostWindow::clearForm()
{
    ui->adressLineEdit->clear();
    ui->nameLineEdit->clear();
}
