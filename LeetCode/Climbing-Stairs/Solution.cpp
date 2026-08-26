1class Solution {
2public:
3    int climbStairs(int n) {
4        vector<int> dp(n);
5
6        if(n == 1) {
7            return 1;
8        } 
9        if(n == 2) {
10            return 2;
11        }
12        dp[0] = 1;
13        dp[1] = 2;
14
15        for(int i = 2; i < n; i++) {
16            dp[i] = dp[i - 1] +  dp[i - 2];
17        }
18        return dp[n - 1];
19    }
20};
21
22
23// class Solution {
24// public:
25//     int climbStairs(int n) {
26        
27//     if(n == 1) {
28//         return 1;
29//     }
30//     if(n == 2) {
31//         return 2;
32//     }
33//     return (n - 1) + (n - 2);
34//     }
35// };