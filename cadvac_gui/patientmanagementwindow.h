#ifndef PATIENTMANAGEMENTWINDOW_H
#define PATIENTMANAGEMENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class PatientManagementWindow;
}

class PatientManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PatientManagementWindow(QWidget *parent = 0);
    ~PatientManagementWindow();

private slots:
    void on_createPostButton_clicked();

    void on_findPostButton_clicked();

private:
    Ui::PatientManagementWindow *ui;
};

#endif // PACIENTMANAGEMENTWINDOW_H
