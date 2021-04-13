#ifndef SEARCHPOSTWINDOW_H
#define SEARCHPOSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchPostWindow;
}

class SearchPostWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchPostWindow(QWidget *parent = 0);
    ~SearchPostWindow();

private slots:
    void on_searchPatientButton_clicked();

private:
    Ui::SearchPostWindow *ui;
};

#endif // SEARCHPOSTWINDOW_H
