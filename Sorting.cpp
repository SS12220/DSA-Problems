#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// g++ Sorting.cpp -o output.exe; .\output.exe  

void BubbleSort(vector<int> &ar, int n){ //O(n^2)

  for (size_t i = 0; i < n; i++) // if run n times
  {
    bool isSwaped = false;
    for (size_t j = 0; j < n - i - 1; j++) // then this will run n * n times
    {
      if (ar[j] > ar[j+1])
      {
        isSwaped = true;
        swap(ar[j], ar[j+1]);
      }
      
    }

    if (!isSwaped) return; // array is already sorted
    
  }
}

void SelectionSort(vector<int> &ar, int n){

  for (size_t i = 0; i < n; i++) // if run n times
  {
    bool isSwaped = false;
    int smallestIndex = i;
    for (size_t j = i + 1; j < n; j++) // then this will run n * n times
    {
      if (ar[smallestIndex] > ar[j])
      {
        isSwaped = true;
        smallestIndex = j;
      }
      
    }

    if (isSwaped) swap(ar[smallestIndex], ar[i]); // array is already sorted
    
  }
}

void InsertionSort(vector<int> &ar, int n){ // O(n^2)

    for (size_t i = 1; i < n; i++) // if run n times
    {
      int currentValue = ar[i];
      int prev = i-1;

      while (prev >= 0 && ar[prev] > currentValue)
      {
        ar[prev+1] = ar[prev];
        prev--;
      }
      
      ar[prev + 1] = currentValue;
    }
  }

void printArray(vector<int> ar){
  for (size_t i = 0; i < ar.size(); i++)
  {
    cout << ar[i] << " ";
  }

  cout << endl;
}

int main() {
    vector<int> arr = {4, 1, 5 ,2, 3};
    int n=5;

    //BubbleSort(arr, n); // TC - O(n^2)
    //SelectionSort(arr, n); // TC - O(n^2)
    InsertionSort(arr, n); // TC - O(n^2)
    printArray(arr);
    
    return 0;
}