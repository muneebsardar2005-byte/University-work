#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float Subject1,Subject2,Subject3,Subject4,Subject5;
    float Total,Percentage;
    char Grade;
    cout<<"Enter The Marks:"<<endl;
    cout<<"Subject1:";
    cin>>Subject1;
     cout<<"Subject2:";
    cin>>Subject2;
     cout<<"Subject3:";
    cin>>Subject3;
     cout<<"Subject4:";
    cin>>Subject4;
     cout<<"Subject5:";
    cin>>Subject5;
    Total=Subject1+Subject2+Subject3+Subject4+Subject5;
    Percentage=Total/5;
    if (Percentage >= 90)
        Grade = 'A';
    else if (Percentage >= 80)
        Grade = 'B';
    else if (Percentage >= 70)
        Grade = 'C';
    else if (Percentage >= 60)
        Grade = 'D';
    else if (Percentage >= 50)
        Grade = 'E';
    else
        Grade = 'F';
        cout<<"----------------RESULT CARD--------------"<< endl;
        cout<<setw(20)<<left<<"Subject1:"<<setw(10)<<right<<Subject1<< endl;
        cout<<setw(20)<<left<<"Subject2:"<<setw(10)<<right<<Subject2<< endl;
        cout<<setw(20)<<left<<"Subject3:"<<setw(10)<<right<<Subject3<< endl;
        cout<<setw(20)<<left<<"Subject4:"<<setw(10)<<right<<Subject4<< endl;
        cout<<setw(20)<<left<<"Subject5:"<<setw(10)<<right<<Subject5<< endl;
        cout<<"----------------------------------------"<< endl;
        cout << setw(20) << left << "Total :" << setw(5) << right << Total << endl;
    cout << setw(20) << left << "Percentage:" << setw(5) << right << Percentage << "%" << endl;
    cout << setw(20) << left << "Grade:" << setw(5) << right << Grade << endl;
    cout << setw(20) << left << "Result:" << setw(5)
         << ((Percentage >= 50) ? "Pass" : "Fail") << endl;

    cout << "===================================" << endl;

    return 0;
}
