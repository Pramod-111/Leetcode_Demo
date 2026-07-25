1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int> arr;
5        while(n > 0) {
6            int digit = n % 10;
7            arr.push_back(digit);
8            n /= 10;
9        }
10        sort(arr.begin(), arr.end());
11        int x = arr.size();
12
13        return arr[x - 1] * arr[x - 2];
14    }
15};