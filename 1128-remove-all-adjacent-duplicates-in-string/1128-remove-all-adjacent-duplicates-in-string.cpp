class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto ch:s){
            if(!st.empty() &&ch==st.top())
                st.pop();
            else
                st.push(ch);
        }
        string result;
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        
        
        return result;
    }
};