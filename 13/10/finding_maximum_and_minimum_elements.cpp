#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    pair<int, int> findMaxMin(const vector<int>& arr) {
        if (arr.empty()) {
            throw invalid_argument("Array is empty");
        }
        int maxElement = arr[0];
        int minElement = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
            if (arr[i] < minElement) {
                minElement = arr[i];
            }
        }
        return {maxElement, minElement};
    }
};
int main() {
    vector<int> arr = {3, 5, 1, 8, -2, 7};
    Solution sol;
    try {
        pair<int, int> result = sol.findMaxMin(arr);
        cout << "Maximum element: " << result.first << endl;
        cout << "Minimum element: " << result.second << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}
