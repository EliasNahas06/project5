#include "raceandtrack.h"
#include <cstdio>

Race::Race() {}

void Race::lane(int horsenum) {
    for (int i = 0; i < track; i++) {
        if (i == horses[horsenum].getpos()) {
            printf("%d", horsenum);
        } else {
            printf(".");
        }
    }
    printf("\n");
}

bool Race::winner(int horsenum) {
    return horses[horsenum].getpos() >= track - 1;
}

void Race::run() {
    bool proceed = true;
    while (proceed) {
        for (int i = 0; i < horsenum; i++) {
            horses[i].move();
            lane(i);
            if (winner(i)) {
                printf("horse %d is the winner\n", i);
                proceed = false;
            }
        }
        if (proceed) {
            printf("press enter to continue");
            getchar();
        }
    }
}