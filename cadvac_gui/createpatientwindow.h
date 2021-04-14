#ifndef CREATEPATIENTWINDOW_H
#define CREATEPATIENTWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "../src/system.h"
namespace Ui {
class CreatePatientWindow;
}

class CreatePatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    explicit CreatePatientWindow(QWidget *parent = 0);
    ~CreatePatientWindow();

    System *getSys() const;
    //void setSys(System *value);

private slots:
    void on_addPatientButton_clicked();
    void clearForm();
private:
    Ui::CreatePatientWindow *ui;
};

#endif // CREATEPATIENTWINDOW_H
