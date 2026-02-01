#include <iostream>
#include "sorting.h"
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main(int argc, char * argv[]) {
  int N;
  N=argc-1;

  int *a = new int[N];
  for(int i=1; i < argc; i++){
    a[i-1] = atoi(argv[i]);
  }
  sort(a,N);

  display(a,N);
  
  delete[] a;
  return 0;
}
