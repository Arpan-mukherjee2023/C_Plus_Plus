//Find perfect numbers between some range
/* Perfect numbers are those numbers whose divisors sum is equal to them*/
#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout<<"Enter the range : ";
    cin>>start>>end;
    for(int i = start; i <= end; i++){
        int sum = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            cout<<i<<endl;
        }
    }
    return 0;
}