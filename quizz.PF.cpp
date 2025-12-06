#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter number of cake orders:";
    cin>>N;
    int price[100];
    int total=0;
    int customCount=0;
    for(int i=0;i<N;i++){
        cout<<"enter price of cake"<<i+1<<":";
        cin>>price[i];
        total+=price[i];
        if(price[i]>1200){
            cout<<"Custom Cake"<<endl;
            customCount++;
        }else {
            cout<<"Regular Cake"<<endl;
        }
    }
    cout<<"\nTotal Earnings:"<<total<<endl;
    cout<<"Total Custom Cakes:"<<customCount<<endl;
    return 0;
}
        
        
        
    
    
