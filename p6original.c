#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the strings\n");
  scanf("%[^\n]s",a);
}
int count_words(char *string)
{
  int count =0;
  char *a=strtok(string," ");
  while(a!=NULL)
    {
      count++;
      a=strtok(NULL," ");
    }
  return count;
}
void output(char *string,int no_words)
{
  printf("the number of words in the string is = %d",no_words);
}
int main()
{
  char a[100];
  input_string(a);
  int no_words=count_words(a);
  output(a,no_words);
  return 0;
}