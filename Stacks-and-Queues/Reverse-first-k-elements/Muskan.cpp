queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    queue<int>q2;
    stack<int>st;
    for(int i=0;i<k&&q.size()>0;i++)
    {
        st.push(q.front());
       q.pop();
    }
    while(st.size()!=0)
    {
        q2.push(st.top());
        st.pop();
    }
    while(q.size()!=0)
    {
         q2.push(q.front());
        q.pop();
    }
    
    return q2;
}
