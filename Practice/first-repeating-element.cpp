#include <iostream>

int first() {
  int arr[6] = {10, 5, 3, 5, 4, 2};
  for (int i = 0; i < 6; i++) {
    for (int j = i + 1; j < 6; j++) {
      if (arr[i] == arr[j]) {
        return arr[i];
      }
    }
  }
  return -10;
}

int main() { return 0; }
