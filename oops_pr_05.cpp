#include<iostream>
#include<cmath>
using namespace std;
struct freq_class{
    int low_limit, upper_limit, freq;
};

class FrequencyDistribution{
private:
    int n;
    int *data;
    int class_length;
    int start;
public:
    FrequencyDistribution(int num){
        n = num;
        data = new int[num];
        cout<<"Enter the datas : "<<endl;
        for(int i = 0; i < num; i++){
            cin>>data[i];
        }
        cout<<"Enter the class length : ";
        cin>>class_length;
        cout<<"Enter the starting limit :";
        cin>>start;
    }
    int maximum(){
        int max = data[0];
        for(int i = 1; i < n; i++){
            if(max < data[i]){
                max = data[i];
            }
        }
        return max;
    }
    int count(int start, int end){
        int count = 0;
        for(int i = 0; i < n; i++){
            if(data[i] >= start && data[i] <= end)
                count++;
        }
        return count;
    }
    void get_distribution(){
        int max = maximum();
        int total = int(max / class_length) + 1;
        freq_class arr[total];
        
        for(int i = 0; i < total; i++){
            arr[i].low_limit = start;
            arr[i].upper_limit = start+class_length-1;
            arr[i].freq = count(arr[i].low_limit, arr[i].upper_limit);
            start = arr[i].upper_limit+1;
        }
        float density[total];

        for(int i = 0; i < total; i++){
            cout<<arr[i].low_limit<<"-"<<arr[i].upper_limit<<"  "<<arr[i].freq<<endl;
            // cout<<" "<<(arr[i].freq/class_length)<<" "<<(arr[i].freq/n)<<endl;
        }
    }
    
};
int main(){
    FrequencyDistribution obj(40);
    obj.get_distribution();
}