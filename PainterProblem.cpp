#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// g++ PainterProblem.cpp -o output.exe; .\output.exe 

bool isPossible(vector<int> ar, int n, int m, int mid){
  
  int pnt = 1;
  int time = 0;

  for (size_t i = 0; i < n; i++)
  {
    if (time + ar[i] <= mid)
    {
      time+=ar[i];
    }
    else{
      time = ar[i];
      pnt++;
    }

    if (pnt > m)
    {
      break;
    }
  }
  
  if (pnt > m)
  {
    return false;
  }
}

int minTimeToPaint(vector<int> ar, int n, int m){
  int maxValue = INT_MIN;
  int sum = 0;
  int ans = -1;

  for (size_t i = 0; i < n; i++) // O(n)
  {
    maxValue = max(ar[i], maxValue);
    sum+=ar[i];
  }

  int st = maxValue, ed = sum;

  // O(log(Sum))
  while (st <= ed)
  {
    int mid = st + (ed-st)/2;

    if (isPossible(ar, n, m, mid))
    {
      ans = mid;
      ed = mid -1;
    }
    else
    {
      st = mid+1;
    }
    
  }
  
  return ans;
}

int main() {
    vector<int> arr = {40, 30, 10 ,20};
    int n=4, m = 2;
    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}