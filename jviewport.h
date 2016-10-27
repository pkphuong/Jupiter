

#ifndef JVIEWPORT_H
#define JVIEWPORT_H
#include <QGraphicsView>
#include <QEvent>
#include <QHoverEvent>
class jViewPort : public QGraphicsView
{
public:
    jViewPort(QGraphicsScene *scene, QWidget *parent = 0);
    jViewPort();
    void setMap(QPixmap *map);
private:
    QPixmap *pMap;
    short   dxMap,dyMap;
    short   dx,dy;
    short   mouseX, mouseY;
    short   mousePointerX, mousePointerY;
    bool    isDraging;
protected:
    void hoverEnter(QHoverEvent *event);
    void hoverLeave(QHoverEvent *event);
    void hoverMove(QHoverEvent *event);
    //bool event(QEvent *event);
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *e);
};

#endif // JVIEWPORT_H
