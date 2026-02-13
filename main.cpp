#include "raceandtrack.h"
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(NULL));
    Race race;
    race.run();
    return 0;
}