#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>

#include "property_class.h"

int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QGuiApplication app(argc, argv);

	QQmlApplicationEngine engine;
	qmlRegisterType<property_class>("propertyclass", 1, 0, "PropertyClass");
	engine.load(QUrl(QLatin1String("qrc:/main.qml")));
	if (engine.rootObjects().isEmpty())
	return -1;
	return app.exec();
}
