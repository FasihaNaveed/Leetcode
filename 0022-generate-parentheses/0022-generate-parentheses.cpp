class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string>result;
        generateParanthesesHelper(n,"",0,0,result);
         return result;
    }
  void generateParanthesesHelper(int n,string current,int open,int close, vector<string>&result){
        if(open==n&&close==n){
            result.push_back(current);
        return;
        }
        if(open<n)
        generateParanthesesHelper(n,current+'(',open+1,close,result);
        if(close<open)
        generateParanthesesHelper(n,current+')',open,close+1,result);
  }
};