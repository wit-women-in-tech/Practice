// idea is to use stack to reverse k elements.
queue<int> modifyQueue(queue<int> q, int k) {
    queue<int> ans;
    stack<int> s;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    
    while(q.size()){
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
