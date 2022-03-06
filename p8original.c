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
fraction input_fraction()
{
  fraction f;
  printf("enter the num and den\n");
  scanf("%d\t%d",&f.num,&f.den);
  return f;
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
void output(fraction f1,fraction f2,fraction sum)
{
  printf("%d/%d + %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  fraction f1=input_fraction();
  fraction f2=input_fraction();
  fraction sum=add_fraction(f1,f2);
  output(f1,f2,sum);
  return 0;
}