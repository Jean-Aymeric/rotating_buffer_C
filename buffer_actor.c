//
// Created by jeana on 04/06/2024.
//

#include "buffer_actor.h"

BufferActor *createBufferActor(RotatingBuffer *buffer) {
    BufferActor *newBufferActor = (BufferActor *) malloc(sizeof(BufferActor));
    newBufferActor->buffer = buffer;
    return newBufferActor;
}

void destroyBufferActor(BufferActor *actor) {
    if (actor == NULL) {
        return;
    }
    free(actor);
}