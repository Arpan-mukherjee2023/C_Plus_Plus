//Find the last prime number before entered number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    while(num >= 0){
        int flag = 1;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                flag = 0;
            }
        }
        if(flag == 1){
            cout<<num<<endl;
            break;
        }
        num--;
    }
    return 0;
}