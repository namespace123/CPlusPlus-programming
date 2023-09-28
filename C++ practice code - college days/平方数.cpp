int getPower(int x,int y)
{
	int val=1;
	for(;y>0;y--)
	    val=val*x;
	return val; 
}
double getPower(double x,int y)
{
    double val=1.00000000;
	for(;y>0;y--)
	    val=val*x;
	return val; 
}
int main()
{
	int a,m;
	double b;
	cin>>a>>b>>m;
	cout<<getPower(a,m)<<endl;
	cout<<getPower(b,m)<<endl;
	return 0;
}
