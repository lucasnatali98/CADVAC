#ifndef POSTDETAILSWINDOW_H
#define POSTDETAILSWINDOW_H

#include <QMainWindow>

namespace Ui {
class PostDetailsWindow;
}

class PostDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PostDetailsWindow(QWidget *parent = 0);
    ~PostDetailsWindow();

private slots:
    void on_updatePostButton_clicked();

    void on_removePostButton_clicked();

    void on_updateNumberVaccinesButton_clicked();

private:
    Ui::PostDetailsWindow *ui;
};

#endif // POSTDETAILSWINDOW_H
