#include "searchnursewindow.h"
#include "ui_searchnursewindow.h"

SearchNurseWindow::SearchNurseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchNurseWindow)
{
    ui->setupUi(this);
}

SearchNurseWindow::~SearchNurseWindow()
{
    delete ui;
}

void SearchNurseWindow::on_searchNurseButton_clicked()
{

}
