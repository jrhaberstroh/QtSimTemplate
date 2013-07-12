#include "analogclock.h"


int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    AnalogClockWindow clock;
    clock.show();

    app.exec();
}
