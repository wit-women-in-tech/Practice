void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0){
	    return true;
	}
	else{
	    return false;
	}
}

int pop(stack<int>& s){
	// Your code goes here
	int ans=s.top();
	s.pop();
	return ans;
}

int getMin(stack<int>& s){
	// Your code goes here
	int val=s.top();
	s.pop();
	while(!s.empty()){
	    if(val>s.top()){
	        val=s.top();
	    }
	    s.pop();
	}
    return val;
}
