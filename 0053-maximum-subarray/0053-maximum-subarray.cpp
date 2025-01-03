class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int currentSum=0; 
     int maxSum=nums[0];
      for(int n:nums){
        if(currentSum<0){
            currentSum=0;
        }
        currentSum+=n;
        maxSum=max(maxSum,currentSum);
      }
      return maxSum;
    }
};