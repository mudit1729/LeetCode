class Solution {
public:
    int lengthOfLastWord(string s) {
        int sz = s.size();
        int i = sz - 1;
        int count = 0;
        if (sz == 0) return 0;
        while(i>=0 && s[i] == ' '){
            i--;
        }
        while(i>=0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }
};