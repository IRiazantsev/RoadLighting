#include "project.h"
#include "staight_area_factory.h"
#include "utilities.h"

using namespace road_lighting;

Project::Project(int id):id_(id)
{

}

Project::~Project()
{
    areas_.clear();
}

 std::unique_ptr<Area> Project::createArea(AreaType type)
{
     std::unique_ptr<Area> area;
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

std::shared_ptr<Area> Project::getArea(int id)
{
    for(std::shared_ptr<Area> item : areas_) {
         if (id == item->getID()) {
            return item;
         }
    }
    return nullptr;
}

void Project::initialize()
{
    createArea(AreaType::StraightRoad);
}

