//
// Created by Jason on 25/03/2019.
//

#ifndef ENCAPSULATION_ROOM_H
#define ENCAPSULATION_ROOM_H

typedef struct Dimensions Dimensions;
typedef struct Room Room;

struct Room {
    Dimensions *dimensions;
    float (*area)(struct Room*);
};

#endif //ENCAPSULATION_ROOM_H
