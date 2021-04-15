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

    Posts* po = sys->post->getPost(ui->nameLineEdit->text().toStdString());
    if(po != nullptr){
        postDetailsWindow.setVisible(true);
        postDetailsWindow.setSys(sys);


        QString address = QString::fromUtf8(po->getAddress().c_str());
        QString name = QString::fromUtf8(po->getPostName().c_str());
        QString vaccines = QString::number(po->getVaccineCount());


        //cout<<"N: "<<*po<<endl;
        postDetailsWindow.getAddressLineEdit()->setText(address);
        postDetailsWindow.getPostNameLineEdit()->setText(name);
        postDetailsWindow.getVaccinesLineEdit()->setText(vaccines);

    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("ERRO");
        qmsg.setText("Não existe posto registrado com este nome");
        qmsg.exec();
    }

    clearForm();
    this->close();

}

void SearchPostWindow::clearForm()
{
    ui->nameLineEdit->clear();

}
