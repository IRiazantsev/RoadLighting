#include "application.h"
#include "utilities.h"
using namespace road_lighting;

char Application::signature[] = "ROADLIGHT";

Application::Application()
{

}

Application::~Application()
{
    projects_.clear();
}

Application& Application::getApp()
{
    static Application instance;
    return instance;
}

std::shared_ptr<Project> Application::createProject()
{
    auto project = std::make_shared<Project>(createID(projects_));
    projects_.push_back(project);
    return project;
}

std::shared_ptr<Project> Application::getProject(int id)
{
    for(ProjectType item : projects_) {
         if (id == item->getID()) {
            return item;
         }
    }
    return nullptr;
}

bool Application::save(std::ofstream& fout)
{
    fout << signature;

    return true;
}

bool Application::open()
{
    return true;
}
