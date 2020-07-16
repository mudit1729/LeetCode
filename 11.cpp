class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, area =0;
        int x = 0, y = height.size() - 1;
        int hx, hy;
        while(x < y) {
            hx = height[x];
            hy = height[y];
            area = (hx > hy ? hy : hx)*(y - x);
            maxArea = maxArea > (area) ? maxArea:area;
            if(hx >= hy) {y--; continue;}
            else {x++; continue;}
        }
        return maxArea;
    }
};