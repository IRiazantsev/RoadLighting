#pragma once

namespace road_lighting {

    template<typename T>
    static int createID(T& vect)
    {
        int id = 1;
        for(auto item : vect) {
             if (id != item->getID()) {
                 break;
             }
             id++;
        }
        return id;
    }
}
