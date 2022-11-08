//write a program in C++ to check whether a year is a leap year or not. 


#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter the Year: ";
    cin>>yr;
    if((yr%4==0) && (yr%100!=0))
        cout<<"\nIt is a Leap Year";
    else if(yr%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
    cout<<endl;
    return 0;
}