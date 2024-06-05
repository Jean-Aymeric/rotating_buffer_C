//
// Created by jeana on 04/06/2024.
//
#include <stdlib.h>
#include <stdbool.h>
#include "data.h"

#ifndef ROTATING_BUFFER_ROTATING_BUFFER_H
#define ROTATING_BUFFER_ROTATING_BUFFER_H

#define BUFFER_SIZE 1

typedef struct RotatingBuffer {
    Data *data;
    bool empty;
} RotatingBuffer;

RotatingBuffer *createRotatingBuffer();

void destroyRotatingBuffer(RotatingBuffer *buffer);

void bufferWriteData(RotatingBuffer *buffer, Data *data);

Data *bufferReadData(RotatingBuffer *buffer);

bool bufferIsWritable(RotatingBuffer *buffer);

bool bufferIsReadable(RotatingBuffer *buffer);

#endif //ROTATING_BUFFER_ROTATING_BUFFER_H
