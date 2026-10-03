class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        for( int i=n; i >0;i=i/10){
            int digit=i%10;
            product=product*digit;
        }
        for(int j=n;j>0 ;j=j/10){
            int digit= j%10;
            sum=sum+digit;
        }
    return product-sum;    
    }
};