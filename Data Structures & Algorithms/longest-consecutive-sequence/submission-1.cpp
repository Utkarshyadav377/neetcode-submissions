class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        int count = 0;
        int maxCount = 0;
        for(auto it : st) {
            int x = it;
            if(st.find(x - 1) == st.end()) {
                count = 1;
                while(st.find(x + 1) != st.end()) {
                    count ++;
                    x++;
                }
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
