#ifndef NURSEMANAGEMENTWINDOW_H
#define NURSEMANAGEMENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class NurseManagementWindow;
}

class NurseManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NurseManagementWindow(QWidget *parent = 0);
    ~NurseManagementWindow();

private slots:
    void on_createPostButton_clicked();

    void on_findPostButton_clicked();

    void on_previusPageCommandButton_clicked();

private:
    Ui::NurseManagementWindow *ui;
};

#endif // NURSEMANAGEMENTWINDOW_H
