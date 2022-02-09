void twoStacks :: push1(int x)
{
    if((top2-top1) > 1)
    arr[++top1]=x;

}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{if((top2-top1) > 1)
arr[--top2]=x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    // arr[top1]=NULL;
    if(top1>=0)
    {return arr[top1--];
    }
    else
    return -1;

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
// arr[top]=NULL;
if(top2<size)
  return arr[top2++]; 
  
    else
    return -1;
}
