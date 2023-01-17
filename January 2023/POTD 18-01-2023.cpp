class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        Node *temp = head;
        
        if(head == NULL) {
            return -1;
        }
        
        while(temp != NULL) {
            if(temp->data < 0) {
                return -(temp->data);
            }
            temp->data = -(temp->data);
            temp = temp->next;
        }
        
        return -1;
    }
};
