import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Window 2.2
import QtQuick.Layouts 1.3

Window {
    id: mainWindow
    objectName: "mainWindow"
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    StackLayout {
        id: mainView
        objectName: "mainView"
        anchors.fill: parent
        currentIndex: tabBar.currentIndex
    }

    TabBar {
        id: tabBar
        objectName: "tabHeaderView"
        currentIndex: mainView.currentIndex
        width: parent.width
    }
}
