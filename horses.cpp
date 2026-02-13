#include "horses.h"
#include <cstdlib>

Horse::Horse() {
    pos = 0;
}

void Horse::move() {
    if (rand() % 2 == 1) {
        pos++;
    }
}

int Horse::getpos() {
    return pos;
}