#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[3][3]={1,4,2,3,5,6,9,7,8};
    int x[9],k=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            x[k++]=a[i][j];

    sort(x,x+9);
    k=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<x[k++]<<" ";
        cout<<endl;
    }
}
