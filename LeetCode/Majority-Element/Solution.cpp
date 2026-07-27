1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for(int i : nums) {
7            mp[i]++;
8        }
9        for(auto x : mp) {
10            if((x.second) > nums.size()/2) {
11                return x.first;
12            }
13        }
14        return 0;
15    }
16};