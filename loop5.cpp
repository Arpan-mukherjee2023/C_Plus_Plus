//series sum 1
#include<iostream>
#include<cmath>
using namespace  std;
int main(){
    int no_of_term;
    cout<<"Enter the number of terms : ";
    cin>>no_of_term;
    float sum = 0.00;
    for(int i = 1; i <= no_of_term; i++){
        sum += (1/pow(i,i));
    }
    cout<<"The sum of the series is "<<sum<<endl;
    return 0;
}