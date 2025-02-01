#include <algorithm> 
#include <functional>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// g++ AggressiveCow.cpp -o output.exe; .\output.exe 

bool isPossible(vector<int> ar, int n, int m, int mid){
  int cows = 1;
  int lastStall = ar[0];

  for (int i = 1; i < n; i++)
  {
    if ((ar[i]-lastStall)>=mid)
    {
        cows++;
        lastStall = ar[i];
    }

    if (cows == m)
    {
        return true;
    }
  }

  return false;
}

int minTimeToPaint(vector<int> ar, int n, int m){

  int st = 1;
  int ed = ar[n-1]-st;
  int ans = -1;

  // O(log(Sum))
  while (st <= ed)
  {
    int mid = st + (ed-st)/2;

    if (isPossible(ar, n, m, mid))
    {
      ans = mid;
      st = mid+1;
    }
    else
    {
      ed = mid-1;
    }
    
  }
  
  return ans;
}

int main() {
    vector<int> arr = {6, 7,  9, 11, 13, 15};
    int n=6, m = 4;
    std::sort(arr.begin(), arr.end());
    
    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}