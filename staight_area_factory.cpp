#include "staight_area_factory.h"
#include "straight_area.h"

using namespace road_lighting;

StaightAreaFactory::StaightAreaFactory()
{

}

 std::unique_ptr<Area> StaightAreaFactory::createArea(int id)
{
    std::unique_ptr<Area> area = std::make_unique<StraightArea>(id);
    return std::move(area);
}

