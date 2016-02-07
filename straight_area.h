#pragma once

#include "interface.h"

namespace road_lighting {
    class StraightArea : public Area
    {
    public:
        StraightArea(int id);
        virtual ~StraightArea();
    public:
        virtual Road* getRoad() {return road_;}
        virtual Pavement* getPavement() {return pavement_;}
    protected:
        Road* road_;
        Pavement* pavement_;
    };
}
