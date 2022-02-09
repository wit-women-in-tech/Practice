#include<bits/stdc++.h>
int mn=INT_MAX;
void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
	return;
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n) return true;
	else return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return (!s.size());
}

int pop(stack<int>& s){
	// Your code goes here
	int k=s.top();
	s.pop();
	return k;
}

int getMin(stack<int>& s){
	// Your code goes here
	if(s.size()==0) return mn;
	if(s.size()==1) return s.top();
     int d=s.top();
     s.pop();
     int r=getMin(s);
     mn=min(d,r);
     return mn;
}