class Solution {
public:
    int longestValidParentheses(string s) {
       stack <char> c;
        stack <int> ss;
        int i=0;
        int ans = 0;
        ss.push(-1);
        while(i<s.length()){
            if(s[i] == '('){
                c.push('(');
                ss.push(i);
            }
            else if(s[i] == ')') {
                if((!c.empty()) && (!ss.empty()) && (c.top() == '(')){
                    c.pop();
                    ss.pop();
                    ans = max(ans,i-ss.top());
                }
                else{
                    ss.push(i);
                }
            }
            i++;
        }
        return ans;
    }
};
