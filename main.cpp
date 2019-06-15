#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "providerclass.h"
#include "consumerclass.h"
#include "listitemclass.h"
#include <QQmlContext>
#include <QVariant>
#include <QVariantList>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    ProviderClass pcl;

    qmlRegisterType<ConsumerClass>("test", 1, 0, "ConsumerClass");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    engine.rootContext()->setContextProperty("providerClass", &pcl);

    return app.exec();
}
