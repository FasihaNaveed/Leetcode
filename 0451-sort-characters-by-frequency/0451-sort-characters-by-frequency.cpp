class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        vector<pair<int, char>> count;
        for (auto& [ch, f] : freq) {
            count.push_back({f, ch});
        }

        sort(count.rbegin(), count.rend());

        string result = "";
        for (auto& [f, ch] : count) {
            result += string(f, ch);
        }

        return result;
    }
};
