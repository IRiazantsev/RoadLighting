#pragma once

namespace road_lighting {
    class Road
    {
    public:
        virtual ~Road() {}
    };

    class Pavement
    {
    public:
        virtual ~Pavement() {}
    };

    class Area
    {
    public:
        Area(int id):id_(id) {}
        virtual ~Area() {}
    public:
        virtual int getID() {return id_;}
        virtual Road* getRoad() = 0;
        virtual Pavement* getPavement() = 0;       
    protected:
        int id_;
    };

    class AreaFactory
    {
    public:
        virtual Area *createArea(int id) = 0;
        virtual ~AreaFactory() {}
    };

    enum class AreaType {StraightRoad = 0};

}


