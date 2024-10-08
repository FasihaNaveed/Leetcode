class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int windowsum=0;
        int ans=INT_MIN;
        while(r<nums.size()){
            if(r-l<k){
                windowsum+=nums[r];
                r++;
            }
            else if(r-l==k){
                ans=max(ans,windowsum);
                windowsum+=nums[r];
                r++;
                windowsum-=nums[l];
                l++;
            }
        }
        ans=max(ans,windowsum);
        return (double)ans/k;
    }
};