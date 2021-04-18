#include "updatepatientwindow.h"
#include "ui_updatepatientwindow.h"

UpdatePatientWindow::UpdatePatientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdatePatientWindow)
{
    ui->setupUi(this);
}

UpdatePatientWindow::~UpdatePatientWindow()
{
    delete ui;
}

void UpdatePatientWindow::on_updatePatientButton_clicked()
{
    Patient* p = sys->patient->getPatient(cpf_aux);
    bool result = sys->patient->updatePatient(p, ui->cpf->text().toStdString(),
                                           ui->name->text().toStdString(),
                                           ui->dateEdit->text().toStdString(),
                                           ui->susNumber->text().toStdString());
    if(result == true){
        QMessageBox qmsg;
        qmsg.setWindowTitle("Confirmação");
        qmsg.setText("O paciente foi atualizado com sucesso");
        qmsg.exec();
    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("Erro");
        qmsg.setText("Não foi possivel atualizar o paciente");
        qmsg.exec();
    }
    this->close();
}
