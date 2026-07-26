1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4
5        int m = word1.size();
6        int n = word2.size();
7
8        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
9
10        // Base cases
11        for(int i = 0; i <= m; i++) {
12            dp[i][0] = i;   
13        }
14
15        for(int j = 0; j <= n; j++) {
16            dp[0][j] = j;   
17        }
18
19
20        // Fill DP table
21        for(int i = 1; i <= m; i++) {
22
23            for(int j = 1; j <= n; j++) {
24
25                if(word1[i-1] == word2[j-1]) {
26
27                    dp[i][j] = dp[i-1][j-1];
28
29                }
30                else {
31
32                    dp[i][j] = 1 + min({
33                        dp[i][j-1],     // Insert
34                        dp[i-1][j],     // Delete
35                        dp[i-1][j-1]   // Replace
36                    });
37                }
38            }
39        }
40
41        return dp[m][n];
42    }
43};