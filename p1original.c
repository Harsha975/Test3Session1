#include<stdio.h>
void input(int *num1 ,int *den1,int *num2,int *den2)
{
  printf("enter the numbers \n");
  scanf("%d\t%d\n%d\t%d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int i;
  *num3=(num1*den2+num2*den1);
  *den3=(den1*den2);
  for( i=2;i<*num3&&*num3;i++)
    {
      if (den1 == den2 )
        break;
      else if((*num3 % i)==0 && (*den3 % i) ==0)
        { 
        *num3=*num3/i;
        *den3=*den3/i;
        break;
        }
    }
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,num2,den1,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}
