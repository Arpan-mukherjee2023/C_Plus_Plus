//list all nonprime numbers from 1 to upperbound
#include<iostream>
using namespace std;
int main(){
    int end;
    cout<<"Enter the upper limit : ";
    cin>>end;
    for(int i = 1; i <= end; i++){
        int flag = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 1;
            }
        }
        if(flag == 1){
            cout<<i<<endl;
        }
    }
    return 0;
}