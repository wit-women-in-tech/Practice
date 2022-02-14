int evaluatePostfix(string S)
    {
        // Your code here
        stack <int> s;
        int i=0;
        while(i<S.length()){
            if(S[i]!='+' && S[i]!='-' && S[i]!='/'  && S[i]!='*')
            s.push(S[i] - '0');
            else{
                int se = s.top();
                s.pop();
                int f = s.top();
                s.pop();
                if(S[i] == '+')
                s.push(f+se);
                else if(S[i] == '-')
                s.push(f-se);
                else if(S[i] == '*')
                s.push(f*se);
                else if(S[i] == '/')
                s.push(f/se);
            }
            i++;
        }
        return s.top();
    }
