#include <map>
class Solution {
public:
    int validity(string s, int i, int j){
        map<char, int> tmp;
        for (auto k = i; k < j; k++) {
            map<char, int>::iterator val = tmp.find(s[k]);
            if (val!=tmp.end()) {
                return val->second;
            } else {
                tmp.insert(pair<char, int>(s[k], k));
            }
        }
        // for(auto& elem : tmp)
        // {
        //     cout << elem.first << " " << elem.second << endl;
        // }
        return -1;
    }
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        map <char, int> tmp;
        for(auto i=0, j = 0; s[j]!='\0'; j++) {
            if(tmp[s[j]]!=0){
                i = std::max(tmp[s[j]], i);
            }
            max = std::max(max, j-i+1);
            tmp[s[j]] = j+1;
        }
        return max;
    }
};