// vector::begin/end
#include <iostream>
#include <set>

using namespace std;
int main () {
   set<int> mySet{1, 3, 57, 137, 357};
   // lower_bound returns the first element that is greater or equal to the key
   set<int>::iterator iter = mySet.upper_bound(1);
   // upper_bound returns the first element that is greater to the key
   set<int>::iterator end = mySet.upper_bound(57);
   while (iter != end) {
      cout << *iter << endl;
      ++iter;
   }
   return 0;
}