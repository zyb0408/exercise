//swap函数
#include <stdio.h>
//正确的写法
void swap(int* a,int* b){
	int temp =*a;
	*a=*b;
	*b=temp;
}
//错误的写法1
void swap1(int* a,int* b){
	int* temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
/*
上面的主要问题是在使用temp这个指针的时候，可能会指向系统工作空间，破坏已经使用的内存
修改方案是是int x；
int* temp = &x;
将temp的地址固定下来，便面发生错误即可
*/


//错误写法2
void swap2(int* a,int* b){
	int* temp = a;
	a = b;
	b = temp;
}
/*
思想是直接交换参数的地址，认为地址交换了元素就交换了。
错误的点在于，swap2函数接收的是地址的值，本质还是值传递，传入的那个地址是一个数字，是原来的地址的副本。
所以还是在函数swap内部进行的数字的交换，swap结束后，地址还是没有发生变化。
*/
int main(){
	int a=1,b=2;
	int *p1=&a, *p2=&b;
	swap(p1,p2);
	printf("a=%d,b=%d\n",*p1,*p2);
	return 0;
}

