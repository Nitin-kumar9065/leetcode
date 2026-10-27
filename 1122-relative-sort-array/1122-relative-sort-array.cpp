class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            while(mp[arr2[i]]>0){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
        vector<int>remaining;
        for(auto x:mp){
            while(x.second>0){
                remaining.push_back(x.first);
                x.second--;
            }
        }
        sort(remaining.begin(),remaining.end());

        for(int i=0;i<remaining.size();i++){
            ans.push_back(remaining[i]);
        }
    return ans;    
    }
};