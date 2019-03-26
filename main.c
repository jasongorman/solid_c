#include <stdio.h>
#include <string.h>
#include "carpet_quote.h"
#include "rectangular_room.h"
#include "circular_room.h"
#include "bool.h"
#include <assert.h>

void test_area(float base_dimension, Room *room){
    assert(room->area(room) >= (base_dimension));
}

int main() {
    test_area(2.5, new_rectangular_room(2.5, 2.5));
    test_area(2.5, new_circular_room(2.5));
    return 0;
}