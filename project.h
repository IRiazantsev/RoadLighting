#pragma once

#include <memory>
#include <vector>
#include "interface.h"


namespace road_lighting {
    class Project
    {
    public:
        Project(int id);
        virtual ~Project();
    public:
        void initialize();
        std::shared_ptr<Area> createArea(AreaType type);
        std::shared_ptr<Area> getArea(int id);
        int getID() {return id_;}
    protected:
        int id_;
        std::vector<std::shared_ptr<Area>> areas_;
    };
}
