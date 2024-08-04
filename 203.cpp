#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int &ref=a;
    //to select multiple lines at once use alt+shift and click lines
    //accessing value aof a by ref 
    cout<<"value of a = "<<ref<<"\n";
    ref=20; //updating value of ref var ==>updating a-updating value of var refered by ref var
    cout<<"value of a = "<<ref;
    
    


}