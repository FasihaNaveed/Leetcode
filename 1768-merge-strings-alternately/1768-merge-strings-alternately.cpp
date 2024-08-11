class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string result="";
        int a=0;
        int b=0;
       while(a<word1.size()&&b<word2.size()){
           result+=word1[a++];
           result+=word2[b++];
       }
        while (a<word1.size()) {
        result+=word1[a++];
        }
        while (b<word2.size()) {
        result+=word2[b++];
        }
        return result;
    }
};