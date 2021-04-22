#ifndef HEALTHSECRETARYWINDOW_H
#define HEALTHSECRETARYWINDOW_H
#include "nursemanagementwindow.h"
#include "patientmanagementwindow.h"
#include "postsmanagementwindow.h"
#include "user.h"
#include "connectdb.h"
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

    explicit HealthSecretaryWindow(QWidget *parent = 0, User *currentUser = 0);
    ~HealthSecretaryWindow();

    User *currentUser;

    PostsManagementWindow *posts_mw;
    NurseManagementWindow *nurse_mw;
    PatientManagementWindow *patient_mw;

//    Ui::HealthSecretaryWindow *ui;
//    Ui::HealthSecretaryWindow *ui;

private slots:
    void on_nurseManagementButton_clicked();

    void on_patientManagementButton_clicked();

    void on_postsManagementButton_clicked();

    void on_exitSystemLinkButton_clicked();

private:
    Ui::HealthSecretaryWindow *ui;
};

#endif // HEALTHSECRETARYWINDOW_H
