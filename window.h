#ifndef WINDOW_H
#define WINDOW_H
#include <QWebView>
#include <QMainWindow>

class Window : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);

signals:

public slots:

private:
    QWebView * pWebView;
};

#endif // WINDOW_H
