#include "postdetailswindow.h"
#include "ui_postdetailswindow.h"

PostDetailsWindow::PostDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PostDetailsWindow)
{
    ui->setupUi(this);
}

PostDetailsWindow::~PostDetailsWindow()
{
    delete ui;
}

void PostDetailsWindow::on_updatePostButton_clicked()
{

}

void PostDetailsWindow::on_removePostButton_clicked()
{

}

void PostDetailsWindow::on_updateNumberVaccinesButton_clicked()
{

}
