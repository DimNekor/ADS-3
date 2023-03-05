// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int res = 0;
  int start = 0;
  int end = size - 1;
  while (start <= end) {
    int middle = (start + end) / 2;
    if (*(arr + middle) == value) {
      res += 1;
      int middle1 = middle;
      while ((*(arr + middle + 1)) == value) {
        res += 1;
        middle += 1;
      }
      while ((*(arr + middle1 - 1)) == value) {
        res += 1;
        middle1 -= 1;
      }
      return res;
    } else if (*(arr + middle) > value) {
      end = middle - 1;
    } else {
      start = middle + 1;
    }
  }
  return res;
}
