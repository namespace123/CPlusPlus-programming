#include <stdio.h>
#include<math.h>
int main()
{
	double a,b,c,delta,x1,x2,p,q;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0)
		printf("����һԪ���η���!\n");
	else
	{
		delta=b*b-4*a*c;
		if(delta==0)
		{
			printf("������������ȵ�ʵ������\n");
			x1=-b/(2*a);
			x2=x1;
			printf("%.2lf  ,   %.2lf\n",x1,x2);
		}
		else if(delta>0)
		{
			printf("��������������ȵ�ʵ������\n");
			x1=-b/(2*a)+sqrt(delta)/(2*a);
			x2=-b/(2*a)-sqrt(delta)/(2*a);
			printf("%.2lf  ,   %.2lf\n",x1,x2);
		}
		else
		{
			printf("��������������ȵĸ�������\n");
			p=-b/(2*a);
			q=sqrt(-delta)/(2*a);
			printf("%.2lf + %.2lfi\n",p,q);
			printf("%.2lf - %.2lfi\n",p,q);
		}
	}
	return 0;
} 

