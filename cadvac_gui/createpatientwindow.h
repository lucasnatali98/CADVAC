#ifndef CREATEPATIENTWINDOW_H
#define CREATEPATIENTWINDOW_H

#include <QMainWindow>

#include "../src/system.h"
namespace Ui {
class CreatePatientWindow;
}

class CreatePatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreatePatientWindow(QWidget *parent = 0);
    ~CreatePatientWindow();

private slots:
    void on_addPatientButton_clicked();

private:
    Ui::CreatePatientWindow *ui;
};

#endif // CREATEPATIENTWINDOW_H
