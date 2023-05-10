#include <iostream>
using namespace std;
int main()
{
	float n1,d1,n2,d2,n3,d3,n4,n5;
	cout<<"introduzca los valores del primer numero\n";
	cin>>n1;
	cout<<"\n";
	cin>>d1;
	cout<<"introduzca los valores del segundo numero\n";
	cin>>n2;
	cout<<"\n";
	cin>>d2;
	d3=d1*d2;
	n3=d3/d1*n1;
	n4=d3/d2*n2;
	n5=n3+n4;
	cout<<"La suma de las fracciones es: "<<n5<<"/"<<d3;
	return (0);
}
