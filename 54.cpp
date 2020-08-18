class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int curRow = 0;
        int curCol = 0;
        vector<int> ans;
        int szR = matrix.size();
        if(szR == 0) return ans;
        int szC = matrix[0].size();
        int maxRow = szR-1;
        int maxCol = matrix[0].size()-1;
        while(curRow<=maxRow && curCol<=maxCol){
            for(auto i = curCol; i<=maxCol; i++){ans.push_back(matrix[curRow][i]);}
            for(auto i = curRow+1; i<=maxRow; i++){ans.push_back(matrix[i][maxCol]);}
            if(curRow<maxRow && curCol < maxCol) {
                for(auto i = maxCol-1; i>=curCol; i--){ans.push_back(matrix[maxRow][i]);}
                for(auto i = maxRow-1; i>curRow; i--){ans.push_back(matrix[i][curCol]);}
            }
            curRow++; curCol++;
            maxRow--; maxCol--;
        }
        return ans;
    }
};