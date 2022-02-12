void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	if(s.empty())  return true;
	return false;
}

int pop(stack<int>& s){
	if(s.empty())   return -1;
	int x = s.top();
	s.pop();
	return x;
}

int getMin(stack<int>& s){
	stack <int> a;
	int mini = s.top();
  // storing elements of stack in a temporary stack.
	while(!s.empty()){
	    mini = min(mini, s.top());
	    a.push(s.top());
	    s.pop();
	}
	
  // filling back the elements of stack from temporaary stack.
	while(!a.empty()){
	    s.push(a.top());
	    a.pop();
	}
	
	return mini;
}
