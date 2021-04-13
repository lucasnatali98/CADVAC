#include "searchpatientwindow.h"
#include "ui_searchpatientwindow.h"

SearchPatientWindow::SearchPatientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchPatientWindow)
{
    ui->setupUi(this);
}

SearchPatientWindow::~SearchPatientWindow()
{
    delete ui;
}

void SearchPatientWindow::on_searchPatientButton_clicked()
{

}
