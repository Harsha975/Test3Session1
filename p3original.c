#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("enter the values of n and r\n");
  scanf("%d%d",n,r);
}
float fact(int a)
{
  int sum=1;
  for(int i=1;i<=a;i++)
    sum=sum*i;
  //printf("%d",sum);
  return sum;
}
int ncr(int n,int r)
{
  int ncr=fact(n)/(fact(n-r)*fact(r));
  return ncr;
}
void output(int n,int r,int result)
{
  printf("the ncr with %d and %d is %d",n,r,result);
}
int main()
{
int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}