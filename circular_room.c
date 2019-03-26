//
// Created by Jason on 26/03/2019.
//

#include <stdlib.h>
#include "circular_room.h"

struct Dimensions {
    float radius;
};

struct Room* new_circular_room(float radius){
    Dimensions* dimensions = malloc(sizeof(Dimensions));
    dimensions->radius = radius;
    Room* room = malloc(sizeof(Room));
    room->dimensions = dimensions;
    room->area = &circular_area;
    return room;
}

float circular_area(struct Room *room) {
    /* a circular room requires cutting a square carpet of length/width 2 * radius */
    float radius = room->dimensions->radius;
    return (2 * radius) * (2 * radius);
}
