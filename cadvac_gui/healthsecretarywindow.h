#ifndef HEALTHSECRETARYWINDOW_H
#define HEALTHSECRETARYWINDOW_H
#include "nursemanagementwindow.h"
#include "patientmanagementwindow.h"
#include "postsmanagementwindow.h"
#include <QMainWindow>
#include <iostream>
using namespace std;

namespace Ui {
class HealthSecretaryWindow;
}

class HealthSecretaryWindow : public QMainWindow
{
    Q_OBJECT

public:
    PostsManagementWindow *posts_mw;
    NurseManagementWindow *nurse_mw;
    PatientManagementWindow *patient_mw;

    explicit HealthSecretaryWindow(QWidget *parent = 0);
    ~HealthSecretaryWindow();

private slots:
    void on_nurseManagementButton_clicked();

    void on_patientManagementButton_clicked();

    void on_postsManagementButton_clicked();

    void on_exitSystemLinkButton_clicked();

private:
    Ui::HealthSecretaryWindow *ui;
};

#endif // HEALTHSECRETARYWINDOW_H
