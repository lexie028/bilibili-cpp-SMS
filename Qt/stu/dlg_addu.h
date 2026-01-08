#ifndef DLG_ADDU_H
#define DLG_ADDU_H

#include <QDialog>
#include "stusql.h"
namespace Ui {
class dlg_addu;
}

class dlg_addu : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_addu(QWidget *parent = nullptr);
    ~dlg_addu();
    void setType(bool isAdd,UserInfo info={});

private slots:
    void on_btn_exit_clicked();

    void on_btn_save_clicked();

private:
    Ui::dlg_addu *ui;
    bool m_isAdd;
    int m_id;
    UserInfo m_info;
};

#endif // DLG_ADDU_H
