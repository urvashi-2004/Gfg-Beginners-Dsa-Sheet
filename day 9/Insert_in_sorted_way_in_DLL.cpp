Node* sortedInsert(Node * head, int x)
{
	Node* newnode=new Node;
	newnode->data=x;
	
	if(head==NULL){
	    return newnode;
	}
     	if(newnode->data <= head->data){
     	    newnode->next=head;
     	    head->prev=newnode;
     	    return newnode;
     	}
     	Node* curr=head;
     	while(curr->next!=NULL && curr->next->data < x){
     	    curr=curr->next;
     	}
     	Node* res=curr->next;
     	curr->next=newnode;
     	newnode->prev=curr;
     	newnode->next=res;
     	
     	if(res!=NULL){
     	    res->prev=newnode;
     	}
     	return head;
};