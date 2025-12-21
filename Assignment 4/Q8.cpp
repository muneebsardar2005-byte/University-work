#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v={10,20,30,40,50};
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    for(int x:v) cout<<x<<" ";

    int n,x;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    cout<<"Max: "<<*max_element(a.begin(),a.end());
    cout<<" Min: "<<*min_element(a.begin(),a.end());

    reverse(a.begin(),a.end());

    int target,count=0;
    cin>>target;
    for(int i:a) if(i==target) count++;
    cout<<"Count: "<<count;
}
