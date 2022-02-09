void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	return true;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0)
	return true;
}

int pop(stack<int>& s){
	// Your code goes here
	int top=s.top();
	s.pop();
	return top;
}

int getMin(stack<int>& s){
	// Your code goes here
int min=1000000000;

	while(s.size()!=0)
	{
	    int curr=s.top();
	s.pop();
	   if(min>curr)
	   min=curr;
	}
	return min;
	
	
	
}
