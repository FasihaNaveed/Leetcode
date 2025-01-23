class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans;
        int sum=0;
        int product=1;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            product*=digit;
            n/=10;
        }
        return ans=product-sum;
    }
};