#include "providerclass.h"
#include "listitemclass.h"
#include <QDebug>
#include <QObject>
#include <QVariantList>
#include <QVariant>

ProviderClass::ProviderClass(QObject *parent): QObject(parent)
{
    ListItemClass* lptr;
    lptr = new  ListItemClass(nullptr, 1.1, 2.4);
    myVl.append(qVariantFromValue((QObject*)lptr));
    lptr = new  ListItemClass(nullptr, 1.5, 2.4);
    myVl.append(qVariantFromValue((QObject*)lptr));
}
