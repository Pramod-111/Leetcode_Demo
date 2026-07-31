1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum = nums[0];
5        int maxSum = nums[0];
6
7        for(int i = 1; i < nums.size(); i++) {
8            sum = max(nums[i], nums[i] + sum);
9
10            maxSum = max(sum, maxSum);
11        }
12        return maxSum;
13    }
14};