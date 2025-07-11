class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;

        int n = nums.size();
        vector<int> result;
        for (auto& [num, count] : freq) {
            if (count > n / 3) result.push_back(num);
        }
        return result;
    }
};
