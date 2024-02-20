class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        int end = n-1;
        string res = "";
        stack<string> st;

        while(s[start] == ' ')
            start++;
        while(s[end] == ' ')
            end--;

        string temp = "";

        for(int i=start; i<=end; i++) {
            if(s[i] == ' ') {
                if(temp != "") {
                    st.push(temp);
                    temp = "";
                }
            }
            else {
                temp += s[i];
            }
        }

        st.push(temp);

        while(!st.empty()) {
            string t = st.top();
            st.pop();
            res += t;
            if(!st.empty()) {
                res += " ";
            }
        }

        return res;
        }
};