1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> freq;
5        vector<int> ans;
6
7        for (int num : nums)
8            freq[num]++;
9
10        while (k--) {
11            int maxFreq = 0;
12            int element = 0;
13
14            for (auto &it : freq) {
15                if (it.second > maxFreq) {
16                    maxFreq = it.second;
17                    element = it.first;
18                }
19            }
20
21            ans.push_back(element);
22            freq.erase(element);
23        }
24
25        return ans;
26    }
27};