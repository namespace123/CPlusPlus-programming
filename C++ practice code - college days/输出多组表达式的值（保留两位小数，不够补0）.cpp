#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            int a,b;
            char ch;
            cin>>ch>>a>>b;
            switch(ch)
            {
            case '+':cout<<a+b<<endl;    break;
            case '-':cout<<a-b<<endl;    break;
            case '*':cout<<a*b<<endl;    break;
            case '/':if(a%b==0) cout<<a/b<<endl;
                else
                {
                    double x=double(a);
                    double y=double(b);
                    cout<<setiosflags(ios::fixed);
                    cout.precision(2);     
                    cout<<x/y<<endl;
                }
                break;
            }
        }
    }return 0;
}
/*
4
	+ 1 2
	- 1 2
	* 1 2
	/ 1 2
4
	+ 2 3
	- 6 20
	* 5 8
	/ 40 5
              
ÑùÀýÊä³ö

	3
	-1
	2
	0.50
	
	5
	-14
	40
	8
*/
