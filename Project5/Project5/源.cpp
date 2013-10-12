#include<iostream>
#include<stdlib.h>
using namespace std;
double transform(double f){
	double c;
	c=(f-32)/9.0*5.0;
	return c;
}
int add1(int n){
	int result1;
	if(n==1||n==0){
		result1=1;
	}
	else
		result1=add1(n-1)*n;
	return result1;
}
double recursion(int x,int y){
	double result;
	if(y==0)
		result=0;
	else if(y==1)
		result=x;
	else if(y<0){
		if(y==-1)
			result=1.0/x;
		else
			result=1.0/x*recursion(x,y+1);
	}
	else
		result=recursion(x,y-1)*x;
    return result;
}
int main(){
	int f,m,n,x,y;
	cout<<"���뻪�϶�"<<endl;
	cin>>f;
	cout<<"����Ҫ����������������mΪ������"<<endl;
	cout<<"m:";
	cin>>m;
	cout<<"n:";
	cin>>n;
	cout<<"����Ҫ�����x��y����"<<endl;
	cout<<"x:";
	cin>>x;
	cout<<"y:";
	cin>>y;
	cout<<"���϶�ת��Ϊ���϶�"<<transform(f)<<endl;
	if(m<n||m<=0||n<0)
		cout<<"input error"<<endl;
	else
		cout<<"�������"<<add1(m)/add1(n)/add1(m-n)<<endl;
	cout<<"x��y����"<<recursion(x,y)<<endl;
	system("pause");
}
