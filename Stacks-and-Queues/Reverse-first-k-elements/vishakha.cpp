#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    queue<int>q;
    queue<int>qu;
    stack<int>s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        q.push(a);
    }
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        qu.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        qu.push(q.front());
        q.pop();
    }
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}
