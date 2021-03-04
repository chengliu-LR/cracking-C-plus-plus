#include <set>
#include <iostream>
using namespace std;

int main() {
    set<int> mySet;
    for (int i = 0; i < 10; i++) mySet.insert(i);

    set<int>:: iterator iter2;
    // in other contexts there is a difference between ++i and i++, but not for loops.
    for (iter2 = mySet.begin(); iter2 != mySet.end(); iter2++) cout << *iter2 << ' ';
    cout << endl;

    return 0;
}

