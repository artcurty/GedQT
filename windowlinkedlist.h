#ifndef WINDOWLINKEDLIST_H
#define WINDOWLINKEDLIST_H

#include <QDialog>

namespace Ui {
class windowLinkedList;
}

class windowLinkedList : public QDialog
{
    Q_OBJECT

public:
    explicit windowLinkedList(QWidget *parent = 0);
    ~windowLinkedList();

private slots:

    void on_search_clicked();

    void on_InsertFront_clicked();

    void on_insertAfter_clicked();

    void on_insertN_clicked();

    void on_removeN_clicked();

    void on_removeAfter_clicked();

    void on_removeFront_clicked();

private:
    Ui::windowLinkedList *ui;
};

#endif // WINDOWLINKEDLIST_H
