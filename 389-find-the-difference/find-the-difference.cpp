//
// Given two strings s and t which consist of only lowercase letters.
//
// String t is generated by random shuffling string s and then add one more letter at a random position.
//
// Find the letter that was added in t.
//
// Example:
//
// Input:
// s = "abcd"
// t = "abcde"
//
// Output:
// e
//
// Explanation:
// 'e' is the letter that was added.
//


class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i = 0 ; i <= s.size() - 1; ++i){
        if(s[i] != t[i]) return t[i];
    }
    return t[t.size() - 1];
    }
};
