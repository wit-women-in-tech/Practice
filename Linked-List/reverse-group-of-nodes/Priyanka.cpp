class Solution
{
    public:
    int lengthof_linkedlist(node* head){
        node* temp = head;
        int length = 0;
        while(temp!=NULL){
            temp = temp->next;
            length++;
        }
        return length;
    }
    
    node* reverse_group(node* head,int k,int length){
        node* prev = NULL , *curr = head , *next = NULL;
        if(length<k){
            while(curr != NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
        int count = 0;
        while(count < k && curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
        }
        if(next!=NULL)
        head->next = reverse_group(next,k,length-k);
        return prev;
    }
    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        int length = lengthof_linkedlist(head);
        head = reverse_group(head,k,length);
        return head;
    }
};
