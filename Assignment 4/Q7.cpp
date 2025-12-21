#include <iostream>
using namespace std;

int main(){
    int a[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>a[i][j];

    for(int i=0;i<4;i++){
        if(i%2==0)
            for(int j=0;j<4;j++) cout<<a[i][j]<<" ";
        else
            for(int j=3;j>=0;j--) cout<<a[i][j]<<" ";
    }
}
