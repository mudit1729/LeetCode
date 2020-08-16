
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> sol;
        int leftProduct = 1;
        int rightProduct = 1;
        int sz = nums.size();
        left.resize(sz);
        right.resize(sz);
        for(int i = 0; i<sz; i++){
            leftProduct = leftProduct*nums[i];
            rightProduct = rightProduct*nums[sz-1-i];
            left[i] = leftProduct;
            right[sz-i-1] = rightProduct;
        }
        for(int i=0; i<sz; i++){
            if(i==0) sol.push_back(right[i+1]);
            else if (i==sz-1) sol.push_back(left[i-1]);
            else sol.push_back(left[i-1]*right[i+1]);
        }
        return sol;
        }
};