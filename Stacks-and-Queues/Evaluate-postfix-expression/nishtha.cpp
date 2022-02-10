  int evaluatePostfix(string s)
    {
        // Your code here
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')st.push(s[i]-'0');
            else
            {
                 int p=st.top();
                 st.pop();
                 int q=st.top();
                 st.pop();
                if(s[i]=='+')
                {
                   p=p+q;
                }
                else if(s[i]=='-')
                {
                    p=q-p;
                }
                else if(s[i]=='*')
                {
                    p=p*q;
                }
                else
                {
                    p=q/p;
                }
                st.push(p);
            }
        }
        return st.top();
    }