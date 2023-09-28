#include<iostream>
#include<cmath>
using namespace std;
int re(int n)
{
    if(n%2==0) return n/2;
    else return (3*n+1)/2; 
}
int main()
{
    int n;
    while(cin>>n)
    {
        int j=0;
        while(n!=1)
        {
            n=re(n);
            j++;
        }
        cout<<j<<endl;   
    }
    return 0;
}             
