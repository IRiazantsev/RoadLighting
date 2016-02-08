#include "straight_area.h"
#include "straight_road.h"
#include "straight_pavement.h"

using namespace road_lighting;
StraightArea::StraightArea(int id) : Area(id), road_(nullptr), pavement_(nullptr)
{
    road_ = new StraightRoad();
    pavement_ = new StraightPavement();
}

StraightArea::~StraightArea()
{
    if (road_) delete road_;
    if (pavement_) delete pavement_;
}



