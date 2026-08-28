class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int res = 0;

        for (int num : st) {
            if (!st.contains(num - 1)) {
                int curr = num;
                int count = 1;

                while (st.contains(curr + 1)) {
                    curr++;
                    count++;
                }

                res = max(res, count);
            }
        }

        return res;
    }
};