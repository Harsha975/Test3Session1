#include<stdio.h>
int input_size()
{
  int yswn;
  printf("enter the size of array\n");
  scanf("%d",&yswn);
  return yswn;
}
void input_array(int n,int a[n])
{
  printf("enter the elements of array\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int find_largest(int n,int a[n])
{
  int index;
  int largest=0;
  for(int i=0;i<n;i++)
    {
      if(largest<a[i])
        largest=a[i];
        index=i;
    }
  return index;
}
void output(int n,int a[n],int largest)
{
  printf("the index of the largest number in the array is %d",largest);
}
int main()
{
  int n;
  n=input_size();
  int a[n];
  input_array(n,a);
  int largest=find_largest(n,a);
  output(n,a,largest);
  return 0;
}