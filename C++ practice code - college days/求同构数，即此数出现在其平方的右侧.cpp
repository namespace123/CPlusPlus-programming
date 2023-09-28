#include<iostream>
using namespace std;
int main ()
{
   int n,sqr;
   for(n=1;n<1000;n++)
   {
   	    if(n<10) sqr=n*n%10;
   	    else if(n<100) sqr=n*n%100;
   	    else  sqr=n*n%100;
   	    if(n==sqr) cout<<n<<"*"<<n<<"="<<n*n<<" ";
   }
   cout<<endl;
   return 0;
}