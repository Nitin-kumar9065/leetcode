class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i;

        for(i=0; i<n-1; i++){
            if(arr[i]>=arr[i+1]){
                break;
            }
        }

        if(i==0 || i==n-1){
            return false;
        }

        for(; i<n-1; i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }

        return true;
    }
};