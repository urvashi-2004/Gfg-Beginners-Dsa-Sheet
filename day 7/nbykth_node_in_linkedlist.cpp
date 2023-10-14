
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int fractional_node(struct Node *head, int k)
{
    Node* temp=head;
    Node* curr=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int position=ceil(float(count) / float(k));
     int ans=1;
     while(ans!=position){
         curr=curr->next;
         ans++;
     }
     return curr->data;
}