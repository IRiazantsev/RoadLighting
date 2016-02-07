#pragma once

#include "interface.h"

namespace road_lighting {
    class StaightAreaFactory : public AreaFactory
    {
    public:
        StaightAreaFactory();
        virtual ~StaightAreaFactory() {}
        virtual Area* createArea(int id) override;
    };
}
