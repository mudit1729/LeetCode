class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> digitLogs;
        vector<string> letterLogs;
        for(string s : logs){
            string tmp = s;
            int i = 0;
            while(tmp[i]!=' ') i++;
            if(isdigit(tmp[i+1])) {digitLogs.push_back(s);}
            else {
                letterLogs.push_back(s.substr(i+1, s.size()) + " " + s.substr(0,i));}
        }
        sort(letterLogs.begin(), letterLogs.end());
        for(string &s : letterLogs){
            string tmp = s;
            int i = tmp.size()-1;
            while(tmp[i]!=' ') i--;
            s = s.substr(i+1, s.size()) + " " + s.substr(0, i);
        }
        letterLogs.insert(letterLogs.end(), digitLogs.begin(), digitLogs.end());
        return letterLogs;
    }
};