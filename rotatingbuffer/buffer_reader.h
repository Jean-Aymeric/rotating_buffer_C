//
// Created by jeana on 04/06/2024.
//
#include <stdlib.h>
#include <stdbool.h>
#include "buffer_actor.h"

#ifndef ROTATING_BUFFER_BUFFER_READER_H
#define ROTATING_BUFFER_BUFFER_READER_H

typedef BufferActor BufferReader;

BufferReader *createBufferReader(RotatingBuffer *buffer);

void destroyBufferReader(BufferReader *reader);

Data *readerReadData(BufferReader *reader);

#endif //ROTATING_BUFFER_BUFFER_READER_H
