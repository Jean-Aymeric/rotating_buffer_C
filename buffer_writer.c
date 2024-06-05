//
// Created by jeana on 04/06/2024.
//

#include "buffer_writer.h"

BufferWriter *createBufferWriter(RotatingBuffer *buffer) {
    return createBufferActor(buffer);
}

void destroyBufferWriter(BufferWriter *writer) {
    destroyBufferActor(writer);
}

bool writerWriteData(BufferWriter *writer, Data *data) {
    if (bufferIsWritable(writer->buffer) == false) {
        return false;
    }
    bufferWriteData(writer->buffer, data);
    return true;
}

