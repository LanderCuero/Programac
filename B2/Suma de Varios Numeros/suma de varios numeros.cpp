#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout <<"inserte cuantos numeros va a sumar\n";
	cin>>a;
	d=0;
	b=0;
	do{
		cout<<"inserte el valor del numero\n";
		cin>>c;
		d=c+d;
		b=b+1;
	} while(b<a);
	cout<<"la suma es "<<d;
}
