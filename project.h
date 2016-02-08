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
        Area* createArea(AreaType type);
        int getID() {return id_;}
    protected:
        int id_;
        std::vector<Area*> areas_;
    };
}
