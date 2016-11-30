#include <iostream>

using namespace std;

class Line
{
   public:
      int getLength( void );
      Line( int len );             // �򵥵Ĺ��캯��
      Line( const Line &obj);  // �������캯��
      ~Line();                     // ��������

   private:
      int *ptr;
};

// ��Ա�������壬�������캯��
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;
    // Ϊָ������ڴ�
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
   *ptr = *obj.ptr; // copy the value
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int Line::getLength( void )
{
    return *ptr;
}

void display(Line obj)
{
   cout << "Length of line : " << obj.getLength() <<endl;
}

// �����������
int main()
{
   Line line(10);

   cout << "1" << endl;

   display(line);

   cout << "2" << endl;

   return 0;
}
