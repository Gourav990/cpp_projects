#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
  int a, b;

public:
  void getDatasimple(void)
  {
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
  }
  void simpleperform(void)
  {
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
  }
};
class scientificcalculator
{
  int a, b;

public:
  void getDatascientific(void)
  {
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
  }
  void scientificperform(void)
  {
    cout << "the value of cos(a) is " << cos(a) << endl;
    cout << "the value of sin(a) is " << sin(a) << endl;
    cout << "the value of tan(b) is " << tan(b) << endl;
    cout << "the value of exp(b) is " << exp(b) << endl;
  }
};
class hybrid : public simplecalculator, public scientificcalculator
{
};
int main()
{
  hybrid hy;
  hy.getDatasimple();
  hy.simpleperform();
  hy.getDatascientific();
  hy.scientificperform();

  return 0;
}
