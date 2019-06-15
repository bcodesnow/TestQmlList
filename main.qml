import QtQuick 2.10
import QtQuick.Window 2.10
import test 1.0
import QtQuick.Controls 2.2


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ConsumerClass
    {
        id:myConsumer

        onVlChanged:
        {
            console.log("CHANGED!")
            myConsumer.show_what_you_got()
        }
    }

    RoundButton
    {
        id: butt
        width: parent.width / 5
        height: width
        anchors.centerIn: parent
        radius: width / 8
        text: "CLICK ME"
        onClicked:
        {
            console.log("CLICKED!")
            myConsumer.vl = providerClass.vl

        }
    }


}
