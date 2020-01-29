#include <iostream>
using namespace std;

int reading1, reading2, reading3, reading4;
int main() {
    
    cin >> reading1;
    cin >> reading2;
    cin >> reading3;
    cin >> reading4;
    
    if (reading1 == reading2 && reading3 == reading4 && reading2 == reading3) {
        cout << "Fish At Constant Depth";
        return 0;
    } else if (reading1 < reading2 && reading3 < reading4 && reading2 < reading3) {
        cout << "Fish Rising";
        return 0;
    } else if (reading1 > reading2 && reading3 > reading4 && reading2 > reading3) {
        cout << "Fish Diving";
        return 0;
    } else {
        cout << "No Fish";
        return 0;
    }
    
    return 0;
}
