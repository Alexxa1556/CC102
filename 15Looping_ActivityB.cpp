#include <iostream>

using namespace std;

int main() {
    for (int i = 8; i >= 1; i--) { // start at 8 and decrease to 1 
        for (int j = 1; j <= i; j++) {  
            cout << "# ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
