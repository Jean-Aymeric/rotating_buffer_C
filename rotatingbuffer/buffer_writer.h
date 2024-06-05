//
// Created by jeana on 04/06/2024.
//
#include <stdlib.h>
#include <stdbool.h>
#include "buffer_actor.h"

#ifndef ROTATING_BUFFER_BUFFER_WRITER_H
#define ROTATING_BUFFER_BUFFER_WRITER_H

typedef BufferActor BufferWriter;

BufferWriter *createBufferWriter(RotatingBuffer *buffer);

void destroyBufferWriter(BufferWriter *writer);

bool writerWriteData(BufferWriter *writer, Data *data);

#endif //ROTATING_BUFFER_BUFFER_WRITER_H
