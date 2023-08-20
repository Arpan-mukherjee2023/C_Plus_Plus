//Series sum 2
#include<iostream>
#include<cmath>
using namespace std;
int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n-1);
}
int main(){
    int n,x;
    cout<<"Enter valuw of X : ";
    cin>>x;
    cout<<"Enter number of terms : ";
    cin>>n;
    float sum = 0;
    for(int i = 1, j = 0; i <= n; i++, j += 2){
        float val = pow(x,j)/fact(j);
        if(i % 2 == 0){
            sum -=  val;
        }
        else{
            sum += val;
        }
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}