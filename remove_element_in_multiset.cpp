#include <iostream>
#include <set>
using namespace std;

int main() {

    multiset<int> ms {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    cout << "Multiset before removal: ";
    for (auto elem : ms) {
        cout << elem << " ";
    }
    cout <<endl;
    
    ms.clear(); // Removes all elements from the multiset
    
    cout << "Multiset after removal: ";
    for (auto elem : ms) {
        cout << elem << " ";
    }
    cout <<endl;
    return 0;
}
