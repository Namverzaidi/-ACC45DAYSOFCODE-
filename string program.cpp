#include <iostream>
 #include <cstring>
 using namespace std;
 
 int main()
 {
 char string1[]="coding ";
 char string2[]="is best";
 strcat(string1, string2);
 cout << "The result of strcat is : " <<string1 << '\n';
 }