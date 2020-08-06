class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(auto i = 0; i < n; i++){
            for(auto j = i; j < n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (auto i = 0; i < n; i++) {
            for(auto j = 0; j < n/2; j++){
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }
};