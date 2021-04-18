#include "updateavailablevaccineswindow.h"
#include "ui_updateavailablevaccineswindow.h"

//System *UpdateAvailableVaccinesWindow::getSys() const
//{
//    return sys;
//}

//void UpdateAvailableVaccinesWindow::setSys(System *value)
//{
//    sys = value;
//}

UpdateAvailableVaccinesWindow::UpdateAvailableVaccinesWindow(QWidget *parent, User *currentUser) :
    QMainWindow(parent),
    ui(new Ui::UpdateAvailableVaccinesWindow)
{
    ui->setupUi(this);
//    sys = new System();
}

UpdateAvailableVaccinesWindow::~UpdateAvailableVaccinesWindow()
{
    delete ui;
}

void UpdateAvailableVaccinesWindow::on_updateVaccinesButton_clicked()
{
//    Posts *p = sys->post->getPost(postName);

//    if(p!=nullptr){
//        int v = ui->vaccines->text().toInt();

////        sys->post->updateVaccineNumber(p, v);
//        //cout<<"Posto: "<<*p<<endl;
//        QMessageBox qmsg;
//        qmsg.setWindowTitle("Confirmação");
//        qmsg.setText("O número de vacinas foi atualizado com sucesso");
//        qmsg.exec();
//    }
//    else{
//        QMessageBox qmsg;
//        qmsg.setWindowTitle("ERRO");
//        qmsg.setText("O número de vacinas não pode ser atualizado");
//        qmsg.exec();
//    }


    clearForm();

    this->close();
}

void UpdateAvailableVaccinesWindow::clearForm()
{
    ui->vaccines->clear();

}
