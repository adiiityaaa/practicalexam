#include <iostream.h>
#include <conio.h>

class jeeaspirant {
  public:
  void downfall() {
  cout<<"JEE Aspirant is dreaming of 98 Percentile :)"<<endl;
  }
  jeeaspirant() {
  cout<<"JEE Aspirant is waiting for his result."<<endl;
  }
  ~jeeaspirant() {
  cout<<"JEE Aspirant committed suicide after seeing result!"<<endl;
  }
};

void main() {
 jeeaspirant life;
 life.downfall();
 getch();
}