class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool zero = false;
        bool zero1 = false;
        int n = nums.size();
        int prod = 1;
        int idx = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                prod *= nums[i];
            }
            else if(nums[i] == 0 && !zero) {
                zero = true;
                idx = i;
            }
            else if(nums[i] == 0 && zero == true) {
                zero1 = true;
            }
        }
        vector<int> ans(n, 0);
        if(zero && zero1) return ans;
        else if(idx == -1) {
            for(int i = 0; i < n; i++) {
                ans[i] = (prod/nums[i]);
            }
        }
        if(zero && !zero1) {
            ans[idx] = prod;
        }
        return ans;
    }
};
