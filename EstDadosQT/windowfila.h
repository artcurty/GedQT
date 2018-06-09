#ifndef WINDOWFILA_H
#define WINDOWFILA_H

#include <QDialog>

namespace Ui {
class windowfila;
}

class windowfila : public QDialog
{
    Q_OBJECT

public:
    explicit windowfila(QWidget *parent = 0);
    ~windowfila();

private slots:
    void on_Enqueue_clicked();

    void on_Dequeue_clicked();

    void on_Peek_clicked();

private:
    Ui::windowfila *ui;
};

#endif // WINDOWFILA_H
