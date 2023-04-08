#include <iostream>
#include <set>
using namespace std;


int main() {
    multiset<int> myset{34,56,7,89,89};
    cout << "Maximum size of multiset: " << myset.max_size() << endl;
    return 0;
}