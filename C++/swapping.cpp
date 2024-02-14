#include <iostream.h>
#include <conio.h>

void swap(int *p1, int *p2) {
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void main() {
 clrscr();
 int x, y;
 cout<<"Enter two numbers: "<<endl;
 cin>>x>>y;
 cout<<"Entered Numbers: "<<x<<" | "<<y<<endl;
 swap(&x, &y);
 cout<<"Exchanged Numbers: "<<x<<" | "<<y<<endl;
 getch();
}
