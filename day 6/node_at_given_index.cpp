struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; 

int GetNth(struct node* head, int index){
   int count=1;
   while(count!=index){
       head=head->next;
       count++;
   }
   return head->data;
   
}