class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
       int j=nums.size();
       sort(nums.begin(),nums.end());
       int r=0;
       for(int i=0;i<j;i++)
       {
        if(nums[i]!=r)
        {
            return r;
        }
        r++;
       } 
       return j; 
    }
};