#include <iostream.h>
#include <conio.h>

void search(int a[10], int x, int y, int z) {
 int mid = (x+y)/2;
 while(x <= y) {
  if(a[mid] == z) { cout<<"Number is at position: "<<mid<<endl; }
  if(a[mid] < z) { x = mid + 1; } else { y = mid - 1; }
  mid = (x+y)/2;
 }
 cout<<"Element is not present in array."<<endl;
}

void main() {
 int num, temp, arr[10];
 cout<<"Enter the numbers: "<<endl;
 for(int i=0; i<10; i++) {
  cin>>arr[i];
 }
  for(int k=0; k<10; k++) {
   for(int l=0; l<9; l++) {
   if(arr[l] > arr[l+1]) {
    temp = arr[l];
    arr[l] = arr[l+1];
    arr[l+1] = temp;
    }
   }
  }
 cout<<"Enter the number:"<<endl;
 cin>>num;
 search(arr, 0, 10, num);
 getch();
}