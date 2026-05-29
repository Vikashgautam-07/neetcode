class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mpp;
        
        for ( int i = 0; i < nums.size(); i++) 
        {
            int a = nums[i];
            int b = target - a;
            if (mpp.find(b) != mpp.end())
            {
                // if ( a > b) return {mpp[b], i};
                return {mpp[b],i};
            }
            mpp[a] = i;
        }
    }
};
