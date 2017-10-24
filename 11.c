#include<stdio.h>
void show();
int main(){
	show();
	return 0;
}
void show(){
	float a;
	int b;
	float c;
	printf("输入一个实数");
	scanf("%f",&a) ;
	b=(int)a;
	c=a-b;
	printf("实数的小数部分是%f,这整数部分是 %d",c,b);
	
		
}
