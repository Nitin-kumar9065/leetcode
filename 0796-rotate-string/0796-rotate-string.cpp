class Solution {
public:
    bool rotateString(string s, string goal) {
        if( s.length() != goal.length()){
            return false;
        }
        string newstring=s+s;
        if(newstring.find(goal)!=string::npos){
            return true;
        }
            
        
    return false;    
    }
};