#include "postsmanagementwindow.h"
#include "ui_postsmanagementwindow.h"

PostsManagementWindow::PostsManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PostsManagementWindow)
{
    ui->setupUi(this);
}

PostsManagementWindow::~PostsManagementWindow()
{
    delete ui;
}

void PostsManagementWindow::on_createPostButton_clicked()
{

}

void PostsManagementWindow::on_findPostButton_clicked()
{

}

void PostsManagementWindow::on_previusPageCommandButton_clicked()
{

}
