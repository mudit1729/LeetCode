class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size()==0) return vector<vector<int>>{};
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){return a[0]<b[0];});
        ans.push_back(intervals[0]);
        for(auto i = 0; i < intervals.size(); i++){
            if((ans.back())[1] < intervals[i][0]) ans.push_back(intervals[i]);
            else
                (ans.back())[1] = max(intervals[i][1], ans.back()[1]);
        }
        return ans;
    }
};