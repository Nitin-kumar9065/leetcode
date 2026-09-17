class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ind =0;
        int ans=0;
        for (int i = 0; i < n+1; i++) {
             ind= ind^i;

        }
        for (int i = 0; i < n; i++) {
                 ans = ans^nums[i];
            }
        //int nit=ind^ans;
        return ind^ans;
    }
};