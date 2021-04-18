#include "updatepostwindow.h"
#include "ui_updatepostwindow.h"

UpdatePostWindow::UpdatePostWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdatePostWindow)
{
    ui->setupUi(this);
}

UpdatePostWindow::~UpdatePostWindow()
{
    delete ui;
}

void UpdatePostWindow::on_updatePostButton_clicked()
{
    Posts* p = sys->post->getPost(postName_aux);
    bool result = sys->post->updatePost(p, ui->nameLineEdit->text().toStdString(),
                                        ui->adressLineEdit->text().toStdString(),
                                        ui->availableVaccinesLineEdit->text().toInt());
    if(result == true){
        QMessageBox qmsg;
        qmsg.setWindowTitle("Confirmação");
        qmsg.setText("O posto de saúde foi atualizado com sucesso");
        qmsg.exec();
    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("Erro");
        qmsg.setText("Não foi possivel atualizar o posto de saúde");
        qmsg.exec();
    }
    this->close();
}
