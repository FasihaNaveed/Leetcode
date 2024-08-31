class Solution 
{
public:
    int heightChecker(vector<int>& h1) 
    {
        vector<int>arr=h1;
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=h1[i])
            ans++;
        }
        return ans;
    }
};