class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int opencount=0;
        string result;
        for(char c:s){
            if(c=='('){
                opencount++;
            }else if(c==')'){
                if(opencount==0){
                    continue;
                }
                    opencount--;
               }
       result+=c;
        }
        int closedcount=0;
        string finalres;
        for(int i=result.size()-1;i>=0;i--){
            if(result[i]=='('){
                if(closedcount==0){
                    continue;
                }
                    closedcount--;
                
            }else if(result[i]==')'){
                closedcount++;
            }
          finalres+=result[i];
        }
        reverse(finalres.begin(),finalres.end());
        return finalres;
    }
};