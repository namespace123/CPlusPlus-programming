/*#include<iostream>
using namespace std;
int swap(int &i,int &j)
{
	int t;
	t=i;
	i=j;
	j=t;
}
int main()
{
	int i,j;
	cin>>i>>j;
	swap(i,j);
	cout<<i<<" "<<j<<endl;
	return 0;
} */
#include<iostream>
using namespace std;
int swap(int i,int j)
{
	int t;
	t=i;
	i=j;
	j=t;
}
int main()
{
	int i,j;
	cin>>i>>j;
	swap(i,j);
	cout<<i<<" "<<j<<endl;
	return 0;
} 
