//Find factorial of a number
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int prd = 1;
    for(int i = 1; i <= number; i++){
        prd = prd * i;
    }
    cout<<"Factorial of "<<number<<" is "<<prd<<endl;
    return 0;
}