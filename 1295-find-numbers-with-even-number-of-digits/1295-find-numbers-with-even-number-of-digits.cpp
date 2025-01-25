class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int ans=0;
       for(int i=0;i<nums.size();i++){
        int digit=to_string(nums[i]).length();
        if(digit%2==0){
            ans++;
        }
       } 
       return ans;
    }
};