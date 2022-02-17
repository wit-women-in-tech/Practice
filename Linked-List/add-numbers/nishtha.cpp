class Solution
{
      Node* reverse(Node*head)
    {
        Node*prev=NULL;
        Node*curr=head;
        Node*up=head->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=up;
            if(up)
            up=up->next;
        }
        return prev;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* f, struct Node* s)
    {
        // code here
        if(!f)return s;
        if(!s)return f;
        Node*t=new Node(0);
        Node*head=t;
        f=reverse(f);
        s=reverse(s);
        int c=0;
        while(s || f)
        {
            int sum=c;
            if(s)
             sum+=s->data;
             if(f)
             sum+=f->data;
            if(sum>=10)
            {
                c=1;
                sum-=10;
            }
            else c=0;
            Node*temp=new Node(sum);
            head->next=temp;
            head=temp;
            if(s)
            s=s->next;
            if(f)
            f=f->next;
        }
       if(c==1)
       {
            Node*temp=new Node(c);
            head->next=temp;
            head=temp;
       }
       head->next=NULL;
       return reverse(t->next); 
    }
};