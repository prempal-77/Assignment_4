// Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{         
          printf("First 10 odd numbers:\n");
          for(int i=0;i<=20;i++){
                    if(i%2!=0)
                    printf("%d\n",i);
          }
          return 0;
}