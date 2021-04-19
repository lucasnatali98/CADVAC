#include "patientdetailswindow.h"
#include "ui_patientdetailswindow.h"

PatientDetailsWindow::PatientDetailsWindow(QWidget *parent, Patient* searchPatient) : QMainWindow(parent), ui(new Ui::PatientDetailsWindow)
{
    ui->setupUi(this);
    patient = searchPatient;
    parentWindown = parent;

    parent->setVisible(true);

    ui->cpfLineEdit->setText(QString::fromStdString(patient->getCpf()));
    ui->nameLineEdit->setText(QString::fromStdString(patient->getName()));
    ui->numberSUS_lineEdit->setText(QString::fromStdString(patient->getSusNumber()));
    ui->birthDateLineEdit->setText(QString::fromStdString(patient->getBirthDate()));
    ui->dosesTakenLineEdit->setText(QString::number(patient->getVaccineDosesTaken()));

}

PatientDetailsWindow::~PatientDetailsWindow()
{
    delete ui;
}


void PatientDetailsWindow::on_scheduleVaccinationButton_clicked()
{
    vaccinesDosesTakenWindow = new VaccinesDosesTakenWindow(this, patient);
    vaccinesDosesTakenWindow->setVisible(true);
}

void PatientDetailsWindow::on_removePatientButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QSqlQuery query;
        if(query.prepare("DELETE FROM Patients WHERE cpf='"+QString::fromStdString(patient->getCpf())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Paciente removido com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao deletar");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}

void PatientDetailsWindow::on_updatePatientButton_clicked()
{
    updatePatientWindow = new UpdatePatientWindow(this, patient);
    updatePatientWindow->setVisible(true);
}

void PatientDetailsWindow::clearForm()
{
    ui->cpfLineEdit->clear();
    ui->birthDateLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->numberSUS_lineEdit->clear();
}
