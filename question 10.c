#include<stdio.h>
#include<conio.h>
int main()
{
  int i,table;
    printf("enter table number:");
    scanf("%d",&table);
      for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",table,i,table*i);
      }
return 0;
}
