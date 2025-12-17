#include <iostream>
using namespace std;

int main(){
    int a[4][4], b[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>a[i][j];

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            b[3-j][i]=a[i][j];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
