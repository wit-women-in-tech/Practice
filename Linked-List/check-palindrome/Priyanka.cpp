class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse_linkedlist(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        while(curr!=NULL){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next == NULL)
        return true;
        if(head->next->next == NULL){
            if(head->data == head->next->data)
            return true;
            else
            return false;
        }
        Node* slow = head;
        Node* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse_linkedlist(slow->next);
        fast = head;
        while(slow!=NULL){
            if(slow->data!=fast->data)
            return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};
