#include <iostream>
#include <string>

using namespace std;

// Function to check if a string describes a cat meowing
bool isCatMeowing(const string& s) {
    int n = s.size();
    
    // Check if the length is less than 4, which is the minimum length required for a meowing sound
    if (n < 4) {
        return false;
    }
    
    // Check if the first character is 'm' or 'M'
    if (s[0] != 'm' && s[0] != 'M') {
        return false;
    }
    
    // Initialize variables to keep track of the positions of 'e', 'o', and 'w'
    int ePos = -1, oPos = -1, wPos = -1;
    
    // Iterate through the string to find the positions of 'e', 'o', and 'w'
    for (int i = 1; i < n; ++i) {
        if (s[i] == 'e' || s[i] == 'E') {
            ePos = i;
        } else if (s[i] == 'o' || s[i] == 'O') {
            oPos = i;
        } else if (s[i] == 'w' || s[i] == 'W') {
            wPos = i;
            // break;
        }
    }
    
    // Check if all required characters were found and their positions are in the correct order
    if (ePos == -1 || oPos == -1 || wPos == -1 || ePos >= oPos || oPos >= wPos) {
        return false;
    }
    
    return true;
}

int main() {
    // Input number of test cases
    int t;
    cin >> t;
    
    // Iterate through each test case
    while (t--) {
        // Input length of the string and the string itself
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Check if the sound describes a cat meowing and print the result
        if (isCatMeowing(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
