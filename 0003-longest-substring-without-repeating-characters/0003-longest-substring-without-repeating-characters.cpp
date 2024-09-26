class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_set<char>s1;
        int left=0,right=0, maxlength=0;
        while(right<n){
            if(s1.find(s[right])==s1.end()){
                s1.insert(s[right]);
                maxlength=max(maxlength,right-left+1);
                right++;
            }else{
                s1.erase(s[left]);
                left++;
            }
        }
        return maxlength;
        
    }
};