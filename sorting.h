#include <cstdio>

void swap(int &a,int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void sort(int *a,int N) {
  for (int i = 0; i < N-1; i++) {
    for (int j = i+1; j < N; j++) {
      if (a[i] > a[j]) {
        swap(a[i], a[j]);
      }
    }
  }
}

void display(int *a,int N) {
  printf("[");
  for (int i = 0; i < N; i++) {
    printf("%d", a[i]);
    if (i != (N-1)) {
      printf(", ");
    }
  }
  printf("]\n");
}
