class Solution {
public:
    int maxArea(vector<int>& heights) {
        int amt = -1;
        int n = heights.size();

        int left = 0, right = n - 1;

        while(left < right)
        {
            amt = max(amt, (right - left) * min(heights[left], heights[right]));

            if(heights[left] < heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return amt;
    }
};
