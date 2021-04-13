#include "searchpostwindow.h"
#include "ui_searchpostwindow.h"

SearchPostWindow::SearchPostWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchPostWindow)
{
    ui->setupUi(this);
}

SearchPostWindow::~SearchPostWindow()
{
    delete ui;
}

void SearchPostWindow::on_searchPatientButton_clicked()
{

}
