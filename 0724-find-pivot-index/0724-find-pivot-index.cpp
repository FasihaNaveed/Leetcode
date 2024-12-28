class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int total_sum=0,left_sum=0;
     for(int x:nums){
        total_sum+=x;
     }
     for(int i=0;i<nums.size();i++){
        if(left_sum==total_sum-left_sum-nums[i]){
            return i;
        }
        left_sum+=nums[i];
     }  
     return -1; 
    }
};