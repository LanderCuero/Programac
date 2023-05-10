#include<iostream>
using namespace std;
int main()
{
        int a,b,i,l;
        cout<<"cuantos numeros sumara?";
        cin>>l;
        do{
                cin>>a;
                b=a+b;
                i=i+1;
        }while(i<l);
        cout<<"La suma total de los numeros es"<<b;
}
