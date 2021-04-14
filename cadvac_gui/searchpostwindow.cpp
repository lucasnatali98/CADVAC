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


void SearchPostWindow::on_searchPostButton_clicked()
{
    postDetailsWindow.setVisible(true);
    postDetailsWindow.setSys(sys);

    Posts* po = sys->post->getPost("posto1");
    QString address = QString::fromUtf8(po->getAddress().c_str());
    QString name = QString::fromUtf8(po->getPostName().c_str());
    QString vaccines = QString::number(po->getVaccineCount());


    cout<<"N: "<<*po<<endl;
    postDetailsWindow.getAddressLineEdit()->setText(address);
    postDetailsWindow.getPostNameLineEdit()->setText(name);
    //postDetailsWindow.getCorenLineEdit()->setText(coren);

}
