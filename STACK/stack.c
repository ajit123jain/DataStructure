#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void Push(int x){
	if(top == MAX_SIZE - 1){
    printf("Error : Stack overflow");
    }
    else
{
         top++;
        A[top]=x;
        //printf("A[top] = %d\n",A[top]);
}
}
void Pop(){
     if(top == -1){
     printf("Error: No element to pop\n");
       
     }
      top--;
	}
void Print(){
    int i;
    printf("Stack :  ");
    for(i=0; i<=top; i++){
    printf(" %d ",A[i]);
    }
    printf("\n");
    }
void Top(){
	if(top>=-1)
		printf("top = %d\n",A[top]);
	else{
		printf("stack is empty");
	}
	}
int main(){
	Push(2);
	Print();
	Push(10);
	Print();
	Push(12);
	Top();
	Pop();
	Pop();
	Print();


}
