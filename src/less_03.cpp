//============================================================================
// Name        : less_03.cpp
// Author      : andry antonenko
// IDE         : Eclipse IDE
// Copyright   : Your copyright notice
// Description : Simple Numbers in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

bool numberIsSimple(int nD);

int main() {
  cout << "Введите целое число:" << endl; // prints
  uint32_t d;
  cin >> d;

  if(numberIsSimple(d))
  {
    cout << "Число " << d << " простое." << endl; // prints
  }
  else
  {
    cout << "Число " << d << " не является простым." << endl; // prints
  }

  return 0;
}


bool numberIsSimple(int nD)
{
  int nSqrt = (int)sqrt(nD);

  int nDivider;
  int nIter = 0;
  if (nD > 3)
  {
    do
    {
      nDivider = 2 + nIter;
      if (nIter < 1) nIter++;
      else nIter += 2;

      if ((nD % nDivider) == 0)
        return false;
      else if (nDivider > nSqrt)
        return true;
    } while (true);
  }
  else
    return true;
}
