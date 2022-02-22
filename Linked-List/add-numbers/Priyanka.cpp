class Solution
{
    public:
    
    //Function to add two numbers represented by linked list.
    Node* reverse_linkedlist(Node* head){
        if(head == NULL || head->next == NULL)
        return head;
        Node* rest = reverse_linkedlist(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse_linkedlist(first);
        second = reverse_linkedlist(second);
        int carry = 0;
        Node* res = NULL;
        Node* curr = NULL;
        while(first!=NULL || second!=NULL || carry!=0){
            int sum = carry + ((first!=NULL)?first->data:0) + ((second!=NULL)?second->data:0);
            carry = (sum>9) ? 1 : 0;
            sum = sum%10;
            Node* temp = new Node(sum);
            if(res == NULL) res = temp;
            else curr->next = temp;
            curr = temp;
            if(first!=NULL) first = first->next;
            if(second!=NULL) second = second->next;
        }
        Node* head = reverse_linkedlist(res);
        return head;
    }
};
