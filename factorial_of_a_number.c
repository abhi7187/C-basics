//factorial of a number.

#include<stdio.h>
int main(){
	int i,s,n;
	printf("ENTER THE NUMBER : ");  // Input from user
	scanf("%d",&n);
	s=1;
	for (i=1;i<=n;i++){
		s=s*i;              // Calculation
	}
	printf("FACTORIAL :%d ",s);
	
}
