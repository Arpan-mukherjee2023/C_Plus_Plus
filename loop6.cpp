#include<iostream>
using namespace std;
int main(){
    int noOfTerms;
    cout<<"Enter the number of terms : ";
    cin>>noOfTerms;
    float Sum  = 0.0;
    for(int i = 1; i <= noOfTerms; i++){
        int sum = 0;
        for(int j = 1; j <= i; j++){
            sum += j;
        }
        Sum += sum;
    }
    cout<<"The total sum is "<<Sum<<endl;
    return 0;
}