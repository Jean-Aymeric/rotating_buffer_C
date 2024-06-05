#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "rotating_buffer.h"
#include "buffer_writer.h"
#include "buffer_reader.h"

#define START_VALUE 'A'
#define END_VALUE 'Z'
#define NB_LOOP 100

void runRotatingBuffer(BufferWriter *bufferWriter, BufferReader *bufferReader, Data *writtenData, Data *readData);

void writeBuffer(BufferWriter *bufferWriter, Data *writtenData);

bool readBuffer(BufferReader *bufferReader, Data *readData);

bool goOrNoGo();

int main(void) {
    RotatingBuffer *buffer = createRotatingBuffer();
    BufferWriter *bufferWriter = createBufferWriter(buffer);
    BufferReader *bufferReader = createBufferReader(buffer);
    Data *writtenData = createData(START_VALUE);
    Data *readData = createData(NULL_VALUE);

    runRotatingBuffer(bufferWriter, bufferReader, writtenData, readData);

    destroyData(writtenData);
    destroyData(readData);
    destroyBufferWriter(bufferWriter);
    destroyBufferReader(bufferReader);
    destroyRotatingBuffer(buffer);

    system("pause");

    return 0;
}

void runRotatingBuffer(BufferWriter *bufferWriter, BufferReader *bufferReader, Data *writtenData, Data *readData) {
    unsigned int loopCounter = 0;
    srand(time(NULL));

    while (loopCounter < NB_LOOP) {
        if (goOrNoGo()) writeBuffer(bufferWriter, writtenData);
        if (goOrNoGo()) loopCounter += readBuffer(bufferReader, readData) ? 1 : 0;
    }
}

bool readBuffer(BufferReader *bufferReader, Data *readData) {
    Data *temporaryData = readerReadData(bufferReader);
    char temporaryString[BUFFER_SIZE + 1];
    if (temporaryData != NULL) {
        dataCopy(readData, temporaryData);
        dataToString(readData, temporaryString);
        printf("[%s]", temporaryString);
        if (readData->value == END_VALUE) {
            printf("\n");
            return true;
        }
    } else {
        printf(".");
    }
    return false;
}

void writeBuffer(BufferWriter *bufferWriter, Data *writtenData) {
    if (writerWriteData(bufferWriter, writtenData)) {
        writtenData->value = START_VALUE + (writtenData->value - START_VALUE + 1) % (END_VALUE - START_VALUE + 1);
    } else {
        printf("-");
    }
}

bool goOrNoGo() {
    return rand() % 1000 == 0;
}