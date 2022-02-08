queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
     int i,n;
    n=q.size();
    stack<int> s;
    queue<int> q2;
    
    for(i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    
    for(i=k;i<n;i++)
    {
        q2.push(q.front());
        q.pop();
    }
    
    for(i=0;i<k;i++)
    {
        q.push(s.top());
        s.pop();
    }
    
    for(i=k;i<n;i++)
    {
        q.push(q2.front());
        q2.pop();
    }
    
    return q;
}
