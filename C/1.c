//2019.1.5 21:53
//zyb
/*
编写三个函数，分别完成制定一维数组的数据输入，求一维数组的平均值，最大与最小值
*/
#include <stdio.h>
#define N 4
void input(float *,int);
//void input(float [],int);
float average(float *,int);
void maxmin(float *,int,float *,float *);

void main(){
	float data[N];
	float aver,max,min;
	float *num=data;
	input(data,N);
	aver = average(data,N);
	maxmin(num,N,&max,&min);

	printf("aver=%f\n",aver);
	printf("max=%f,min=%f\n",max,min);
}

void input(float *pdata,int n){
	int i;
	printf("Please input array data:\n");
	for(i=0;i<n;i++)
		scanf("%f",pdata+i);//这里是使用指针开始递增
}

float average(float *pdata,int n){
	int i;
	float avg=0.0;
	for(i=0;i<n;i++){
		avg+=pdata[i];
	}
	avg=avg/n;
	printf("avg===%f\n",avg);
	return avg;
}

void maxmin(float *pdata,int n,float *pmax,float *pmin){
	int i;
	*pmax=*pmin=pdata[0];
	for(i=1;i<n;i++){
		if(*pmax<pdata[i])
			*pmax=pdata[i];
		if(*pmin>pdata[i])
			*pmin=pdata[i];
	}
}
