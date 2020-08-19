class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int> m;
        // for(auto i =0; i<nums.size(); i++){
        //     if(m.find(nums[i])!=m.end()) m[nums[i]]++;
        //     else m[nums[i]] = 1;
        // }
        // for(auto i:m){
        //     if(i.second == 2 || i.second == 1) return i.first;
        // }
        // return -1;
        int seenOnce = 0;
        int seenTwice = 0;
        for(int i : nums){
            seenOnce = ~seenTwice & (seenOnce ^ i);
            seenTwice = ~seenOnce & (seenTwice ^ i);
            
            //cout << seenOnce << endl;
        }
        return seenOnce;
    }
};