#include<iostream>
using namespace std;
class Item{
private:
    int price;
    int quantity;
public:
    Item(int p = 0,int q = 1){
        price = p;
        quantity = q;
    }
    int get_price(){
        return price*quantity;
    }
};

int main(){
    int choice = 1;
    int price, quan;
    int sum = 0;
    while(choice == 1){
        cout<<"Enter the Price : ";
        cin>>price;
        cout<<"Enter the quantity : ";
        cin>>quan;
        Item item(price, quan);
        sum += item.get_price();
        cout<<"Enter your choice : ";
        cin>>choice;
    }
    cout<<"Your gross amount is "<<sum<<endl;
    return 0;
}