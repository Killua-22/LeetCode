class Solution {
public:
    bool checkValidString(string s) {
        stack<char> brackets;
        stack<char> star;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(')
                brackets.push(i);  // Store index of '('
            else if(s[i] == '*') 
                star.push(i);  // Store index of '*'
            else {  // For ')'
                if(!brackets.empty())  // If there's an unmatched '('
                    brackets.pop();  // Match it with this ')'
                else if(!star.empty())  // If no '(' to match, use a '*'
                    star.pop();
                else  // If neither '(' nor '*' are available to match, invalid string
                    return false;
            }
        }

        while(!brackets.empty() && !star.empty()) {
            // Ensure that the '*' can only be used to match a '(' that comes before it
            if(brackets.top() < star.top()) {
                brackets.pop();
                star.pop();
            } else {
                // If a '(' is after a '*', then it's impossible to balance
                return false;
            }
        }

        return brackets.size() == 0;
    }
};