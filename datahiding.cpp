#include<iostream>
using namespace std;
class cube{ //java class members are by default default type ==> accessible for intra package
	private :  int side; //if private not written then also ok bcz class mem are by def private
	public :  //necessary to write bcz if not written public then by default private
    void setside(int value){  side = value; }
    int getside(){ return side; }
    int getarea(){ return side*side; }
    //if we dont make side as privat then we can directly access side var in main and easily 
    //area but here can't directly access so called data hiding
};
int main(){
    system("cls"); //to clear screen 
    int value;
	cube c;
    //taking value of side by user
    cout<<"Enter side value of cube = ";
    cin>>value;
    c.setside(value);
    cout<<"side value = "<<c.getside()<<endl;
    cout<<"area of cube = "<<c.getarea();
    //return 0 not written then also code runs 
}

