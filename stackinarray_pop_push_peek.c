#include<stdio.h>
#define size 5

//Stack Data Structure (with Push Pop Peek Operations Array)


int array[size];
int top;//variable to hold indix


void push(int data){//Adding elements (such as ctrl c) (top index increases by 1)
	
	//I will check if the stack is full
	if(top+1==size){
		printf("Stack is full.");
	}
	else{
		top++;
		array[top]=data;
	}
	

}
void pop(){//Used to extract elements from the top of the stack (like ctrl-z) (top value decreases by 1)
	
	//If the stack is empty, I check if the stack is empty because I can't remove the element.
	if(top==-1){
		printf("Stack is empt.y");
	}
	else{
		top--;
	}
	

}
int peek(){//Returns the topmost element to the user (such as ctrl-v) (the top does not change)
	
	return array[top];//It will return a value that will not return an index.

	
}
void _print(){
	
	int i;
	for(i=0;i<top+1;i++){//I didn't write (i <size) because it would show non-added elements with 0.
		printf("%d ",array[i]);
	}
	
	printf("==>TOP");
}
int main(){
	
	int n,k;
	top=-1;
	
	
    
    while(1){
    	
    	printf("\n1-Push\n2-Pop\n3-Peek");
        printf("\nEnter your choice:");
        scanf("%d",&n);
        
    	switch(n){
    	
    	case 1:
    		printf("Enter the element to be added:");
    		scanf("%d",&k);
    		push(k);
    		_print();
    		break;
    		
        case 2:
		    pop();
			_print();
			break;	
				
    	case 3:
    		printf("\nTop value=>%d",peek());
    		break;
    	
    	
    	
    	}
	}
	
	
	return 0;
}
