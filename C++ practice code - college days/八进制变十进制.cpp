#include<stdio.h>
#include<string.h>
int differ(int);
int main(){
int n,t,i,j,x;
while(scanf("%d",&n)!=EOF){
if(n==0)break;
i=0;
j=0;
while(n!=0){
t=n%10;
x=differ(i);
j=t*x+j;
n=n/10;
i++;
}
printf("%d\n",j);

}
return 0;
} 
int differ(int i){
int e=1;
 while(i!=0){
e=e*8;
i--;
}
return e;
} 
