#ifndef SEARCHPATIENTWINDOW_H
#define SEARCHPATIENTWINDOW_H
#include "patientdetailswindow.h"
#include <QMainWindow>
#include <iostream>
#include "../src/system.h"
using namespace std;
namespace Ui {
class SearchPatientWindow;
}

class SearchPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    PatientDetailsWindow patientDetailsWindow;
    explicit SearchPatientWindow(QWidget *parent = 0);
    ~SearchPatientWindow();

private slots:
    void on_searchPatientButton_clicked();

private:
    Ui::SearchPatientWindow *ui;
};

#endif // SEARCHPATIENTWINDOW_H
