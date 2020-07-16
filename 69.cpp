class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int sol;
        int mid;
        if (x == 1 || x == 0) return x;
        while(start<=end) {
            mid = start + (end-start)/2;
            if (mid == x/mid) return mid;
            if (mid > x/mid) {
                end = mid - 1;
            } else if (mid < x/mid){
                start = mid + 1;
                sol = mid;
            }
        }
        return sol;
    }
};