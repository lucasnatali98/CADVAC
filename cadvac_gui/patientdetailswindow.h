#ifndef PATIENTDETAILSWINDOW_H
#define PATIENTDETAILSWINDOW_H

#include <QMainWindow>

namespace Ui {
class PatientDetailsWindow;
}

class PatientDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PatientDetailsWindow(QWidget *parent = 0);
    ~PatientDetailsWindow();

private slots:
    void on_scheduleVaccinationButton_clicked();

    void on_removePatientButton_clicked();

    void on_updatePatientButton_clicked();

private:
    Ui::PatientDetailsWindow *ui;
};

#endif // PATIENTDETAILSWINDOW_H
