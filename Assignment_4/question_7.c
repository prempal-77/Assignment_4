//. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
          printf("First 10 even natural numbers:\n");
          int i=20;
          while(i>0){
                    if(i%2==0)
                    printf("%d\n",i);
                    i--;
          }
          return 0;

}