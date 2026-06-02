class Solution {
public:
    bool isValid(string s) {
        stack<char> sp;
        int i = 0;

        while(i < s.size())
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                sp.push(s[i]);
                i++;
            }
            else
            {
                if(sp.empty()) 
                    return false;

                char t = sp.top();

                if ((s[i] == ')' && t == '(')|| 
                    (s[i] == ']' && t == '[')||
                    (s[i] == '}' && t == '{'))
                {
                    sp.pop();
                    i++;
                }
                else
                {
                    return false;
                }
            }
        }
        return sp.empty();
    }
};
