class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>S;
       stack<char>T;
       for(auto ch:s){
        if(ch!='#'){
            S.push(ch);

        }
        else if(!S.empty()){
            S.pop();
        }
       } 
       for(auto ch:t){
        if(ch!='#'){
            T.push(ch);

        }
        else if(!T.empty()){
            T.pop();
        }
       } 
       return S==T;
    }
};