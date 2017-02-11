//Reverse of a linklist till stack has the address
void Reverse(){
if(head == NULL)
	return ;
stack<struct Node*> S;
Node* temp = head ;
while(temp!=NULL)
{
S.push(temp);
temp = temp->next;
}
temp = S.top();
head = temp;
S.pop();
while(!s.empty()){
	temp->next = S.top();
	S.pop();
	temp = tmep->next;
}
temp ->next = NULL;
}



Node * temp = S.top();
head  = temp;
s.pop();
while(!S.empty()){
temp->next = s.top();
s.pop();
temp = temp->next;

}
temp->next = NULL;

