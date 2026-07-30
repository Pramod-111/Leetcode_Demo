1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n = nums.size();
5        int sum = 0;
6
7        for(int i = 0; i < k; i++) {
8            sum += nums[i];
9        }
10        double maxAvg = (double)sum / k;
11
12        for(int right = k; right < n; right++) {
13            sum += nums[right];
14            sum -= nums[right - k];
15            double avg = (double)sum / k;
16
17            maxAvg = max(avg, maxAvg);
18        } 
19        return maxAvg;
20    }
21};