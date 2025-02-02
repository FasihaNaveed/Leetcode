class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int ans=0;
      int n=accounts.size();
      int m=accounts[0].size();
           for(int i=0;i<n;i++){
            int customer=0;
            for(int j=0;j<m;j++){
                customer+=accounts[i][j];
            }
            ans=max(ans,customer);
           }  
           return ans;
    }
};