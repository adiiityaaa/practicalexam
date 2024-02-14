#include <iostream.h>
#include <conio.h>

class object {
  public:
  void print() {
  cout<<"Now X is Alive."<<endl;
  }
  object() {
  cout<<"Object is Born."<<endl;
  }
  ~object() {
  cout<<"Object Died."<<endl;
  }
};

void main() {
 object obj;
 obj.print();
 getch();
}
