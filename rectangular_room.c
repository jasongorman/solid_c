//
// Created by Jason on 26/03/2019.
//

#include <stdlib.h>
#include "rectangular_room.h"

struct Dimensions {
    float width;
    float length;
};

Room* new_rectangular_room(float width, float length){
    Dimensions* dimensions = malloc(sizeof(Dimensions));
    Room* room = malloc(sizeof(Room));
    dimensions->width = width;
    dimensions->length = length;
    room->dimensions = dimensions;
    room->area = &rectangular_area;
    return room;
}

float rectangular_area(struct Room *room) {
    Dimensions *dimensions = room->dimensions;
    return dimensions->length * dimensions->width;
}
