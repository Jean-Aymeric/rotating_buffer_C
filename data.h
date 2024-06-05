//
// Created by jeana on 05/06/2024.
//

#include <stdlib.h>

#ifndef ROTATING_BUFFER_DATA_H
#define ROTATING_BUFFER_DATA_H

#define NULL_VALUE '0'

typedef struct Data {
    char value;
} Data;

Data *createData(char value);

void destroyData(Data *data);

void dataCopy(Data *dataDestination, Data *dataSource);

void dataToString(Data *data, char *string);

#endif //ROTATING_BUFFER_DATA_H
