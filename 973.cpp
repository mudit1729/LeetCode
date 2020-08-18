class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> ans;
        
        sort(points.begin(), points.end(), [this](vector<int> a, vector<int> b){return sqrt(a[0]*a[0] + a[1]*a[1]) > sqrt(b[0]*b[0] + b[1]*b[1]);});
        for(int i = 0; i<K; i++){
            ans.push_back(points.back());
            points.pop_back();
        }
        return ans;
    }
};