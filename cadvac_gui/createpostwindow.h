#ifndef CREATEPOSTWINDOW_H
#define CREATEPOSTWINDOW_H
#include "user.h"
#include "connectdb.h"
#include <QMessageBox>
#include <QMainWindow>

namespace Ui {
class CreatePostWindow;
}

class CreatePostWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreatePostWindow(QWidget *parent = 0, User *currentUser = 0);
    ~CreatePostWindow();

    User *currentUser;
    ConnectDb dataBase;

private slots:
    void on_addPostButton_clicked();
    void clearForm();
private:
    Ui::CreatePostWindow *ui;
};

#endif // CREATEPOSTWINDOW_H
