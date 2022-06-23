
//Friend Classes 

#include <iostream>
using namespace std;

class Square; //class rectangle uses Square & square uses Rectangle as a friend

class Rectangle {
int width, height;
  public: 
    int area() {
      return (width * height); }
      void convert (Square a);
    };

class Square {
friend class Rectangle; //Declaring as a friend
private: 
  int side;
public:
Square (int a) : side(a) {}
};

void Rectangle:: convert(Square a){ // Rectangle uses Square
  width = 2;
  height = 5;
  
}
int main () {
  Rectangle rect;
  Square sqr (4);
  rect.convert(sqr);

  cout << rect.area();

  return 0;
}


