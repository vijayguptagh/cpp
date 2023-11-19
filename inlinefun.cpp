#include<iostream>
#include<stdio.h>
using namespace std;  
inline int product(int a,int b){ return a*b;} 
int main(){ 
   int a,b;
   cout<<"Enter no to find product = "<<'\n'<<"Enter 0 to exit from program";  
   do{
      cout<<"Value of a = ";
      cin>>a;
      cout<<endl<<"Value of b = ";
      cin>>b;
      cout<<endl<<"Product value = "<<product(a,b);
   }while(a!=0);
}
