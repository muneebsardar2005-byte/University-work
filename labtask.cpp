#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
    string product1,product2;
    int quantity1,quantity2;
    float unit1,unit2,total,total2;
    cout<<"enter the product name"<<endl;
    cin>>product1>>product2;
    cout<<"enter quantity"<<endl;
    cin>>quantity1>>quantity2;
    cout<<"Enter price"<<endl;
    cin>>unit1>>unit2;
    total=quantity1*unit1;
    total2=quantity2*unit2;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<"item"<<right<<setw(15)<<"quantity"<<right<<setw(10)<<"price"<<right<<setw(10)<<"total"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<product1<<right<<setw(15)<<quantity1<<right<<setw(10)<<unit1<<right<<setw(10)<<total<<endl;
    cout<<left<<setw(10)<<product2<<right<<setw(15)<<quantity2<<right<<setw(10)<<unit2<<right<<setw(10)<<total2<<endl;
    return 0;
}