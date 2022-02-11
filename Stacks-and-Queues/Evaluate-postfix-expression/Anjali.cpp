/*To evaluate postfix operation:
  1. push number in stack 
  2. as soon as any operator shows up pop top two elements of stack and perform operation on them.
  3. push the result of operation in stack.
*/

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string a)
    {
        stack<int> s;
        for(int i = 0; i < a.size(); i++){
            if(a[i] <= '9' && a[i] >= '0')  s.push(a[i]-'0');
            else{
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(operation(x,y,a[i]));
            }
        }
        return s.top();
    }
    
  // Function to find result of operation
    int operation(int x, int y, char z){
        if(z == '+')    return x+y;
        if(z == '-')    return y-x;
        if(z == '*')    return y*x;
        if(z == '/')    return y/x;
    }
};
