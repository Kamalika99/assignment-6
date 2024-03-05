#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the range:");
    scanf("%d %d",&a,&b);
    prime(a,b);

}
void prime(int a,int b)
{
    int i,j,count;
  for(i=a;i<b;i++)
  {
    for(j=1;j<a;j++)
    {
        if(i%j==0)
        {  count++;}
    
    }
  if(count==1)
  {printf("%d\t",i);}
   count=0;
  }
}