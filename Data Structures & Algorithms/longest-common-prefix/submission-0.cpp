class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string first = strs[0];
        for(int i = 1; i < n; i++) {
            int j = 0;
            while(j < min(first.size(), strs[i].size()) && strs[i][j] == first[j]) {
                j++;
            }
            first = first.substr(0, j);
        }
        return first;
    }
};