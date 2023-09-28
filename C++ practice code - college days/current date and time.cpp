#include<time.h>
#include<stdio.h>

int main()
{
	time_t timep;
	time(&timep);
	
	printf("本地时间：     %s",asctime(localtime(&timep)));
	printf("UTC世界标准时：%s",asctime(gmtime(&timep)));
	
	return 0;
}
/*
#include <stdio.h>      
#include <time.h>       
 
int main ()
{
    time_t rawtime;
    struct tm * timeinfo;
 
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "The current date/time is: %s", asctime (timeinfo) );
 
    return 0;
}


#include<time.h>
#include<stdio.h>

int main()
{
	time_t timep;
	time(&timep);
	
	printf("%s",ctime(&timep));

	return 0;
}

*/
