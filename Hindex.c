#include <stdio.h>
int min (int num1, int num2); // function to find minmum number
int hIndex (int citations[], int length); // this functionn will find the H-index 

int main(){
	
	
	int arr [] = {100,2,3};
	
	printf("H-index : %d\n", hIndex(arr, 3));
	
	return 0;
} // end main 


int hIndex (int citations[], int length){
	
	
	if(citations==NULL || length==0){
		return 0;
	}
	int counts[length+1]; // 
	
	for (int i=0; i<length; i++){
		if(citations[i]>length){
			counts[length] += 1;
			
		}else{
			
			counts[citations[i]] += min(1, citations[i]);
		}
	}//end for 
	
	 int citationCount = 0;
	 for (int i = length-1; i>=0; i--){
		 citationCount += counts[i];
		 if(i<= citationCount){
			 return i;
			 
		 }
		 
	 }//end for 
	
	
	return -1;
}


int min (int num1, int num2){
	
	if(num1<num2){
		
		return num1;
	}else
		return num2;
}// end min 