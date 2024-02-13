#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

class student {
  protected:
  int roll;
  char name[100];
  public:
  void getData();
  void showData();
};

class test: public student {
 protected:
 int t1, t2;
 public:
 void getTMarks();
 void showTMarks();
};

class sport {
 protected:
 int s;
 public:
 void getSMarks();
 void showSMarks();
};

class result: public test, public sport {
 protected:
 int sum, avg;
 public:
 void total();
 void showResult();
};

void result:: total() {

}

void result:: showResult() {
}

void sport:: getSMarks() {
}

void sport:: showSMarks() {
}

void test:: getTMarks() {
}

void test:: showTMarks() {
}

void student:: getData() {
}

void student:: showData() {
}

void main() {
 result s;
 s.getData();
 s.showData();
 s.getTMarks();
 s.showTMarks();
 s.getSMarks();
 s.showSMarks();
 s.total();
 s.showResult();
 getch();
}