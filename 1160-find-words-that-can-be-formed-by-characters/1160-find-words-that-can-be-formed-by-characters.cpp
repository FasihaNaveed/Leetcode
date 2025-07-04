class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        int freq[26] = {0};
        for(char c : chars) freq[c - 'a']++;

        for(string w : words) {
            int temp[26] = {0};
            bool ok = true;
            for(char c : w) {
                if(++temp[c - 'a'] > freq[c - 'a']) {
                    ok = false;
                    break;
                }
            }
            if(ok) ans += w.size();
        }
        return ans;
    }
};
