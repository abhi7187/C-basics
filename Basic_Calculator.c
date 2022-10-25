#include<stdio.h>
int main()
{
  int num1,num2;
  printf("\nEnter to numbers: ");
  scanf("%d %d",&num1,&num2);
  printf("\nTwo numbers are: %d %d",num1,num2);
  printf("\nSum = %d",num1+num2);
  if(num1>num2)
  {
    printf("\nDifference = %d",num1-num2);
    printf("\nQuotient = %d",num1/num2);
    printf("\nRemainder = %d",num1%num2);
  }
  else
  {
    printf("\nDifference = %d",num2-num1);
    printf("\nQuotient = %d",num2/num1);
    printf("\nRemainder = %d",num2%num1);
  }
  printf("\nProduct = %d",num1*num2);
  return 0;
}
