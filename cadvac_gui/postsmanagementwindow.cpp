#include "postsmanagementwindow.h"
#include "ui_postsmanagementwindow.h"

PostsManagementWindow::PostsManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PostsManagementWindow)
{
    ui->setupUi(this);
    sys = new System();
    createPostWindow = new CreatePostWindow();
    searchPostWindow = new SearchPostWindow();
}

PostsManagementWindow::~PostsManagementWindow()
{
    delete ui;
}

QLineEdit *PostsManagementWindow::getSecretary()
{
    return ui->secretaryName;
}

void PostsManagementWindow::on_createPostButton_clicked()
{
    createPostWindow->setVisible(true);
    sys->post = createPostWindow->getSys()->post;
}

void PostsManagementWindow::on_findPostButton_clicked()
{
    searchPostWindow->setVisible(true);
    searchPostWindow->sys = sys;

    searchPostWindow->sys->post->listPosts();
}

void PostsManagementWindow::on_previusPageCommandButton_clicked()
{
    this->close();
}
