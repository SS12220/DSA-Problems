#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// g++ BubbleSort.cpp -o output.exe; .\output.exe  

void bubbleSort(vector<int> &ar, int n){ //O(n^2)

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

void processArray(int arr[], int size) {
  cout << "Array elements are: ";
  for (int i = 0; i < size; i++) {
      cout << arr[i] << " "; // Print each element
  }
  cout << endl;
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

    bubbleSort(arr, n); // TC - O(n^2)
    printArray(arr);
    
    return 0;
}