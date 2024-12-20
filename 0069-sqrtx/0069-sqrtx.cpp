class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
        return x;
        int low=1,high=x,mid,result=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid==x/mid){  //mid*mid==x
            return mid;}
            if(mid<x/mid){
            low =mid+1;
            result=mid;
            }else{
            high=mid-1;}
        }
        return result;
    }
};