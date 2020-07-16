class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> sol;
        int diff;
        int temp_first, temp_second;
        map<int, int>::iterator diff_itr;
        for(auto i=0; i<nums.size(); i++) {
            mp.insert(pair<int, int>(nums[i], i));
        }
        for (auto i=0; i<nums.size(); i++){
            diff_itr = mp.find(nums[i]);
            temp_first = diff_itr->first;
            temp_second = diff_itr->second;
            mp.erase(diff_itr);
            diff =  target - nums[i];
            diff_itr = mp.find(diff);
            if (diff_itr!=mp.end()) {
                sol.push_back(i);
                sol.push_back(diff_itr->second);
                return sol;
            }
            mp.insert(pair<int, int>(temp_first, temp_second));
        }
        return sol;              
}
};
