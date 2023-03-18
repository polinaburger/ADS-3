// Copyright 2021 NNTU-CS

int sort(int* arr, int size) {
  for (int  j= 0; j < size - 1; j++) {
    for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int a = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = a;
      }
    }
  }
  return *arr;
}

int cbinsearch(int *arr, int size, int value) {
  sort(arr, size);
  int izmeritel = size/2;
  while (true) {
    if (arr[izmeritel] < value) {
      izmeritel = - (izmeritel/2) + size;
    } else if (arr[izmeritel] > value) {
      izmeritel = izmeritel/2;
    } else if (arr[izmeritel] == value) {
      int counter = 1;
      int one = izmeritel-1;
      while (arr[one] == value) {
        counter++;
        one--;
      }
      int two = izmeritel+1;
      while (arr[two] == value) {
        counter++;
        two++;
      }
      return counter;
    } 
  }
  return 0;
}

