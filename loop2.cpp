//Find prime numbers between some range
/*Prime numbers are those numbers which are only divisible by 1 and themselves*/
#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout<<"Enter the range : ";
    cin>>start>>end;
    for(int i = start; i <= end; i++){
        int flag = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 0;
            }
        }
        if(flag == 1){
            cout<<i<<endl;
        }
    }
    return 0;
}