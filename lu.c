#include<stdio.h>
int main()
{
int i,j=1,n,ch=1;
char str[30];
printf("\nEnter the statement in the loop : ");
scanf("%[^\n]",str);
printf("\nEnter the no : iteration : ");
scanf("%d",&n);
while(ch==1)
{
printf("Continue ? : \n\t1.Yes \n\t2.No\nChoice : ");
scanf("%d",&ch);
j++;
}
printf("\nThe unrolled loop : ");
printf("\n\tfor(i=%d;i>0;i-%d)",n,j);
for(i=0;i<j;i++)
{
printf("\n\t\t %s",str);
}
printf("\n");
return(0);
}