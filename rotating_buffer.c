//
// Created by jeana on 04/06/2024.
//

#include "rotating_buffer.h"

bool bufferIsEmpty(RotatingBuffer *buffer);

RotatingBuffer *createRotatingBuffer() {
    RotatingBuffer *newBuffer = (RotatingBuffer *) malloc(sizeof(RotatingBuffer));
    newBuffer->data = createData(NULL_VALUE);
    newBuffer->empty = true;
    return newBuffer;
}

void destroyRotatingBuffer(RotatingBuffer *buffer) {
    if (buffer == NULL) {
        return;
    }
    destroyData(buffer->data);
    free(buffer);
}

void bufferWriteData(RotatingBuffer *buffer, Data *data) {
    if (bufferIsWritable(buffer)) {
        dataCopy(buffer->data, data);
        buffer->empty = false;
    }
}

Data *bufferReadData(RotatingBuffer *buffer) {
    if (bufferIsReadable(buffer)) {
        buffer->empty = true;
        return buffer->data;
    }
    return NULL;
}

bool bufferIsWritable(RotatingBuffer *buffer) {
    return bufferIsEmpty(buffer);
}

bool bufferIsReadable(RotatingBuffer *buffer) {
    return !bufferIsEmpty(buffer);
}

bool bufferIsEmpty(RotatingBuffer *buffer) {
    return buffer->empty;
}
