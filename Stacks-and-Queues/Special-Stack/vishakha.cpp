void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
    return s.size()==n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size()==0;
}

int pop(stack<int>& s){
	// Your code goes here
	int top=s.top();
	s.pop();
	return top;
}

int getMin(stack<int>& s){
	// Your code goes here
	int min=s.top();
	s.pop();
	while(!s.empty()){
	    if(min>s.top()){
	        min=s.top();
	    }
	    s.pop();
	}
    return min;	
}
