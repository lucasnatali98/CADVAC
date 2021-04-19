#ifndef UPDATEPATIENTWINDOW_H
#define UPDATEPATIENTWINDOW_H
#include "user.h"
#include "patient.h"
#include "connectdb.h"
#include <iostream>
#include <QtDebug>
#include <QMainWindow>
#include <QMessageBox>


namespace Ui {
class UpdatePatientWindow;
}

class UpdatePatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdatePatientWindow(QWidget *parent = nullptr, Patient *searchPatient = 0);
    ~UpdatePatientWindow();

    QWidget *parentWindown;
    Patient *patient;
    ConnectDb dataBase;

private slots:
    void on_pushButton_clicked();

private:
    Ui::UpdatePatientWindow *ui;
    void clearForm();
};

#endif // UPDATEPATIENTWINDOW_H
