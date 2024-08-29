#include<iostream>
using namespace std;

inline int sum(int a,int b)
{
	return(a+b);
}
int main(){
	int a,b;
	cout<<"enter the 1st number=";
	cin>>a;
	cout<<"enter the 2nd number=";
	cin>>b;
	cout<<"sum of two numbers ["<<a<<"+"<<b<<"] = "<<sum(a,b)<<"\n";
	return 0;
}
