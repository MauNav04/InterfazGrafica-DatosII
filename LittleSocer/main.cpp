#include <QApplication>
#include <QPushButton>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QString>
#include <QDebug>
#include <QList>
#include <QRectF>
#include <QPixmap>
#include <QThread>
#include <QStyleOptionGraphicsItem>
#include <QLabel>
#include "../LittleSocer/Headers/BoardManger.h"

using namespace std;


int main(int argc, char *argv[]) {

    QApplication a(argc, argv);

    //First thing Create a Scene
    QGraphicsScene * scene = new QGraphicsScene();

    QGraphicsView * view = new QGraphicsView; //View is also a widget that makes the Scene and its elements visible, so we also must display it
    view->setScene(scene);

    //Deletes the scroll bars for the screen
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //shows the view
    view->show();
    //Sets new fixed size for the view
    view->setFixedSize(800,600);
    //Positions the scene on 0,0 and sets the size same as the view
    scene->setSceneRect(0,0,750,600);

    BoardManger *BManager = new BoardManger(scene,11,1,5);

    return QApplication::exec();

}