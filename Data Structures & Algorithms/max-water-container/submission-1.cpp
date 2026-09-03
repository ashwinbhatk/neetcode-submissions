class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int l = 0, r = heights.size() - 1;
        int dist, min_height;
        while(l < r) {
            dist = r - l;
            min_height = min(heights[l], heights[r]);
            res = max(res, dist * min_height);
            if (heights[l] < heights[r]) {
                l++;
            } 
            else r--;
        }
        return res;
    }
};
