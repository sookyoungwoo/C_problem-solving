//Point 클래스를 대상으로 아래의 main 함수가 보이는 대로 데이터의 입력이 가능하도록,
//그리고 실행의 예에서 보이는 대로 출력이 이루어지도록 >> 연산자를 오버로딩 하세요.


//[실행의 예]
//x, y 좌표 순으로 입력: 5 10
//[5, 10]


#include <iostream>
using namespace std;

class Point
{
private:
   int xpos, ypos;
public:
   Point(int x=0, int y=0): xpos(x), ypos(y) {}
   void ShowPosition() const 
   {
      cout << "[" << xpos << ", " << ypos << "]" << endl;
   }
      
   friend ostream& operator>>(ostream&, Point&);
   friend istream& operator<(istream&, Point&);
   
};

isteram& operator>>(istream& is, Point& p){
   is >> p.xpos >> p.ypos;
   return is;
}

osteram& operator<<(ostream& os, Point& p){
   os << "[" << p.xpos << ", " << p.ypos << "]" << endl;
   return os;
}
