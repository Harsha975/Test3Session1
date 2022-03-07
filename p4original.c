#include<stdio.h>
int input_degree()
{
  int a;
  printf("enter the degree of the polynomial function\n");
  scanf("%d",&a);
  return a;
}
float input_x()
{
  int b;
  printf("enter the value of x @ \n");
  scanf("%d",&b);
  return b;
}
void input_coefficients(int n,float a[n])
{
  printf("enter the value of coefficient of x\n");
  for(int i=0;i<=n;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  float st=a[0];
  for(int i=1;i<=n;i++)
    st=st*x+a[i];
  //printf("%f\n",st);
  return st;
}
void output(int n, float a[n], float x, float result)
{
  for(int i=1;i<n;i++)
    printf("%f*x^%d  +  ",a[i],i);
  printf("  %f*x^%d + %f at x = %f is %f",a[n],n,a[0],x,result);
}
int main()
{
  int n=input_degree();
  float a[n];
  float x=input_x();
  input_coefficients(n,a);
  float result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;
}