#include "providerclass.h"
#include "listitemclass.h"
#include <QDebug>
#include <QObject>
#include <QVariantList>
#include <QVariant>

ProviderClass::ProviderClass(QObject *parent): QObject(parent)
{
    ListItemClass* lptr;
    myVl.append(qVariantFromValue((QObject*)new  ListItemClass(nullptr, 22.4, 1.5)));
    myVl.append(qVariantFromValue((QObject*)new  ListItemClass(nullptr, 1.1, 2.4)));
    myVl.append(qVariantFromValue((QObject*)new  ListItemClass(nullptr, 5.5, 3.2)));

}
