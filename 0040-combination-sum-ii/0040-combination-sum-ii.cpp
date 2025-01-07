class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         sort(candidates.begin(), candidates.end());
       vector<vector<int>>res;
       vector<int>comb;
       makeCombinations(candidates,target,0,comb,res);
       return res;

    }
     void makeCombinations(vector<int>& candidates, int target, int index, vector<int>& comb, vector<vector<int>>& res){
        if(target==0){
            res.push_back(comb);
            return;
        }
        if(target<0){
            return;
        }
 for (int i = index;i<candidates.size();i++) {
            if (i>index && candidates[i] == candidates[i-1]) {
                continue;
            }
            
            if (candidates[i] > target) {
                break;
            }
             comb.push_back(candidates[i]);
            makeCombinations(candidates, target - candidates[i], i + 1, comb, res);
            comb.pop_back();
     }
    }
};