class Solution {
public:
    int hammingWeight(uint32_t n) {
        int setBit = 0;

        while(n > 0)
        {
            setBit += (n & 1);
            n = n >> 1;
        }
        return setBit;
    }
};
