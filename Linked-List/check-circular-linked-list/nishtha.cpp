bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL) return true;
    Node*temp=head;
    temp=temp->next;
    while(temp!=head )
    {
        if(temp==NULL) return false;
        temp=temp->next;
    }
    return true;
}