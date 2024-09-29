class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       for(auto str:strs){
        string word=str;
        sort(word.begin(),word.end());
        mp[word].push_back(str);
  } 
  vector<vector<string>>result;
  for(auto str:mp){
    result.push_back(str.second);
  }
  return result;
    }
};