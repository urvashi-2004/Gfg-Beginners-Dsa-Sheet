struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node* deleteNode(Node *head,int x)
{       if(x == 1){
        Node* temp=head;
        head=head->next;
        //memory free first node
        temp->next=NULL;
        delete temp;
        return head;
        }
        else{
        Node* curr=head;
        Node* prev=NULL;

        int count=1;
        while(count < x){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
        return head;
    }
}