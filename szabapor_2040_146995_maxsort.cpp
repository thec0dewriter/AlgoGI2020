#include <iostream>
#include <fstream>
using namespace std;


void max(int n, int arr[]) {
  int utolsoIndex = n - 1;
  for(int j = 0; j < n; j++) {
    int maxIndex = 0;
    for(int i = 0; i < utolsoIndex; i++) {
      if (arr[maxIndex] < arr[i]) {
        maxIndex = i;
      }
    }
    int temp = arr[utolsoIndex]; 
    arr[utolsoIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    utolsoIndex -= 1;
  }

}

int* beolvas(int& n) {
  ifstream inputFile("input.in");
  inputFile >> n;
  int* arr = new int[n];
  for (int i = 0; i < n; i++) {
    inputFile >> arr[i];
  }

  return arr;
}

int main() {
  int n;
  int* tomb = beolvas(n);

  max(n, tomb);
  for (int i = 0; i < n; i++) {
    cout << tomb[i] << '\n';
  }
}