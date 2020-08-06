class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)return s;
        vector<string> rows(min(numRows, int(s.size())));
        int curChar = 0;
        bool goingDown = 0;
        for(char c : s){
            rows[curChar] = rows[curChar]+c;
            if(curChar == 0 || curChar == numRows - 1) goingDown = !goingDown;
            curChar = curChar + (goingDown?1:-1);
        }
        string ret;
        for(string row:rows){
            ret = ret + row;
        }
        return ret;
    }
};