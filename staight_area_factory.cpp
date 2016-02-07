#include "staight_area_factory.h"
#include "straight_area.h"

using namespace road_lighting;

StaightAreaFactory::StaightAreaFactory()
{

}

Area* StaightAreaFactory::createArea(int id)
{
    return new StraightArea(id);
}

