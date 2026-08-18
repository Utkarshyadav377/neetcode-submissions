class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> color(3, 0);
        for(int i = 0; i < n; i++) {
            color[nums[i]] ++;
        }
        nums.clear();
        for(int i = 0; i < 3; i++) {
            while(color[i] --) {
                nums.push_back(i);
            }
        }
    }
};