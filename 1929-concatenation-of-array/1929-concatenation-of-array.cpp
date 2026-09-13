class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size());
        int j=0;
        int k=0;
        for(int i=0;i<nums.size();i++){
            ans[j]=nums[i];
            j++;

        }
        for(k=0;k<nums.size();k++){
            ans[j]=nums[k];
            j++;
        }
    return ans;    
    }
};