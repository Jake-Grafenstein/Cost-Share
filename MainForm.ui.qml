import QtQuick 2.5

Rectangle {

    width: 360
    height: 360

    MouseArea {
        id: mouseArea
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent


        MouseArea {
            id: mouseArea1
            x: 127
            y: 90
            width: 107
            height: 48
        }
        Rectangle {
            id: middlerect
            width: 107
            height: 48
            color: "#555555"
            radius: 2
            anchors.left: parent.left
            anchors.leftMargin: 127
            anchors.top: parent.top
            anchors.topMargin: 90
        }
    }

    Text {
        id: text1
        anchors.centerIn: parent
        text: "Hi there"
    }
}
