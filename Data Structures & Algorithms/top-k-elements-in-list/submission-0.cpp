class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int &i : nums) {
            freq[i]++;
        }
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        for(auto &[num, count] : freq) {
            bucket[count].push_back(num);
        }

        vector<int> res;

        for(int i = n; i >= 1 && res.size() < k; i--) {
            for(int &num : bucket[i]) {
                res.push_back(num);

                if(res.size() == k) break;
            }
        }
        return res;
    }
};
