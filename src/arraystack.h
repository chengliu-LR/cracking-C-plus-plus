#ifndef _arraystack_h
#define _arraystack_h

#include <iostream>
using namespace std;

class ArrayStack {
public:
    // Construct a new array stack
    ArrayStack() {
        elements = new int[10]();
        size = 0;
        capacity = 10;
    };
    // Destructor
    ~ArrayStack() {
        delete[] elements; // use bracket to tell the compiler that we are deleting an array.
        cout << "ArrayStack memory destructor called" << endl;
    }

    void push(int value) {
        elements[size++] = value;
    };

    int pop() {
        int res = elements[size-1];
        elements[size-1] = 0;
        size--;
        return res;
    };

    int top() const {
        if(size == 0) return -1;
        return elements[size-1];
    };

    bool isEmpty() const {
        return size == 0;
    };

private:
    int* elements;
    int size;
    int capacity;
};

#endif // _arraystack_h