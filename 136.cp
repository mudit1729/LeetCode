class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int> m;
        // for(auto i =0; i<nums.size(); i++){
        //     if(m.find(nums[i])!=m.end()) m[nums[i]]++;
        //     else m[nums[i]] = 1;
        // }
        // for(auto i:m){
        //     if(i.second == 1) return i.first;
        // }
        // return -1;
        //if(nums.size() == 1) return nums[0];
        //sort(nums.begin(), nums.end());
        //for(auto i = 0; i<nums.size(); i=i+2){
        //    if(nums[i]!=nums[i+1]) return nums[i];
        //}
        //return 0;
        int a = 0;
        for(int i : nums){
            a = a^i;
        }
        return a;
    }
};