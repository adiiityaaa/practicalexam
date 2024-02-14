#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void main() {
 clrscr();
 char s[1000], temp;
 int len, lenr;
 cout<<"Enter the String: "<<endl;
 gets(s);
 len = strlen(s);
 lenr = len - 1;
 for(int i = 0; i<len/2; i++) {
  temp = s[i];
  s[i] = s[lenr];
  s[lenr] = temp;
  lenr--;
 }
 cout<<"The reversed string is: "<<endl;
 cout<<s<<endl;
 getch();
}
