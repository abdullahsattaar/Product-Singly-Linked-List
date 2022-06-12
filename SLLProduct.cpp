#include<iostream>
#include<string.h>
using namespace std;


//PRODUCT
int Pro(int n, int times)
{
	if(times>1)
		return n+Pro(n,times-1);
	else if(times==1)
		return n;
}
int product(int a, int b)
{
	if (a<0&&b<0)
		return Pro(a*(-1), b*(-1));
	if (a==0||b==0)
		return 0;
	if (a<0&&b>0)
		return -1*Pro(a*(-1),b);
	if(a>0&&b<0)
		return -1*Pro(a,b*(-1));
	if(a>0&&b>0)
		return Pro(a,b);
	else return 0;
}

int main()
{
	
	//PRODUCT
	cout<<"//PRODUCT"<<endl<<endl;
	
	int x=15,y=-9;
	int z= product(x,y);
	cout<<"Product of "<<x<<" & "<<y<<" is: "<<z<<endl<<endl;

	system("pause");
	return 0;
}