//
// Created by Jason on 25/03/2019.
//

#include "carpet_quote.h"
#include "room.h"
#include "carpet.h"

float quote(Room *room, struct Carpet *carpet){
    return price(carpet, room->area(room));
}

