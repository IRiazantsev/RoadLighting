#pragma once
#include <memory>
#include <iostream>
#include <fstream>

namespace road_lighting {

    class Storage
    {
    public:
        virtual bool save(std::ofstream& fout) = 0;
        virtual bool open() = 0;
    };

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
        virtual std::unique_ptr<Area> createArea(int id) = 0;
        virtual ~AreaFactory() {}
    };

    enum class AreaType {StraightRoad = 0};

}


