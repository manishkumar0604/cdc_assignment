class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxlen = 0;
        int n = nums.size();
        vector<int> ans(101, 0);
        // count frequency of all element
        for (int i = 0; i < n; i++) {
            ans[nums[i]]++;
        }
      // find maximum frequency of element
        for (int i = 0; i < 101; i++) {
            maxlen = max(maxlen, ans[i]);
        }
      //if maximum frequency element have same frequency for other number then add and return.
        int total = 0;  
        for (int i = 0; i < 101; i++) {
            if (maxlen == ans[i]) {
                total += ans[i];  
            }
        }

        return total;
    }
};
