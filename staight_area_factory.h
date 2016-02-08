#pragma once

#include "interface.h"
#include <memory>

namespace road_lighting {
    class StaightAreaFactory : public AreaFactory
    {
    public:
        StaightAreaFactory();
        virtual ~StaightAreaFactory() {}
        virtual std::shared_ptr<Area> createArea(int id) override;
    };
}
