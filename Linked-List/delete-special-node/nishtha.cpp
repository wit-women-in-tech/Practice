class Solution
{
    public:
    int mx=-9999999;
    Node *compute(Node *head)
    {
        // your code goes here
         if(head==NULL)return NULL;
       head->next=compute(head->next);
       
        if(head->data<mx)
        {
            return head->next;
        }
        else
        {
            mx=head->data;
            return head;
        }
    }
    
};
   