#include "vaccinesdosestakenwindow.h"
#include "ui_vaccinesdosestakenwindow.h"

VaccinesDosesTakenWindow::VaccinesDosesTakenWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VaccinesDosesTakenWindow)
{
    ui->setupUi(this);
    sys = new System();
}

VaccinesDosesTakenWindow::~VaccinesDosesTakenWindow()
{
    delete ui;
}

void VaccinesDosesTakenWindow::on_buttonBox_accepted()
{
    Patient *p = sys->patient->getPatient(cpf_aux);
    bool result = sys->patient->updateVaccinesDosesTaken(p,
                                                         ui->vaccinesDosesTakenLineEdit->text().toInt());


}

void VaccinesDosesTakenWindow::on_buttonBox_rejected()
{

    this->close();
}
