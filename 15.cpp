class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i!=0 && nums[i] == nums[i-1]) continue;
            int x = i+1;
            int y = nums.size() - 1;
            while(x < y){
                int sum = nums[i] + nums[x] + nums[y];
                if(sum > 0) y--;
                else if(sum < 0) x++;
                else if(sum==0) {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[x]);
                    tmp.push_back(nums[y]);
                    ans.push_back(tmp);
                    x++; y --;
                    while(x<y && nums[x] == nums[x-1]) x++;
                }
            }

        }
        return ans;
    }
};