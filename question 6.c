#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,even=2;
     printf("enter a num:");
     scanf("%d",&num);
       for(i=1;i<=num;i++){
        printf("%d\n",even);
          even=even+2;
       }
 return 0;
}
