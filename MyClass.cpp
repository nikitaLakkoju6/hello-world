#include "MyClass.h"
//Im adding a comment
MyClass::MyClass() : counter(0) {}

MyClass::MyClass(int value) : counter(value) {}

void MyClass::setCounter(int value) {
    counter = value;
}

int MyClass::getCounter() const {
    return counter;
}
