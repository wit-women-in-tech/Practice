#include<bits/stdc++.h>
class Solution
{
    
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        unordered_map<Node*,int>mp;
        Node*pre=NULL;
        while(head)
        {
            if(mp.count(head)==0)mp[head]=1;
            else
            {
                pre->next=NULL;
                break;
            }
            pre=head;
            head=head->next;
        }
        return;
    }
};