#include <iostream>
#include <set>
using namespace std;


int main() {
    multiset<int> ms {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    cout << "Multiset before removal: ";
    for (auto elem : ms) {
        cout << elem << " ";
    }
        cout << std::endl;
    
    int element_to_remove = 3;
    ms.erase(element_to_remove); // Removes one instance of the specified element
    
    cout << "Multiset after removal: ";
    for (auto elem : ms) {
            cout << elem << " ";
    }
    cout << endl;
    return 0;
}
