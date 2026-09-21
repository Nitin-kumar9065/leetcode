class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0;i<s.size();i++){
            if(isupper(s[i])){
                int low =tolower(s[i]);
                s[i]=low;

               
            }
        }
    return s;    
    }
};