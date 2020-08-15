class Solution {
public:
    bool validPalindromeUtil(string s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            else {l++;r--;}
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l<r){
            if(s[l]==s[r]) {l++;r--;}
            else{
                return (validPalindromeUtil(s, l+1, r) || validPalindromeUtil(s, l, r-1));
            }
        }
        return true;
    }
};