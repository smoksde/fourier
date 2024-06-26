#include <iostream>
#include <complex>

#include "fft.h"

int main() {
  typedef complex<double> cx;
  cx a[] = { cx(0,0), cx(1,1), cx(3,3), cx(4,4), 
    cx(4, 4), cx(3, 3), cx(1,1), cx(0,0) };
  cx b[8];
  fft(a, b, 3);
  for (int i=0; i<8; ++i) 
    std::cout << b[i] << "\n";
}