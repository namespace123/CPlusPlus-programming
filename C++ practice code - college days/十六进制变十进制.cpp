
#include<iostream>
#include<string>
using namespace std;
int main()
{
string s;
while(cin>>s)
{
int leth=s.length();
long long sum=0;
for(int i=0;i<leth;i++)
{
if(s[i]>='A'&&s[i]<='F')
{
sum=sum*16+s[i]-'A'+10;
// cout<<sum<<endl;
}
else
{
sum=sum*16+s[i]-'0';
//cout<<sum<<endl;
}
}
cout<<sum<<endl;
}
return 0;
}
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
double sum=0,x;
char a[8];
int len,i=0;
gets(a);
len=strlen(a);
while(len)
{
if(a[len-1]>='A'&&a[len-1]<='F')
x=(a[len-1]-'7')*pow(16,i++);
else
x=(a[len-1]-'0')*pow(16,i++);
sum+=x;
len--;
}*/
