#include<stdio.h>//x+a%3*(int)(x+y)%2/4
int main(){
int a;
double x,y,n;
while(scanf("%d %lf %lf",&a,&x,&y)!=EOF){
n=x+a%3*(int)(x+y)%2/4;
printf("%f\n",n);
}
return 0;
} 

