/*ex07_35.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

static int n;

template <class T>
void printArray(T arr[], int N)
{
   //n = N;
   if(N < 0)
      return;
   else
   {
      n = n - 1;
      printArray(arr, n);
      cout << arr[N] << " ";
   }
}

int main()
{
   const int num = 5;
   int A[num] = {2, 4, 6, 8, 10};
   n = num - 1;
   printArray(A, n);
   cout << endl;

   double D[num] = {1.1, 2.2, 3.3, 4.4, 5.5};
   n = num - 1;
   printArray(D, n);
   cout << endl;

   char S[num] = "Bank";
   n = num - 1;
   printArray(S, n);
   cout << endl;

   return 0;
}
