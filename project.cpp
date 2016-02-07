#include "project.h"
#include "staight_area_factory.h"
#include "utilities.h"

using namespace road_lighting;

Project::Project(int id):id_(id)
{

}

Project::~Project()
{
    for(auto area : areas_) {
        delete area;
    }
    areas_.clear();
}

Area* Project::createArea(AreaType type)
{
    Area* area = nullptr;
    switch (type) {
    case AreaType::StraightRoad :
        {
            StaightAreaFactory factory;
            area = factory.createArea(createID(areas_));
        }
        break;
    default:
        break;
    }

    if (area) areas_.push_back(area);
    return area;
}

void Project::initialize()
{
    createArea(AreaType::StraightRoad);
}

