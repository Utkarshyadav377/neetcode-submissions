class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mpp;
        vector<vector<string>> ans;
        for(auto it : strs) {
            string sorted = it;
            sort(sorted.begin(), sorted.end());
            mpp[sorted].push_back(it);
        }
        for(auto it : mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
