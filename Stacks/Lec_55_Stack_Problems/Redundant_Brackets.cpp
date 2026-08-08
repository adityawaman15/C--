class Solution {
public:
    bool checkRedundancy(string &s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == ')') {
                bool hasOperator = false;

                while (!st.empty() && st.top() != '(') {
                    if (st.top() == '+' || st.top() == '-' ||
                        st.top() == '*' || st.top() == '/') {
                        hasOperator = true;
                    }
                    st.pop();
                }

                if (!st.empty())
                    st.pop(); // Remove '('

                if (!hasOperator)
                    return true; // Redundant brackets found
            } else {
                st.push(ch);
            }
        }

        return false; // No redundant brackets
    }
};