import QtQuick 2.0

Loader {
    id: _loader

    function reload() {
        source = "";
        $QmlEngine.clearCache();
        source = "Circle.qml";
    }

    anchors.centerIn: parent
    source: "text.qml"
}