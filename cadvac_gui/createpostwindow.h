#ifndef CREATEPOSTWINDOW_H
#define CREATEPOSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class CreatePostWindow;
}

class CreatePostWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreatePostWindow(QWidget *parent = 0);
    ~CreatePostWindow();

private slots:
    void on_addPatientButton_clicked();

private:
    Ui::CreatePostWindow *ui;
};

#endif // CREATEPOSTWINDOW_H
