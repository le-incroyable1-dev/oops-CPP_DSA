#include<iostream>
using namespace std;

class Point{
  int x,y;
  public:
  Point(int i = 0, int j = 0)
  {
      x = i;
      y = j;
  }
  
  int getX() const {return x;}
  int getY() { return y;}
};

int main()
{
    const Point t;
    
    cout << t.getX() << " " << t.getY();
    
    return 0;
}

/*
Compilation failed due to following error(s).main.cpp:21:39: error: passing ‘const Point’ as ‘this’ argument discards qualifiers [-fpermissive]
     cout << t.getX() << " " << t.getY();
                                       ^
main.cpp:22:7: note:   in call to ‘int Point::getY()’
   int getY() { return y;}
       ^~~~
       
       NOTE : All member functions in a const member must be const so that the compiler is sure that they cannot change values.
*/
