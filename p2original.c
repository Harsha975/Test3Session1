#include<stdio.h>
typedef struct _fraction
{
int num,den;
}fra;
fra input_fraction()
{
  fra a;
  printf("enter the num and den\n");
  scanf("%d\t%d",&a.num,&a.den);
  return a;
}
fra largest_fraction(fra f1,fra f2,fra f3)
{
  /*float a,b,c;
  a=(float)f1.num/f1.den;
  b=(float)f2.num/f2.den;
  c=(float)f3.num/f3.den;
  if(a>b && a>c)
    return f1;
  else if(b>c)
    return f2;
  else 
    return f3;*/
  if((float)f1.num/f1.den > (float)f2.num/f2.den && (float)f1.num/f1.den > (float)f3.num/f3.den)
    return f1;
  else if((float)f2.num/f2.den > (float)f3.num/f3.den)
    return f2;
  else 
    return f3;
}
void output(fra f1,fra f2,fra f3,fra lar)
{
  printf("the largest of three fraction  is %d/%d\n",lar.num,lar.den);
}
int main()
{
  fra f1=input_fraction();
  fra f2=input_fraction();
  fra f3=input_fraction();
  fra lar=largest_fraction(f1,f2,f3);
  output(f1,f2,f3,lar);
  return 0;
}