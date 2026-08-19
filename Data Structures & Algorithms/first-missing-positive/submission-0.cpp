class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int expected = 1;
        sort(nums.begin(), nums.end());

        for(auto it : nums) {
            if(it < expected) continue;
            else if(it == expected) {
                expected ++;
                continue;
            }
            else {
                return expected;
            }
        }
        return expected;
    }
};