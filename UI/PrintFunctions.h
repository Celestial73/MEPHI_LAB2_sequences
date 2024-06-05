#pragma once

#include <iostream>
#include "../DataStructures/ArraySequence.h"
#include "../DataStructures/ListSequence.h"

void printIntegerArray(ds::ArraySequence<int> *array);
void printTypes();
void printOperationChoice();
void printManuallyQuestion();
void printMainMenu();

template <typename T>
void printArray(ds::ArraySequence<T> *array, void print(T))
{
    cout << "Array consists of " << array->getSize() << " numbers\n";
    for (int i = 0; i < array->getSize(); i++)
        print(array->get(i));
    cout << std::endl;
};