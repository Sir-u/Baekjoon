#include <iostream>
using namespace std;

int reminder(int &a, int &b){
  return a % b;
}

int division(int &a, int &b){
  return a / b;
}

int main()
{
  int n = 0, k = 0, result = 0, nul = 0;
  cin >> n >> k;
  result = n % k;

  if (result != 0){
    
  }else{
    cout << 1;
  }

  nul = division(n, k); //test

  cout << n << " "<<  k << " " << result << " "<< nul; //test
  
}