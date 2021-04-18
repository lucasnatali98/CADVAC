#include "nursedetailswindow.h"
#include "ui_nursedetailswindow.h"

System *NurseDetailsWindow::getSys() const
{
    return sys;
}

void NurseDetailsWindow::setSys(System *value)
{
    sys = value;
}

QLineEdit *NurseDetailsWindow::getCpfLineEdit()
{
    return ui->cpfLineEdit;
}

QLineEdit *NurseDetailsWindow::getNameLineEdit()
{
    return ui->nameLineEdit;
}

QLineEdit *NurseDetailsWindow::getCorenLineEdit()
{
    return ui->numberCorenlineEdit;
}

QLineEdit *NurseDetailsWindow::getBirthDateLineEdit()
{
    return ui->birthDateLineEdit;
}

NurseDetailsWindow::NurseDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NurseDetailsWindow)
{
    ui->setupUi(this);

    sys = new System();

}

NurseDetailsWindow::~NurseDetailsWindow()
{
    clearForm();
    delete ui;
}


void NurseDetailsWindow::on_updateNurseButton_clicked()
{
    updateNurse.setVisible(true);
    updateNurse.sys = sys;
    updateNurse.cpf_aux = ui->cpfLineEdit->text().toStdString();

    this->close();
}

void NurseDetailsWindow::on_removeNurseButton_clicked()
{

    bool result = sys->nurse->removeNurse(ui->cpfLineEdit->text().toStdString());
    if(result == true){
        QMessageBox qmsg;
        qmsg.setWindowTitle("Confirmação");
        qmsg.setText("O enfermeiro foi removido com sucesso");
        qmsg.exec();
    }
    else{
        QMessageBox qmsg;
        qmsg.setWindowTitle("Erro");
        qmsg.setText("Não foi possivel remover o enfermeiro");
        qmsg.exec();
    }
    this->close();
}

void NurseDetailsWindow::clearForm()
{
    ui->birthDateLineEdit->clear();
    ui->cpfLineEdit->clear();
    ui->numberCorenlineEdit->clear();
    ui->nameLineEdit->clear();
}
