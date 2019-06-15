#ifndef LISTITEMCLASS_H
#define LISTITEMCLASS_H

#include <QVariant>
#include <QVariantList>
#include <QObject>

class ListItemClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double x READ getX NOTIFY xChanged)
    Q_PROPERTY(double t READ getT NOTIFY tChanged)

public:
    ListItemClass(QObject *parent = nullptr, double x = 0, double t = 0);

    double getX() {
        return m_x;
    }
    double getT() {
        return m_t;
    }

signals:
    void xChanged();
    void tChanged();

private:
    double m_x;
    double m_t;

public slots:
};

#endif // LISTITEMCLASS_H
