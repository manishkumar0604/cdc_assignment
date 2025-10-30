#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) { // use vector<int>& instead of int[]
        int start = 0;
        int end = arr.size() - 1;
        while (start < end) {
            // Swap arr[start] and arr[end]
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution sol;
    sol.reverseArray(arr);

    cout << "Reversed array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
