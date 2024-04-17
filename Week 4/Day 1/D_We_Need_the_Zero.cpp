#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Size of the array
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Input array elements
        }
        
        int xorResult = 0;
        for (int x : a) {
            xorResult ^= x; // Calculating XOR of all elements in the array
        }
        
        if (xorResult == 0) {
            cout << 0 << endl;
        } else {
            if (n % 2 == 1) {
                cout << xorResult << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    
    return 0;
}
