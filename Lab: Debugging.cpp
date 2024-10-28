#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Y = 0;
    float P = 0.0;
    float B = 0.0;
    float T = 0.0;
    float R = 0.0;
    float r = 0.0;
  
    cout << "How many years would you like to simulate: ";
    cin >> Y;

    // Simulate Y years
    for (int k = 0; k < Y; k++) {
        // Get payment amount & adjust balance
        cout << "Payment for your year " << k + 1 << ": ";
        cin >> P;
        B = B + P;

        // Compute annual rate r
        T = B / 1000; // Get number of 1000s (fixed == to =)
        R = 3.0 + 0.5 * T; // Compute rate
    
        // Correct if 8% cap
        if (R > 8.0) {
            R = 8.0;
        }
    
        // Compute new balance with interest for the year
        r = R / 100;
        for (int i = 0; i < 12; i++) {
            B = B * (1 + r / 12);
        }
    }

    cout << "Final balance is " << B << " dollars" << endl;

    return 0;
}