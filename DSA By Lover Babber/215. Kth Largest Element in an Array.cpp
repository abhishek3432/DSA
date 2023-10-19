class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        // Kth Smallest and Kth Largest element of the array.
        return nums[nums.size()-k];
    }
};