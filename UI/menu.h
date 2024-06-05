#pragma once

#include <iostream>
#include "PrintFunctions.h"
#include "../DataStructures/LinkedList.h"
#include "../DataStructures/DynamicArray.h"
#include "../DataStructures/ArraySequence.h"
#include "../DataStructures/ListSequence.h"
#include "../tests/DynamicArray_tests.h"
#include "../tests/LinkedList_tests.h"
#include "../tests/ArraySequence_tests.h"
#include "../tests/ImmutableArraySequence_tests.h"
#include "../tests/listSequence_tests.h"

// Array
void menu();
void testArray();
void arrayManualCreation();
void arrayGetElement();
void arrayInsertElement();
void arrayGetSubArray();
void arrayConcatenate();
template <class T>
ds::ArraySequence<T> createArrayManually(T createElement());
ds::ArraySequence<int> createRandomIntegerArray();
void testIntegerArrayManualCreation();
void testFloatArrayManualCreation();

// Utility
int createInteger();
float createFloat();
void printFloat(float);
void printInteger(int);
void runTests();
int createRandomIntNumber(int maxNumber);
