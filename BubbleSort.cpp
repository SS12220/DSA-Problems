#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// g++ BubbleSort.cpp -o output.exe; .\output.exe  

void bubbleSort(vector<int> ar, int n){

  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n - i - 1; j++)
    {
      if (ar[j] > ar[j+1])
      {
        swap(ar[j], ar[j+1]);
      }
      
    }
    
  }

  for (size_t i = 0; i < n; i++)
  {
    cout << ar[i] << endl;
  }
  
}

int main() {
    vector<int> arr = {4, 1, 5 ,2, 3};
    int n=5;

    bubbleSort(arr, n);
    
    return 0;
}