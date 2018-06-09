#ifndef WINDOWPILHA_H
#define WINDOWPILHA_H

#include <QDialog>

namespace Ui {
class windowpilha;
}

class windowpilha : public QDialog
{
    Q_OBJECT

public:
    explicit windowpilha(QWidget *parent = 0);
    ~windowpilha();

private slots:
    void on_OK_clicked();

    void on_pushButton_clicked();

    void on_Peek_clicked();

private:
    Ui::windowpilha *ui;
};

#endif // WINDOWPILHA_H
