#ifndef VACCINESDOSESTAKENWINDOW_H
#define VACCINESDOSESTAKENWINDOW_H
#include "patient.h"
#include "connectdb.h"
#include "updatepatientwindow.h"
#include <iostream>
#include <QLineEdit>
#include <QMessageBox>

namespace Ui {
class VaccinesDosesTakenWindow;
}

class VaccinesDosesTakenWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VaccinesDosesTakenWindow(QWidget *parent = nullptr, Patient *searchPatient = 0);
    ~VaccinesDosesTakenWindow();

    Patient *patient;
    QWidget *parentWindown;
    ConnectDb dataBase;

private slots:
    void on_buttonBox_accepted();
    void clearForm();
private:
    Ui::VaccinesDosesTakenWindow *ui;

};

#endif // VACCINESDOSESTAKENWINDOW_H
