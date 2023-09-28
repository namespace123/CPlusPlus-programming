#include<stdio.h>
int main()
{
     int a,su[100],j;
     while(scanf("%d",&a)!=EOF)
	 {
          j=0;
          for(int i=2;i<=a;)
		  {
              if(a%i==0&&i!=a)
			  {
                  su[j]=i;
                  a=a/i;
                  j++;
              }
              else if(a%i==0&&i==a)
			  {
                  su[j]=i;
                  a=a/i;
                  j++;
              }
              else i++;
          }
             
          for(int b=0;b<j-1;b++)
	      {
              printf("%d ",su[b]);
          }
          printf("%d\n",su[j-1]);
    }  
   return 0;
}       
