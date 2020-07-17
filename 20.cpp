class Solution {
public:
    bool isValid(string s) {
        vector<char> str ={0};
        char temp;
        int sz = s.size();
        if(sz%2!=0) return false;
        for(auto i = 0; i < sz; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                str.push_back(s[i]);
            } 
            temp = str.back();
            if (s[i] == ')') {
                if (temp!='(') return false;
                str.pop_back();
            } else if (s[i] == '}') {
                if (temp!='{') return false;
                str.pop_back();
            } else if (s[i] == ']') {
                if (temp!='[') return false;
                str.pop_back();
            } 
        }
        if(str.size() != 1) return false;
        return true;
    }
};