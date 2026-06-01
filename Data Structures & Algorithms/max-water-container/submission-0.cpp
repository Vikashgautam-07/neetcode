class Solution {
public:
    int maxArea(vector<int>& heights) {
        int amt = -1;
        int n = heights.size();

        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                amt = max(amt, abs(i-j)*min(heights[i], heights[j]));
            }
        }
        return amt;
    }
};
