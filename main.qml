import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import propertyclass 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    PropertyClass{
        id:reg_class
    }
    Button{
        text:"print in qml"
        anchors.centerIn: parent
        onClicked: {
            reg_class.str_value = "all in qml but based on c++";
            reg_class.print();
        }
    }
}
