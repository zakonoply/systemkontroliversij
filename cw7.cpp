#include <iostream> 
#include <cmath> 
 

// AJ MAMA, JAKI FAJNY KOD
using namespace std;
 
int main()
{
  double a,b,c,d,x1,x2; 
 
  cout << "napisz a\n"; 
  cin >> a;
  cout << "napisz b\n";
  cin >> b;
  cout << "napisz c\n";
  cin >> c;
 
  d = b * b - 4 * a * c; 
  if (d > 0) 
  {
    x1 = ((-b) + sqrt(d)) / (2 * a);
    x2 = ((-b) - sqrt(d)) / (2 * a);
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";
  }
  if (d == 0)
  {
    x1 = -(b / (2 * a));
    cout << "x1 = x2 = " << x1 << "\n";
  }
  if (d < 0) 
    cout << "EROR";
}
//najs delajesz
