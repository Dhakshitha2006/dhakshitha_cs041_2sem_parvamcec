#include<iostream>
using namespace std;
int main(){
    int age =0;
    float marks =0;
    char gender;
    string name ="";
    cout<<"Enter a student age:"<<endl;
    cin>>age;
    cout<<"Enter the marks of the student:"<<endl;
    cin>>marks;
    cout<<"Enter a student gender:"<<endl;
    cin>>gender;
    cout<<"Enter a student name:"<<endl;
    //cin>>name; 
    getline(cin,name);
    cout<<"student details:"<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"gender:"<<gender<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"marks:"<<marks<<endl;
    
}