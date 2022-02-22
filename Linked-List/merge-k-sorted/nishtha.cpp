#define pp pair<int,Node*>
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           Node * head=new Node(0);
           Node*temp=head;
           priority_queue<pp,vector<pp>,greater<pp>>pq;
          for(int i=0;i<k;i++)pq.push({arr[i]->data,arr[i]});
          while(pq.size())
          {
              Node*node=new Node(pq.top().second->data);
              temp->next=node;
              temp=node;
              pp p=pq.top();
              pq.pop();
              if(p.second->next!=NULL)
              {
                  pq.push({p.second->next->data,p.second->next});
              }
            //  pq.pop();
          }
          temp->next=NULL;
          return head->next;
    }
};
