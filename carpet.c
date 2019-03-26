//
// Created by Jason on 25/03/2019.
//

#include <stdlib.h>
#include <math.h>
#include "carpet.h"

struct Carpet {
    float pricePerSqrMetre;
    boolean roundUp;
};

float price(struct Carpet *carpet, float area) {
    if(carpet->roundUp){
        area = ceil(area);
    }

    return area * carpet->pricePerSqrMetre;
}

Carpet* new_carpet(float pricePerSqrMetre, boolean roundUp){
    Carpet* carpet = malloc(sizeof(Carpet));
    carpet->pricePerSqrMetre = pricePerSqrMetre;
    carpet->roundUp = roundUp;
    return carpet;
}