/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x = new int;
  int &y = *x;
  y = 4;

  cout << "&x: " << &x << endl;
  cout << " x: " << x << endl;
  cout << "*x: " << *x << endl;

  cout << "&y: " << &y << endl;
  cout << " y: " << y << endl;
  // cout << *y << endl;

  return 0;
}
