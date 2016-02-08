#include "mainwindow.h"
#include <QApplication>

#include "application.h"
#include "interface.h"

using namespace road_lighting;

int main(int argc, char *argv[])
{
    auto& app = Application::getApp();
    auto project = app.createProject();
    project->initialize();

<<<<<<< HEAD
    auto prj = app.getProject(project->getID());

    // getting id of the project
=======
    auto prj = app.getProject(1);
>>>>>>> 6bec567e18473eca8e581af236f58b01bb62c27e
    int id = prj->getID();



    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); */
    return 0;

}
