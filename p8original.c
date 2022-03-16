#include<stdio.h>
typedef struct _fraction
{
  int num ,den;
}fraction;
int find_gcd(int a,int b)
{
  int c;
  while(b!=0)
    {
      c=b;
      b=(a%b);
      a=c;
    }
  return c;
  
}
int input_n()
{
  int a;
  printf("enter the no of fraction\n");
  scanf("%d",&a);
  return a;
}
fraction input_fraction()
{
  fraction f;
  printf("enter the num and den\n");
  scanf("%d\t%d",&f.num,&f.den);
  return f;
}
void input_in_fraction(int n,fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}

fraction add_fraction(fraction f1,fraction f2)
{
  fraction sum;
  sum.num=f1.num*f2.den+f1.den*f2.num;
  sum.den=f1.den*f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
fraction add_n_fraction(int n,fraction f[n])
{
  fraction sum;
  sum=f[0];
  for(int i=1;i<n;i++)
    {
      sum=add_fraction(sum,f[i]);
    }
  return sum;
}
void output(int n, fraction f[n], fraction sum)
{
  for(int i=0;i<n-1;i++)
    {
      printf("%d/%d\t+\t",f[i].num,f[i].den);
    }
  printf("  %d/%d  is %d/%d \n",f[n-1].num,f[n-1].den,sum.num,sum.den);
}
int main()
{
  int n=input_n();
  fraction f[n];
  input_in_fraction(n,f);
  fraction sum=add_n_fraction(n,f);
  output(n,f,sum);
  return 0;
}