class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> s;
        for(int i=0; i<operations.size(); i++)
        {
            if(s.empty()) s.push(stoi(operations[i]));
            else
            {
                if(operations[i] == "+")
                {
                    int y = s.top();
                    s.pop();
                    int x = s.top();
                    s.push(y);
                    s.push(x+y);
                }
                else if(operations[i] == "C")
                {
                    s.pop();
                }
                else if(operations[i] == "D")
                {
                    int x = s.top();
                    s.push(x*2);
                }
                else
                    s.push(stoi(operations[i]));
            }
        }
        
        int sum = 0;
        while(!s.empty())
        {
            int temp = s.top();
            sum+= temp;
            s.pop();
        }
        
        return sum;
    }
};