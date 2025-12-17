#include <iostream>
using namespace std;

void input(int a[7][4]) {
    for(int i=0;i<7;i++)
        for(int j=0;j<4;j++)
            cin >> a[i][j];
}

void analyze(int a[7][4]) {
    int max=a[0][0], min=a[0][0];
    for(int i=0;i<7;i++) {
        int sum=0;
        for(int j=0;j<4;j++) {
            if(a[i][j]>max) max=a[i][j];
            if(a[i][j]<min) min=a[i][j];
            sum+=a[i][j];
        }
        cout<<"Average Day "<<i+1<<": "<<sum/4.0<<endl;
    }
    cout<<"Highest: "<<max<<"\nLowest: "<<min<<endl;
}

int main(){
    int temp[7][4];
    input(temp);
    analyze(temp);
}
