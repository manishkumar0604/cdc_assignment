class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector <int> arr(n);
        
        k = k % n;      // 3%5 = 3
        
        for(int i=0 ;i<k; i++){
            arr[i] = nums[(n - k) + i]; 
        }

        // Copy the first (n - k) elements after the k elements
        for (int i = 0; i < n - k; i++) {
            arr[k + i] = nums[i];
        }
        nums = arr;
        
    }
};
