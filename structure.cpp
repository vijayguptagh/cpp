#include<iostream>
#include<string.h>
using namespace std;
// default type of  member in struct-public in class-private
struct student{
    int id;
    char name[20];
    float score;
};
int main(){
    //intialising structure variable s1 at time of creation/declaration
    student s1={120,"Ramesh",83.6};
    cout<<"details of s1 = "<<s1.id<<'\t'<<s1.name<<'\t'<<s1.score<<endl;
    //intialising structure var after creation
    student s2,s3;
    //s2={111,"Kane",84.9} you can't intialise as idw if once created struc var 
    s2.id=111;
    //s2.name[20]="Johnson"; //to insert  string value add header file string.h
    strcpy(s2.name,"Kylian");
    s2.score=72.0;
    //to copy whole var to aidther var
    s2=s3;
    cout<<"details of s2 = "<<s2.id<<'\t'<<s2.name<<'\t'<<s2.score<<endl;
    cout<<"details of s3 = "<<s3.id<<'\t'<<s3.name<<'\t'<<s3.score<<endl;
}
