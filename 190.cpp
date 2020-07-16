class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int count = 0;
        int sol = 0;
        while (n>0){
            sol = sol | ((n & 1) << (31- count));
            n = n >> 1;
            count++;
        }
        return sol;
    }
};