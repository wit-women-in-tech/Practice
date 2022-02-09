queue<int> modifyQueue(queue<int> qw, int k) {
    // add code here.
    int n=qw.size();
    queue<int>q;
     vector<int>v;
    for(int i=0;i<k;i++)
    {
        v.push_back(qw.front());
        qw.pop();
    }
    for(int i=k-1;i>=0;i--)
    {
        q.push(v[i]);
    }
    for(int i=k;i<n;i++)
    {
        q.push(qw.front());
        qw.pop();
    }
    return q;
}