#include "listitemclass.h"
#include <QDebug>
#include <QObject>
#include <QVariantList>
#include <QVariant>

ListItemClass::ListItemClass(QObject *parent, double x, double t) : QObject(parent), m_x(x), m_t(t)
{

}
