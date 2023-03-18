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
    int left = - 1;
    int right = size;
    while (left < right - 1) {
        int izmeritel = (left+right)/2;
        if (arr[izmeritel] < value) {
            left = izmeritel;
        } else if (arr[izmeritel] > value) {
            right = izmeritel;
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
