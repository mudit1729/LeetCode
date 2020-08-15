class Solution {
public:
    bool compare(string s, string t, map<char,int>& dict){
        int i = 0;
        int j = 0;
        while( i < s.size() || j < t.size() ){
            while(s[i] == t[i]){i++;j++;}
            if(dict[s[i]] > dict[t[j]]) return true;
            else return false;
        }
        return true;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> dict;
        int count = 1;
        for(char c : order){
            dict.insert(pair<char,int>(c,count++));
        }
        for(auto i = words.begin()+1; i!=words.end(); i++){
            if(!compare(*i, *(i-1), dict)) return false;
        }
        return true;
    }
};