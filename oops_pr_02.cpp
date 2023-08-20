#include<iostream>
using namespace std;
class Complex{
private:
    int real, imag;
public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    void print(){
        cout<<"("<<real<<" + "<<imag<<"i"<<")"<<endl;
    }
    friend Complex operator+(Complex obj1,Complex obj2);
};
Complex operator+(Complex obj1, Complex obj2){
    return Complex(obj1.real+obj2.real, obj1.imag+obj2.imag);
}
int main(){
    Complex c1(2,9), c2(7,-8);
    Complex c3;
    c3 = c2 + c1;
    c3.print();
    return 0;
}