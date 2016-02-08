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
    int id = prj->getID();
    std::shared_ptr<Area> area =  prj->getArea(1);



    // last file

    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); */
    return 0;

}
