#ifndef CREATEPOSTWINDOW_H
#define CREATEPOSTWINDOW_H
#include "../src/system.h"
#include <QMessageBox>

#include <QMainWindow>

namespace Ui {
class CreatePostWindow;
}

class CreatePostWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    explicit CreatePostWindow(QWidget *parent = 0);
    ~CreatePostWindow();

    System *getSys() const;

private slots:


    void on_addPostButton_clicked();
    void clearForm();
private:
    Ui::CreatePostWindow *ui;
};

#endif // CREATEPOSTWINDOW_H
