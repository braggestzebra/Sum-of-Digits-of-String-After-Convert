#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string converted = "";
        // Loop through each character in the input string s
        for (char c : s) {
            converted += to_string(c - 'a' + 1); // Convert character to its corresponding numeric value
        }

        int result = 0;
        // Performs transformation k times
        for (int i = 0; i < k; i++) {
            result = 0; // Reset result after each transformation
            for (char digit : converted) {
                result += digit - '0'; // Add the integer value of each digit to result
            }
            // Converts the result back to a string for the next iteration
            converted = to_string(result);
        }
        // Return the final result after k transformations
        return result;
    }
};

int main() {
    Solution solution; // Create an instance of the Solution class
    string s;
    int k;
    
    cout << "Enter the string that you want to convert: ";
    cin >> s;

    cout << "Enter the number of transformations: ";
    cin >> k;

    int result = solution.getLucky(s, k); // Call the getLucky method on the solution object with inputs s and k
    cout << "Result: " << result << endl;
    
    return 0;
}
