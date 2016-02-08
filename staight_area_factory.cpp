#include "staight_area_factory.h"
#include "straight_area.h"

using namespace road_lighting;

StaightAreaFactory::StaightAreaFactory()
{

}

std::shared_ptr<Area> StaightAreaFactory::createArea(int id)
{
    std::shared_ptr<Area> area = std::make_shared<StraightArea>(id);
    return area;
}

