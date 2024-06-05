//
// Created by jeana on 05/06/2024.
//

#include "data.h"

Data *createData(char value) {
    Data *newData = (Data *) malloc(sizeof(Data));
    newData->value = value;
    return newData;
}

void destroyData(Data *data) {
    if (data == NULL) {
        return;
    }
    free(data);
}

void dataCopy(Data *dataDestination, Data *dataSource) {
    dataDestination->value = dataSource->value;
}

void dataToString(Data *data, char *string) {
    string[0] = data->value;
    string[1] = '\0';
}
