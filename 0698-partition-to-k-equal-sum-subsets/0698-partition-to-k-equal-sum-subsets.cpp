class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int totalsum=accumulate(nums.begin(),nums.end(),0);
        if(totalsum%k!=0){
            return false;
        }
        int targetsum=totalsum/k;
        if(targetsum<nums[0]){
            return false;
        }
        vector<int>subsets(k,0);
        return canpartition(nums,subsets,0,targetsum);
    }
    bool canpartition(vector<int>&nums,vector<int>&subsets,int index,int targetsum){
         if (index == nums.size()) {
        return true;
    }
    for (int i = 0; i < subsets.size(); i++) {
        if (subsets[i] + nums[index] <= targetsum) {
            subsets[i] += nums[index]; 
            if (canpartition(nums, subsets, index + 1, targetsum)) {
                return true;
            }
             subsets[i] -= nums[index];
        }
        if (subsets[i] == 0) {
            break;
        }
    }
     return false;
}
};