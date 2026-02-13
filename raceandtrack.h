#ifndef races 
#define races 

#include "horses.h"

class Race {
private:
    static const int horsenum = 5;
    static const int track = 15;
    Horse horses[horsenum];
    void lane(int horseId);
    bool winner(int horseId);

public:
    Race();
    void run();
};

#endif