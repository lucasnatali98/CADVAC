#ifndef POSTSMANAGEMENTWINDOW_H
#define POSTSMANAGEMENTWINDOW_H
#include "createpostwindow.h"
#include "searchpostwindow.h"
#include "../src/system.h"
#include <QMainWindow>
#include <QLineEdit>
#include <iostream>
using namespace std;
namespace Ui {
class PostsManagementWindow;
}

class PostsManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    System* sys;
    CreatePostWindow *createPostWindow;
    SearchPostWindow *searchPostWindow;
    explicit PostsManagementWindow(QWidget *parent = 0);
    ~PostsManagementWindow();
    QLineEdit *getSecretary();

private slots:
    void on_createPostButton_clicked();

    void on_findPostButton_clicked();

    void on_previusPageCommandButton_clicked();

private:
    Ui::PostsManagementWindow *ui;
};

#endif // POSTSMANAGEMENTWINDOW_H
