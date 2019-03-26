//
// Created by Jason on 25/03/2019.
//

#ifndef ENCAPSULATION_CARPET_H
#define ENCAPSULATION_CARPET_H

#include "bool.h"

typedef struct Carpet Carpet;

Carpet* new_carpet(float pricePerSqrMetre, boolean roundUp);

float price(struct Carpet *carpet, float area);

#endif //ENCAPSULATION_CARPET_H
