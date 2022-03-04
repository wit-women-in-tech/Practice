class Solution {
public:
    void Find_middle(ListNode* curr,ListNode** first,ListNode** second){
        ListNode* slow = curr;
        ListNode* fast = curr->next;
        while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                slow = slow->next;
                fast = fast->next;
            }
        }
        *first = curr;
        *second = slow->next;
        slow->next = NULL;
    }
    ListNode* merge_both(ListNode* first,ListNode* second){
         ListNode* ans = NULL;
        if(first == NULL)
            return second;
        else if(second == NULL)
            return first;
        
        if(first->val <= second->val){
            ans = first;
            ans->next = merge_both(first->next,second);
        }
        else{
            ans = second;
            ans->next = merge_both(first,second->next);
        }
        return ans;
    }
    void mergesort(ListNode** head){
        ListNode* curr = *head;
        ListNode* first,*second;
        if(curr == NULL || curr->next == NULL)
            return ;
        Find_middle(curr,&first,&second);
        
        mergesort(&first);
        mergesort(&second);
        * head = merge_both(first,second);
    }
    
    ListNode* sortList(ListNode* head) {
        mergesort(&head);
        return head;
    }
};
