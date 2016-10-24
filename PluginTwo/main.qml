import QtQuick 2.7
import QtQuick.Controls 2.0

//Item{
//    Label {
//        anchors.centerIn: parent
//        text: model.title
//    }
//}
Item {
    Column {
        anchors.centerIn: parent
        Label {
            text: model.title
            width: implicitWidth
            height: implicitHeight
        }
        CustomControl {}
    }
}

