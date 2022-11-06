 //write a program in C++ to find area of a triangle with base and height entered by user at run-time.

#include<iostream>
using namespace std;
int main()
{
    float b, h, area;
    cout<<"Enter Base length of Triangle: ";
    cin>>b;
    cout<<"Enter Height length of Triangle: ";
    cin>>h;
    area = 0.5*b*h;
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}