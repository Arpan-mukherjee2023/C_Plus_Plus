//series sum 9 + 99 + 999 + 9999 + ....
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int noOfTerms;
    cout<<"Enter the number of terms: ";
    cin>>noOfTerms;
    int sum = 0;
    cout<<"The terms are : ";
    for(int i = 1; i <= noOfTerms; i++){
        cout<<pow(10,i)-1<<" ";
        sum += (pow(10,i)-1);
    }
    cout<<"\nThe sum is "<<sum<<endl;
    return 0;
}