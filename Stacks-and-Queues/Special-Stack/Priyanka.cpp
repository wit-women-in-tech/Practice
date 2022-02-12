void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size() == n)
	return true;
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size() == 0)
	return true;
	return false;
}

int pop(stack<int>& s){
	// Your code goes here
	int a = s.top();
	s.pop();
	return a;
}

int getMin(stack<int>& s){
	// Your code goes here
	int ans = s.top();
	s.pop();
	while(!s.empty()){
	    int a = s.top();
	    s.pop();
	    ans = min(ans,a);
	}
    return ans;
}
