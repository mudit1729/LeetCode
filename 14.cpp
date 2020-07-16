class Solution {
public:
    string getCommonPrefix(string s1, string s2) {
        int i = 0;
        int count = 0;
        int sz_s1 = s1.size();
        int sz_s2 = s2.size();
        while((s1[count] == s2[count]) && count < sz_s1 && count < sz_s2 ) {
            count++;
        }
        return s1.substr(0, count);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string common;
        int sz = strs.size();
        if(sz == 0) return "";
        if(sz == 1) return strs[0];
        common = getCommonPrefix(strs[0], strs[1]);
        for(auto x = 2; x < sz; x++) {
            common = getCommonPrefix(common, strs[x]);
        }
        return common;
    }
};