class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zIndx = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[zIndx++] = nums[i];
            }
        }
        for(int i = zIndx; i< nums.size(); i++){
            nums[i] = 0;
        }
    }
};