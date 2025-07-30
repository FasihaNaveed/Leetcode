class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128, 0);
        for (char c : t) freq[c]++;
        
        int left = 0, minLen = INT_MAX, start = 0, count = t.size();
        
        for (int right = 0; right < s.size(); right++) {
            if (freq[s[right]]-- > 0) count--;
            
            while (count == 0) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                if (++freq[s[left]] > 0) count++;
                left++;
            }
        }
        
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};