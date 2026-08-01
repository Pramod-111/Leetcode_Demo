1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> mp;
5        vector<int> ans;
6
7        for(int x : nums1) {
8            mp[x]++;
9        }
10
11        for(int i = 0; i < nums2.size(); i++) {
12            if(mp.count(nums2[i])) {
13                ans.push_back(nums2[i]);
14                mp.erase(nums2[i]);
15            }
16        }
17
18        return ans;
19    }
20};