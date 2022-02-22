class Solution
{
    public:
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
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node*k=reverse(head);
        Node*temp=k;
        int c=1;
        Node*prev=NULL;
        while(temp)
        {
            if(temp->data+c==10)
            {
                temp->data=0;
                c=1;
            }
            else
            {
                temp->data+=1;
                c=0;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        if(c==1)
        {
            Node*node=new Node(c);
            prev->next=node;
            node->next=NULL;
        }
        return reverse(k);
        
    }
};