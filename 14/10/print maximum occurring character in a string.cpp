#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find max occurring character
    char getMaxOccurringChar(string s) {
        // Map to store frequency of characters
        map<char, int> freq;
        // Count frequency
        for (char c : s) {
            freq[c]++;
        }
        int maxFreq = 0;
        char maxChar = '\0';

        // Traverse map to find max occurring char
        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxChar = it.first;
            }
        }
        // Return result
        return maxChar;
    }
};

int main() {
    // Input string
    string s = "samplestring";
    // Create object of Solution
    Solution obj;
    // Call function
    char ans = obj.getMaxOccurringChar(s);

    // Print result
    cout << "Max occurring character: " << ans << endl;
    return 0;
}
