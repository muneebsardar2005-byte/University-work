#include <iostream>
using namespace std;

int seat[10][10]={0};

void display(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            cout<<seat[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int r,c;
    seat[2][3]=1;   // reserve
    seat[2][3]=0;   // cancel
    display();
}
