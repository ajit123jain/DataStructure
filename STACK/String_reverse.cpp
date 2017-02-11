#include<iostream>
#inlcude<stack> //stack from template library
using namespace std;
class Stack{
private:
	char A[101];
	int top;
public:
	void Push(int x);
	void Pop();
	int Top();
	bool isEmpty();
};  
void Reverse(char *C ,int n){
stack<char> S;
//loop for push
for(int i=0; i<n; i++){
	S.push(C[i]);
}
//loop for pop
for(int i=0; i<n; i++)
	C[i] = S.top();
     S.pop();
}
int main(){
char C[51];
printf("Enter a string\n");
gets(c);
Reverse(C,strlen(c));
printf("Output = %s\n", C);  

}