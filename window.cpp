#include "window.h"

Window::Window(QWidget *parent) : QMainWindow(parent)
{
    pWebView = new QWebView(this);
    this->setCentralWidget(pWebView);
    pWebView->load(QUrl("http://yahoo.com"));
}
