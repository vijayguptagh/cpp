#include<iostream>
using namespace std;
//program to implement operation on complex number
class complex{
    public:
    int x,y;
    complex(int a,int b){
        x=a;
        y=b;
    }
    //copy const-when passing object as argument 
    complex(complex &c){
        //When we instead of &c use only c further new cons is called for this arg bcz it is
        // also creating another object thus leading in error so use &
        x=c.x;
        y=c.y;
    }
    //defining cons with no arg mandatory bcz here we defined 1 const
    complex(){
        x=0;
        y=+0;//+0 likhane ka koi fayada nhi h
    }
    complex add(complex c){
        //calling object is global(a) and arg object is local(c.a)
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;      
    }
    complex operator-(complex &c){
        //calling object is global(a) and arg object is local(c.a)
        complex temp;
        temp.x=x-c.x;
        temp.y=y-c.y; 
         return temp;    
    }

    void showcomplex(){
        cout<<"Complex number is "<<x<<+y<<"i"<<endl; //+y used to get + or - value
    }
    //destructor-called automatically when object is about to destoyed
    ~complex(){ cout<<"Object deleted successfuly "<<endl; }
};
int main(){
    system("cls");
    complex c1,c2(2,-8);
    complex c3(3,7);
    complex c4(c2);
    complex c5=c2.add(c3);
    complex c6=c2-c3; //is equal to c6=c2.operator-(c3)
    c1.showcomplex();
    c2.showcomplex();
    c3.showcomplex();
    c4.showcomplex();
    c5.showcomplex();
    c6.showcomplex();

}
