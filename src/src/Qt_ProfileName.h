#ifndef QT_PROFILENAME_H
#define QT_PROFILENAME_H
#include <QWidget>
#include <QtGui/QDialog>

namespace Ui {
    class ProfileName;
}

class ProfileName : public QDialog {
    Q_OBJECT


public:
    explicit ProfileName(QWidget *parent = 0);
    ~ProfileName();

    QString GetProfileName();
protected:

    virtual void changeEvent(QEvent *e);

private:
    Ui::ProfileName *m_ui;
};

#endif // QT_PROFILENAME_H
