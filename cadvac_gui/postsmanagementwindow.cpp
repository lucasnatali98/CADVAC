#include "postsmanagementwindow.h"
#include "ui_postsmanagementwindow.h"

PostsManagementWindow::PostsManagementWindow(QWidget *parent, User *currentUser) : QMainWindow(parent), ui(new Ui::PostsManagementWindow)
{
    ui->setupUi(this);

    ui->secretaryName->setText(QString::fromStdString(currentUser->getName()));

    createPostWindow = new CreatePostWindow(this, currentUser);
    searchPostWindow = new SearchPostWindow(this, currentUser);
}

PostsManagementWindow::~PostsManagementWindow()
{
    delete ui;
}

void PostsManagementWindow::on_createPostButton_clicked()
{
//    this->close();
    createPostWindow->setVisible(true);
}

void PostsManagementWindow::on_findPostButton_clicked()
{
//    this->close();
    searchPostWindow->setVisible(true);
}

void PostsManagementWindow::on_previusPageCommandButton_clicked()
{
    this->close();
}
