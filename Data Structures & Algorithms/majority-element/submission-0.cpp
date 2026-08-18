class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 1;
        int el = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] == el) freq ++;
            else freq --;
            if(freq == 0) {
                el = nums[i];
                freq = 1;
            }
        }
        return el;
    }
};