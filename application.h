#pragma once

#include <memory>
#include "project.h"

namespace road_lighting {
    class Application
    {
    public:
        static Application& getApp();
        using ProjectType = std::shared_ptr<Project>;
        ProjectType createProject();
        ProjectType getProject(int id);
    private:
        Application();
        ~Application();
        Application& operator=(Application&);
    private:
        std::vector<ProjectType> projects_;
    };
}

