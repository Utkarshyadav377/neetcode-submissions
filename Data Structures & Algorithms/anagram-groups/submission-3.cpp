class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;
        for(int i = 0; i < strs.size(); i++) {
            int hash[26] = {0};
            for(int j = 0; j < strs[i].size(); j++) {
                hash[strs[i][j] - 'a']++;
            }
            string key = to_string(hash[0]);
            for(int j = 1; j < 26; j++) {
                key = key + "," + to_string(hash[j]);
            }
            mpp[key].push_back(strs[i]);
        }
        for(auto it : mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
