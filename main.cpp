#include "Core/AppContext.h"
#include "Core/ApplicationBootstrap.h"

#include <QApplication>
#include <cstdlib>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    AppContext appContext;
    ApplicationBootstrap bootstrap(appContext);
    bootstrap.configureApplication(application);

    auto initialWindow = bootstrap.createInitialWindow();
    if (!initialWindow) {
        return EXIT_FAILURE;
    }

    initialWindow->show();
    return application.exec();
}
