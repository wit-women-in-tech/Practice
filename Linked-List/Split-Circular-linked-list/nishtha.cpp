int helper(Node* &head)
{
    if(!head)return 0;
    Node*slow=head,*fast=head->next;
    int c=1;
    while(slow!=fast)
    {
        c++;
        slow=slow->next;
        fast=fast->next->next;
    }
     slow->next=NULL;
     return c;
}
void splitList(Node *head, Node **h1, Node **h2)
{
    // your code goes here
  int n= helper(head);
  if(n==0)
  {
      return;
  }
  Node*a =head;
   *h1=head;
   int i=1;
   while(i<(n+1)/2)
   {
       head=head->next;
       i++;
   }
   Node*k= head->next;
   *h2=k;
   head->next=a;
   while(k->next)
   {
       k=k->next;
   }
   k->next=*h2;
   return;
}