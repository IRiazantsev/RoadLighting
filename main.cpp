#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include <fstream>
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


    std::ofstream fout("d:\\testQT.txt", std::ofstream::out);
    app.save(fout);
    fout.close();


    // last file
    // 1
    // 2

    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); */
    return 0;

}
