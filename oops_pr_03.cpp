//create a class bank which can deposit, withdraw and show info about customer
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
    string accountNumber;
    string accountHolderName;
    double balance;
public:
    //Constructor
    BankAccount(string acNum,string acname,double initial){
        accountNumber = acNum;
        accountHolderName = acname;
        balance = initial;
    }
    void deposit(double amt){
        balance += amt;
    }

    void withdraw(double amt){
        if(amt <= balance){
            balance -= amt;
        } 
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }

    void displayInfo(){
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Holder Name : "<<accountHolderName<<endl;
        cout<<"Available balance : "<<balance<<endl;
    }
};

int main(){
    
}