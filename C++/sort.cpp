#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();
  int a[10], temp;
  cout<<"Enter 10 Numbers for Array:"<<endl;
  for(int i=0;i<10;i++){
   cin>>a[i];
  }
  cout<<"The entered numbers are:"<<endl;
  for(int j=0; j<10; j++) {
  cout<<a[j]<<" ";
  }

  cout<<endl<<endl<<"Ascending Order: "<<endl;
  for(int k=0; k<10; k++) {
   for(int l=0; l<9; l++) {
   if(a[l] > a[l+1]) {
    temp = a[l];
    a[l] = a[l+1];
    a[l+1] = temp;
    }
   }
  }
  for(int m=0; m<10; m++) {
  cout<<a[m]<<" ";
  }

  cout<<endl<<endl<<"Descending Order: "<<endl;
  for(int n=0; n<10; n++) {
   for(int o=9; o>n; o--) {
   if(a[o] > a[o-1]) {
    temp = a[o];
    a[o] = a[o-1];
    a[o-1] = temp;
    }
   }
  }
  for(int p=0; p<10; p++) {
  cout<<a[p]<<" ";
  }

  getch();

}
