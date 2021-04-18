#ifndef UPDATEPATIENTWINDOW_H
#define UPDATEPATIENTWINDOW_H

#include <QMainWindow>
#include "../src/system.h"
#include <QMessageBox>
using namespace std;
namespace Ui {
class UpdatePatientWindow;
}

class UpdatePatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    string cpf_aux;
    explicit UpdatePatientWindow(QWidget *parent = 0);
    ~UpdatePatientWindow();

private slots:
    void on_updatePatientButton_clicked();

private:
    Ui::UpdatePatientWindow *ui;
};

#endif // UPDATEPATIENTWINDOW_H
