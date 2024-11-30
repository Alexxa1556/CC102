#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 8; i++) { 
        for (int j = 1; j <= 8 - i; j++) {
            cout << "  "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl; // Move to the next line of each row
    }
    return 0;
}
