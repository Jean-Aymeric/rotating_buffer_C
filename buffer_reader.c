//
// Created by jeana on 04/06/2024.
//

#include "buffer_reader.h"

BufferReader *createBufferReader(RotatingBuffer *buffer) {
    BufferReader *reader = (BufferReader *) malloc(sizeof(BufferReader));
    reader->buffer = buffer;
    return reader;
}

void destroyBufferReader(BufferReader *reader) {
    destroyBufferActor(reader);
}

Data *readerReadData(BufferReader *reader) {
    if (bufferIsReadable(reader->buffer)) {
        return bufferReadData(reader->buffer);
    }
    return NULL;
}