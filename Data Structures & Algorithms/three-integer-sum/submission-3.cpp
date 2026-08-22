class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        int i = 1;
        int j = n - 1;

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int k = 0; k < n; k++) {
            i = k + 1;
            j = n - 1;

            if(k != 0 && nums[k] == nums[k - 1]) continue;

            while(i < j) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0) i++;
                else if(sum > 0) j--;
                else {
                    ans.push_back({nums[k], nums[i], nums[j]});
                    i++;
                    j--;
                }

                while(i < n && i > k + 1 && nums[i] == nums[i - 1]) i++;
                while(j > 0 && j < n - 1 && nums[j] == nums[j + 1]) j--;
            }
        }

        return ans;
    }
};
