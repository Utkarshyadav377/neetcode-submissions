class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<vector<int>> freq(n + 1);
        for(int i = 0; i < n; i++) {
            mpp[nums[i]] ++;
        }
        for(auto it : mpp) {
            freq[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i = n; i >= 0; i--) {
            for(auto it : freq[i]) {
                ans.push_back(it);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};