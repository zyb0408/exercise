#include <stdio.h>
/*
这里的swap函数传入的参数是一个指针的引用。
int* 表示是一个指针类型的参数，&p1，表示这个指针是一个引用类型的指针。
引用时变量的别名，因此，常量不可以使用引用。
所以在main中的调用不能写成swap(&a,&b)。

*/
void swap(int* &p1,int* &p2){
	int* temp = p1;
	p1=p2;
	p2=temp;
}

int int main(int argc, char const *argv[])
{
	int a=1,b=2;
	int *p1=&a, *p2=&b;
	swap(p1,p2);
	printf("a=%d,b=%d\n", *p1,*p2);
	return 0;
}
