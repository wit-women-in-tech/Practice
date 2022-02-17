class Solution{
  public:
    //Function to check whether the list is palindrome.
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
    bool isPalindrome(Node *head)
    {
        //Your code here
        // if(head==NULL) return true;
        Node*temp=head;
        int  n=0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        if(n<2) return true;
        int i=0;
        temp=head;
        while(i<(n+1)/2)
        {
            temp=temp->next;
            i++;
        }
        
        Node*k=reverse(temp);
        i=0;
       
        while(i<n/2)
        {
            if(head->data!=k->data)
            {
                return false;
            }
            head=head->next;
            k=k->next;
            i++;
        }
        
        return true;
    }
};