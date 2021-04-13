#ifndef POSTSMANAGEMENTWINDOW_H
#define POSTSMANAGEMENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class PostsManagementWindow;
}

class PostsManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PostsManagementWindow(QWidget *parent = 0);
    ~PostsManagementWindow();

private slots:
    void on_createPostButton_clicked();

    void on_findPostButton_clicked();

    void on_previusPageCommandButton_clicked();

private:
    Ui::PostsManagementWindow *ui;
};

#endif // POSTSMANAGEMENTWINDOW_H
