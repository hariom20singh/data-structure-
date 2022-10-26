#include<bits/stdc++.h>
using namespace std;

int findLPS(string s) {

    int n = s.length();
    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    // Every single character is a palindrome itself, of length 1
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;

    // Check every subsequence of length 2 and greater, upto length of the string
    for (int len = 2; len <= n; ++len) {

        for (int i = 0; i <= n - len; ++i) {

            int j = i + len - 1;

            if (s[i] == s[j] && len == 2)
                dp[i][j] = 2;
            else if (s[i] == s[j])
                dp[i][j] = dp[i+1][j-1] + 2;
            else
                dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
        }
    }

    // Top-right corner cell will contain the length of LPS
    return dp[0][n-1];
}

int main() {

    string s;
    cout << "Enter the string : ";
    cin >> s;

    int res = findLPS(s);
    cout << "Length of the Longest Palindromic Subsequence is : " << res << '\n';

    return 0;
}

/*
 ~ Time Complexity   : O(n^2)
 ~ Space Complexity  : O(n^2)
*/