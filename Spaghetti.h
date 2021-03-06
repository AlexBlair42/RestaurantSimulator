#ifndef Spaghetti_h
#define Spaghetti_h

#include "Dish.h"
#include "Simulator.h"
#include "Random.h"

extern Random _random;

class Spaghetti : public Dish {
private:
    int time_until_ready = 20;
    int time_to_eat_min = 15;
    int time_to_eat_max = 25;
public:
    bool isReady(int clock) {
        return (clock - start) > time_until_ready;
    }
    
    int timeToEat() {
        time_to_eat_min + _random.next_int(time_to_eat_max - time_to_eat_min);
    }
};

#endif
