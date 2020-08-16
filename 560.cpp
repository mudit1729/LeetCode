class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0; 
        map<int,int> hashMap; 
        int cnt = 0; 
        hashMap[0]++; 
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            cnt += hashMap[sum-k];
            hashMap[sum]++;
        }
        return cnt;
    }
};