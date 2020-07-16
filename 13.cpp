class Solution {
public:
    int getValue(char c){
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int sum = 0;
        int temp;
        int sz = s.size();
        for (auto i =0; i < sz; i++) {
            temp = getValue(s[i]);
            if ( i < sz - 1) {
                if (getValue(s[i+1]) > temp) {
                    sum = sum - temp;
                } else {
                    sum = sum + temp;
                }
            }
            else {
                sum = sum + temp;
            }
        }
        return sum;
    }
};