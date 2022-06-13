//Point Ŭ������ ������� �Ʒ��� main �Լ��� ���̴� ��� �������� �Է��� �����ϵ���,
//�׸��� ������ ������ ���̴� ��� ����� �̷�������� >> �����ڸ� �����ε� �ϼ���.


//[������ ��]
//x, y ��ǥ ������ �Է�: 5 10
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
