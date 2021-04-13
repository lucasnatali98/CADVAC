#include "createpostwindow.h"
#include "ui_createpostwindow.h"

CreatePostWindow::CreatePostWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreatePostWindow)
{
    ui->setupUi(this);
}

CreatePostWindow::~CreatePostWindow()
{
    delete ui;
}

void CreatePostWindow::on_addPatientButton_clicked()
{

}
