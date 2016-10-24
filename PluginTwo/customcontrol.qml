import QtQuick 2.7

Rectangle {
    color: "lightblue"
    width: textItem.width
    height: textItem.height
    Text {
        id: textItem
        width: implicitWidth
        height: implicitHeight
        text: "plugin two custom control"
    }
    MouseArea {
        anchors.fill: parent
        onClicked: textItem.text = "control clicked"
    }
}
