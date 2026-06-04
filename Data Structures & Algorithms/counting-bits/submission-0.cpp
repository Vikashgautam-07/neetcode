class Solution {
public:
    int setBit(int num){
        int count = 0;
        while(num > 0)
        {
            num = num & (num - 1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>res;

        for (int i = 0; i <= n; i++)
        {
            res.push_back(setBit(i));
        }
        return res;
    }
};
