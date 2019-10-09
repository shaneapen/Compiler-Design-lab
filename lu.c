#include<stdio.h>
void main()
{
unsigned int n;
int x;
int ch;
printf("\nEnter no: of iterations : ");
scanf("%u",&n);

do{
  x=countbit(n);
  n=x;
  printf("\n\nLoop count : %d\n" ,x);
 printf("\nContinue ? :\n\t1.Yes \n\t2.No\n");
printf("\nEnter ur choice : ");
scanf(" %d",&ch);
}while(ch==1);
printf("\n");
}
int countbit(unsigned int n)
{
    n=n/2;
    return n;
}

