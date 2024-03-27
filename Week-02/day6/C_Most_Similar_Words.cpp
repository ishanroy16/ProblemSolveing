#include <iostream>
using namespace std;

int main() {
    char alphabet = 'A'; // Start with 'A'
    
    for (int i = 1; i <= 26; ++i) {
        cout << i << " -> " << alphabet << endl;
        alphabet++; // Move to the next alphabet
    }
    
    return 0;
}
