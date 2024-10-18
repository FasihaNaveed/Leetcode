class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.length()==0)
        return res;
        int i=0;
        string output;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,i,res,mapping);
        return res;
         }
         void solve(string digits,string output,int i,vector<string>&res,string mapping[]){
            if(i>=digits.length()){
            res.push_back(output);
            return;
            }
int num=digits[i]-'0';
string value=mapping[num];
for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            solve(digits, output, i + 1, res, mapping);
            output.pop_back();
        }
         }
};