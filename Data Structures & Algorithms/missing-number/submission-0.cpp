class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xoor = 0;

        for (int i = 0; i <= nums.size(); i++)
        {
            xoor ^= i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            xoor ^= nums[i];
        }

        return xoor;
    }
};
