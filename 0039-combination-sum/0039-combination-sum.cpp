class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>>res;
      vector<int>comb;
      makeCombination(candidates,target,0,comb,0,res);
      return res;
    }

 void makeCombination(vector<int>&candidates,int target,int index,vector<int>&comb,int total,vector<vector<int>>&res){
        if(total==target){
            res.push_back(comb);
            return;
        }
        if(total>target||index>=candidates.size()){
            return;
        }
        comb.push_back(candidates[index]);
        makeCombination(candidates,target,index,comb,total+candidates[index],res);
        comb.pop_back();
        makeCombination(candidates,target,index+1,comb,total,res);
  }
};