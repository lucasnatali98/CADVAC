#include "updatenursewindow.h"
#include "ui_updatenursewindow.h"

UpdateNurseWindow::UpdateNurseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdateNurseWindow)
{
    ui->setupUi(this);
}

UpdateNurseWindow::~UpdateNurseWindow()
{
    delete ui;
}

void UpdateNurseWindow::on_updateNurseButton_clicked()
{
    Nurse* n = sys->nurse->getNurse(cpf_aux);
    bool result = sys->nurse->updateNurse(n, ui->cpf->text().toStdString(),
                            ui->nome->text().toStdString(),
                            ui->dateEdit->text().toStdString(),
                            ui->coren->text().toInt());
    if(result == true){
        QMessageBox qmsg;
        qmsg.setWindowTitle("Confirmação");
        qmsg.setText("O enfermeiro foi atualizado com sucesso");
        qmsg.exec();
    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("Erro");
        qmsg.setText("Não foi possivel atualizar o enfermeiro");
        qmsg.exec();
    }
    this->close();
}
