class Solution {
public:
    bool isNeedlePresent(string haystack, string needle, int j, int i){
        int count = 0;
        while(haystack[j] == needle[i] && i<needle.size()){
            count++; i++; j++;
        }
        if (count == needle.size()) return true;
        return false;
    }
    int strStr(string haystack, string needle) {
        int i = 0;
        int h_sz = haystack.size();
        int n_sz = needle.size();
        if (n_sz == 0 ) return 0;
        for(auto j = 0; j <= h_sz - n_sz; j++){
            if (haystack[j] == needle[i]){
                if(isNeedlePresent(haystack, needle, j, i)){
                    return j;
                }
            }
        }
        return -1;
    }
};