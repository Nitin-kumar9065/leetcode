class Solution {
public:
    bool isPalindrome(int x) {
        long long num = 0;
        int original =x;
        if(x<0){
            return false;
        }
        
        while(x>0){
           int ld=(x % 10);
           num=(num*10)+ld;
           x=x/10;   
        }
        if(num==original){
            return true;
        }
        else{
          return false;
        }
    }
        
    
};