/*
Author: Md Abul Kashem
Descriptions: this program make the least total number of coins to make n cents change with quarters, dimes, nickles, and pennies.
*/

#include<stdio.h>
void ChangeMaker(int change);

int main (){
	ChangeMaker(97);
	
	return 0;
}//end main 


void ChangeMaker(int change){
	// we have four denominations 
	int cents = change;
	
	int quarter = 25 ;
	int dimes = 10;
	int nickles =5;
	int pennies = 1;
	
	int i; 
	int count = 0;
	int q1=0;
	int d1 = 0;
	int n1 = 0;
	int p1 = 0;
	while(change >= quarter){
		q1 = q1 +1;
		change = change - quarter;
		
	}
	while(change >= dimes){
		d1 = d1 +1;
		change = change - dimes;
		
	}while(change >= nickles){
		n1 = n1 +1;
		change = change - nickles;
		
	}while(change >= pennies){
		p1 = p1 +1;
		change = change - pennies;
		
	}
	count = q1+d1+n1+p1;
	
	printf("Number of Quarters : %d\n", q1);
	printf("Number of Dimes : %d\n", d1);
	printf("Number of Nickles : %d\n", n1);
	printf("Number of Pennies : %d\n", p1);
	
	printf("Total Number of coins need : %d for %d cents.\n", count, cents);
}