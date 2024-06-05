//
// Created by jeana on 04/06/2024.
//

#include <stdbool.h>
#include "rotating_buffer.h"
#include "data.h"

#ifndef ROTATING_BUFFER_BUFFER_ACTOR_H
#define ROTATING_BUFFER_BUFFER_ACTOR_H

typedef struct BufferActor {
    RotatingBuffer *buffer;
} BufferActor;

BufferActor *createBufferActor(RotatingBuffer *buffer);

void destroyBufferActor(BufferActor *actor);

#endif //ROTATING_BUFFER_BUFFER_ACTOR_H
