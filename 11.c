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
	printf("����һ��ʵ��");
	scanf("%f",&a) ;
	b=(int)a;
	c=a-b;
	printf("ʵ����С��������%f,������������ %d",c,b);
	
		
}
