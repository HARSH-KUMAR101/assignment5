#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,odd=1;
     printf("enter a num:");
     scanf("%d",&num);
       for(i=1;i<=num;i++){
        printf("%d\n",odd);
          odd=odd+2;
       }
 return 0;
}
