/***********
This is Md Abul Kashem. I am a computer science student at Easter Washington University. I like to learn new stuff.
I love computer programming with c. 

Description: this program takes as input a list of n integers and find the last even number location and the largest even number location. Return 0 if no even number. 
******************/

#include<stdio.h>


int findLastEvenNumIndex(int * arr, int size); // this will find the Last even number 
int largestEvenNumIndex(int * arr, int size); // this will find the largest even number 

int main(){
	
	 int arr[11] = {1, 2, 3, 4, 5,12,13,4,5,6,99};
	int index= findLastEvenNumIndex(arr, 11);
	printf("Last even Number : %d \n,", arr[index]);
	
	int largestEven= largestEvenNumIndex(arr, 11);
	printf("Largest even Number : %d \n,", arr[largestEven]);
	
	return 0;
}
int findLastEvenNumIndex(int * arr, int size){
	int index =0;
	
	for (int i =0; i<size; i++){
		if(*(arr+i)%2==0){
			
			index=i;
			
		}
	}
	
	return index;
}
int largestEvenNumIndex(int * arr, int size){
	int index =0;
	int Value = 0;
	
	for (int i =0; i<size; i++){
		
		if(*(arr+i)%2==0){
			if(*(arr+i)>Value){
			
			Value = *(arr+i);
			index=i;
			}
		}
		
	}
	
	return index;
}