/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergelists(ListNode* a, ListNode* b)
    {
         ListNode* head=new ListNode(0) ;
         ListNode* temp=head;
        if(!a)return b;
        if(!b)return a;
        while(a || b)
        {
            if(!a) goto t1;
            if(!b) goto t2;
            if(a->val<=b->val)
            {
                t2:
                ListNode* t=new  ListNode(a->val);
                a=a->next;
                temp->next=t;
                temp=t;
            }
            else
            {
                t1:
                ListNode* t=new  ListNode(b->val);
                b=b->next; 
                temp->next=t;
                temp=t;
            }
                
        }
       temp->next=NULL;
        return head->next;
    }
    ListNode* merge(ListNode* head)
    {
        if(head->next==NULL)return head;
        ListNode*slow=head,*fast=head;
        while(fast && fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=merge(slow->next);
        slow->next=NULL;
        ListNode* b=merge(head);
        return mergelists(a,b);
    }
    ListNode* sortList(ListNode* head) {
        if(!head)return head;
        return merge(head);
    }
};