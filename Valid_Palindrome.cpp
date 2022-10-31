/*
LeetCode Problem link : https://leetcode.com/problems/valid-palindrome/
Valid Palindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.


Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r = s.size()-1;
        while(l<r){
            if(!isalnum(s[l])){
                while(!isalnum(s[l]) && l<r)
                    l++;
            }
            if(!isalnum(s[r])){
                while(!isalnum(s[r]) && l<r)
                    r--;
            }

            if(tolower(s[l])!= tolower(s[r]))
                return false;
            l++;
            r--;
        }
        return true;
    }
};
//This is done by me
int main(){
    string str = "A man, a plan, a canal: Panama";
    Solution ob;
    cout<<ob.isPalindrome(str);
}
/*
Acc. to me
Time Complexity : O(S), where S is length of string.
Space Complexity : O(1) since only two extra space is used.
*/

/*
Here we have used functions from library <cctype> which is a c style library function.
isalnum()
isblank()
isspace()
ispunct()
tolower()
toupper()

are some functions in this library.
*/
