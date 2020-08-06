class Solution {
public:
    int trap(vector<int>& height) {
        int curVal = 0;
        int maxValL = 0;
        int maxValR = 0;
        int total;
        for(int i = 0; i<height.size(); i++){
            maxValL = height[i];
            for(int j = i; j>=0; j--){
                maxValL = max(maxValL, height[j]);
            }
            maxValR = height[i];
            for(int k = i; k<height.size(); k++){
                maxValR = max(maxValR, height[k]);
            }
            total = total + min(maxValL, maxValR) - height[i];
        }
        return total;
    }
};