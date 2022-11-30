//. Write a program to print a table of 5.
#include<stdio.h>
int main()
{         
          printf("Table of 5\n");
          int i,sum=5;
          for(i=1;i<=10;++i){
                    printf("%d*%d=%d\n",sum,i,sum*i);
          }
          return 0;

}