class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1; i<=n; i++){
            bool a, b;
            a = i%3==0;
            b = i%5==0;
            if(a&&b) ans.push_back("FizzBuzz");
            else if(a) ans.push_back("Fizz");
            else if(b) ans.push_back("Buzz");
            else {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};