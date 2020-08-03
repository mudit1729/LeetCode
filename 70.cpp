class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        int tempArray[n+1];
        tempArray[0] = 0;
        tempArray[1] = 1;
        tempArray[2] = 2;
        for(int i = 3; i<=n; i++){
            tempArray[i] = tempArray[i-1] + tempArray[i-2];
        }
        return tempArray[n];
    }
};