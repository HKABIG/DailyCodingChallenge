class Solution
{
    public:
     //Function to find first node if the linked list has a loop. 
    int findFirstNode(Node* head)
    {
        if(head==NULL || head->next==NULL) return -1;
        Node* slow = head;
        Node* fast = head;
        bool f = false;
        while(fast!=NULL and fast->next!=NULL and slow!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast){
                f = true;
                break;
            }
        }
        if(f==false) return -1;
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return fast->data;
        
    }
};