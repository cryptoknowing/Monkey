#ifndef ADDEDITMASTERNODE_H
#define ADDEDITMASTERNODE_H

#include <QDialog>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>

namespace Ui {
class AddEditMasternode;
}


class AddEditMasternode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditMasternode(QWidget *parent = 0);
    ~AddEditMasternode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void on_AddEditAddressPasteButton_clicked();
    void on_AddEditPrivkeyPasteButton_clicked();
    void on_AddEditTxhashPasteButton_clicked();

signals:

private:
    Ui::AddEditMasternode *ui;
};

#endif // ADDEDITMASTERNODE_H
