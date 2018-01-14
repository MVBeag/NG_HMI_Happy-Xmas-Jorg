#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
QApplication app(argc,argv);
QPushButton hello("Happy Xmas Jörg");
hello.show();
return app.exec();
}
