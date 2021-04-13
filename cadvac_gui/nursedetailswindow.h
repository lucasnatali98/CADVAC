#ifndef NURSEDETAILSWINDOW_H
#define NURSEDETAILSWINDOW_H

#include <QMainWindow>

namespace Ui {
class NurseDetailsWindow;
}

class NurseDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NurseDetailsWindow(QWidget *parent = 0);
    ~NurseDetailsWindow();

private slots:
    void on_removePatientButton_clicked();

    void on_updatePatientButton_clicked();

private:
    Ui::NurseDetailsWindow *ui;
};

#endif // NURSEDETAILSWINDOW_H
