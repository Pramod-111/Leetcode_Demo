1// class Solution {
2// public:
3//     bool checkInclusion(string s1, string s2) {
4//         int n = s1.size();
5//         int m = s2.size();
6//         unordered_map<char, int> need;
7//         unordered_map<char, int> window;
8
9//         if(n > m) return false;
10
11//         for(char x : s1) {
12//             need[x]++;
13//         }
14
15//         for(int i = 0; i < n; i++) {
16//             window[s2[i]]++;
17//         }
18//         if(need == window) return true;
19
20//         for(int i = n; i < m; i++) {
21//             window[s2[i]]++;
22//             window[s2[i - n]]--;
23
24//             if(window[s2[i - n]] == 0) {
25//                 window.erase(s2[i - n]);
26//             }
27
28//             if(window == need) {
29//                 return true;
30//             }
31//         }
32//         return false;
33//     }
34// };
35
36
37class Solution {
38public:
39    bool checkInclusion(string s1, string s2) {
40        int n = s1.size();
41        int m = s2.size();
42
43        if(n > m) return false;
44
45        vector<int> need(26, 0);
46        vector<int> window(26, 0);
47
48        for(int x : s1) {
49            need[x - 'a']++;
50        }
51
52        for(int i = 0; i < n; i++) {
53            window[s2[i] - 'a']++;
54        }
55
56        if(need == window) return true;
57
58        for(int i = n; i < m; i++) {
59            window[s2[i] - 'a']++;
60            window[s2[i - n] - 'a']--;
61
62            if(need == window) {
63                return true;
64            }
65        }
66        return false;
67    }
68};