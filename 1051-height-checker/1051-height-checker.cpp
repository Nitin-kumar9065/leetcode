class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected=heights;
        sort(expected.begin(),expected.end());
        int count=0;
        int i=0;
        while(i<heights.size()){
            if(heights[i] !=expected[i]){
                count++;
            }
            i++;
            

        }
    return count;    
    }
};