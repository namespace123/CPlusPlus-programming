#include<iostream>
#include<stdio.h>
using namespace std;			
int main()
{
	char line[500];
	int maxlen=0,i=0,max=0,end=0,min=500,dne=0;
	int wordflag=0;
	while((line[i++]=getchar())!='\n') line[i]='\0'; 
	    for(i=0;line[i]!='\0';i++)
	    {
	    	if(line[i]>='a'&&line[i]<='z'||line[i]>='A'&&line[i]<='Z')
	    	{
	    		if(!wordflag)
	    		    wordflag=1;
	    		maxlen++;
	    	}
	    	else
	    	{
	    		wordflag=0;
	    		if(max<maxlen)
	    		{
	    			max=maxlen;
	    			end=i;
	    		}
	    		if(min>maxlen)
	    		{
	    			min=maxlen;
	    			dne=i;
	    		}
	    		maxlen=0;
	    	}
	    }
	    for(i=end-max;i<end;i++)
	        cout<<line[i];
			cout<<endl;
	    for(i=dne-min;i<dne;i++)
	        cout<<line[i];
			cout<<endl;
	    return 0;
	}
