#include <string>
class Solution {
public:
    string addStrings(string num1, string num2) {
        int sz1 = num1.size();
        int sz2 = num2.size();
        int i = sz1-1;
        int j = sz2-1;
        string ans;
        int sum = 0;
        int carry=0;
        while(i >= 0 || j >= 0){
            int a, b;
            a = (i>=0)?num1[i]-'0':0;
            b = (j>=0)?num2[j]-'0':0;
            sum = (a+b+carry)%10;
            carry = (a+b+carry)/10;
            ans += sum +'0';
            i--;j--;
        }
        if(carry!=0) ans += carry+'0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};