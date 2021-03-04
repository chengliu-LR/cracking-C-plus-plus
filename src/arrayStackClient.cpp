#include <iostream>
#include "arraystack.h"
#include <vector>
using namespace std;

int main() {
    ArrayStack stack;
    stack.push(10);
    stack.push(20);
    cout << "after poping the first element:" << stack.pop() 
            << endl << "the remaining element is:" << stack.top() << endl;
    return 0;
}