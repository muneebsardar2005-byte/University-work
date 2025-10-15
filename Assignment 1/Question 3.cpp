#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;
cout<<"Enter the First Number:"<<endl;
cin>>num1;
cout <<"Enter the Second Number:"<<endl;
cin>>num2;
cout <<"Enter the third Number:"<<endl;
cin>>num3;
if (num1 == num2 && num2 == num3) {
cout << "All numbers are equal." << endl;
cout << "Largest number: " << num1 << endl;
cout << "Smallest number: " << num1 << endl;
}
else {
        int largest;
        if (num1 >= num2 && num1 >= num3) {
            largest = num1;
        }
        else if (num2 >= num1 && num2 >= num3) {
            largest = num2;
        }
        else {
            largest = num3;
        }
        int smallest;
        if (num1 <= num2 && num1 <= num3) {
            smallest = num1;
        }
        else if (num2 <= num1 && num2 <= num3) {
            smallest = num2;
        }
        else {
            smallest = num3;
        }
        cout << "Numbers are not all equal." << endl;
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    }
    return 0;
}
