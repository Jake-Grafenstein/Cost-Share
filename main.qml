import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Cost Share application")

    MainForm {
        anchors.fill: parent
        id: page
        mouseArea1.onClicked: {
            Group.startSession();
        }

        mouseArea.onClicked: {
            Qt.quit();
        }
    }
}
