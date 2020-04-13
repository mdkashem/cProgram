/***********
This is Md Abul Kashem. I am a computer science student at Easter Washington University. I like to learn new stuff.
I love computer programming with c. 
I am gonna implement the Binary search algorithm in c. 
******************/

#include<stdio.h>
int binarySearch(int * ptr, int size, int target);

int main(){
	 int x[5] = {1, 2, 3, 4, 5};
      int* ptr;
	  ptr = x;
	  printf("Location Number : %d\n", binarySearch(ptr, 5, 4));
	return 0;
}

int binarySearch(int * ptr, int size, int target){
	int start =1;
	int end = size-1;
	while(start<end){
		int middle = (start+end)/2;
		if(target>*(ptr+middle)){
		start = middle+1;
		}else{
		end=middle;
		}	
	}
	if(target==*(ptr+start)){ 
		return start;
	}else{	
		return 0;
	}
		
	
	
}