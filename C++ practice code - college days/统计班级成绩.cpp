#include<stdio.h>
#define N 30

struct Stu
{
	char name[30];
	int num;
	double score[3];
	double aver;
};

int main()
{
	Stu stu[N],temp;
	double ind[3]={0};//分别是三门的单科平均分 
	int i,j;
	for(i=0;i<N;i++)
	{
		scanf("%s %d %lf %lf %lf",stu[i].name,&stu[i].num,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
		for(j=0;j<3;j++)
		    ind[j]+=stu[i].score[j]; 
	}
	for(j=0;j<3;j++)
		ind[j]/=N; 
	for(i=0;i<N-1;i++)
	   for(j=0;j<N-i-1;j++)
	   	   if(stu[j].aver<stu[j+1].aver)
	   	   {
	   		  temp=stu[j+1];
	   		  stu[j+1]=stu[j];
	   		  stu[j]=temp;
	   	   }
	printf("***********************************************************\n");
	for(i=0;i<N;i++)
	{
		printf("%s %d %lf %lf %lf %lf\n",stu[i].name,stu[i].num,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].aver);
	}
	printf("***********************************************************\n");
    printf("第一门科目班级平均分：%lf\n",ind[0]);
	printf("第二门科目班级平均分：%lf\n",ind[1]);
	printf("第三门科目班级平均分：%lf\n",ind[2]);
	printf("***********************************************************\n");
	return 0;
}


