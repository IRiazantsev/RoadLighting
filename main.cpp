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

    auto prj = app.getProject(project->getID());

    // getting id of the project
    int id = prj->getID();



    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); */
    return 0;

}
