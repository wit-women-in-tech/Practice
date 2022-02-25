class Solution
{
    public:
        // Your Code here
        // return head of list after adding oneNode* reverse_list(node* head){
        Node* reverse_list(Node* head){
        Node* prev = NULL , *curr = head , *next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        Node* t = reverse_list(head);
        Node* temp = t;
        int carry = (temp->data + 1)/10;
        temp->data = (temp->data + 1)%10;
        temp = temp->next;
        while(temp!=NULL){
            int data = temp->data;
            temp->data = (carry + data)%10;
            carry = (carry + data)/10;
            temp = temp->next;
        }
        
        if(carry>0){
            Node* rev = reverse_list(t);
            Node* res = new Node(carry);
            res->next = rev;
            return res;
        }
        else 
        return reverse_list(t);
        }
        
};
