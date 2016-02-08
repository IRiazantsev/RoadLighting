#pragma once

#include <memory>
#include "project.h"

namespace road_lighting {
    class Application : public Storage
    {
    public:
        static Application& getApp();
        using ProjectType = std::shared_ptr<Project>;
        ProjectType createProject();
        ProjectType getProject(int id);
        virtual bool save(std::ofstream& fout) override;
        virtual bool open() override;
    private:
        Application();
        ~Application();
        Application& operator=(Application&);
    private:
        std::vector<ProjectType> projects_;
        static char signature[];
    };
}

