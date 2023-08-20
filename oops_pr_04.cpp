#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
    string name;
    int employeeID;
    int pay_scale;
    string password;
public:
    Employee(){
        string n,pswd;
        int empID, ps;
        cout<<"Enter your employee ID : ";
        cin>>employeeID;
        cout<<"Enter your name please : ";
        cin>>name;
        cout<<"Enter a password : ";
        cin>>password;
        cout<<"Enter your pay Scale : ";
        cin>>pay_scale;
    }
    void display(){
        string pswd;
        int ID;
        cout<<"Enter your employee ID : ";
        cin>>ID;
        cout<<"Enter your password : ";
        cin>>pswd;
        if(pswd == password && ID == employeeID){
            cout<<"Employee ID : "<<employeeID<<endl;
            cout<<"Employee name : "<<name<<endl;
            cout<<"Pay_scale : "<<pay_scale<<endl;
        }
        else{
            cout<<"ID or password doesn't match Try Again:( ";
        }
    }
};
int main(){

}