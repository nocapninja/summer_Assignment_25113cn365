#include <iostream>
using namespace std;

int main()
{
   int n, t;
   cout << "Enter a number ";
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
      int check = 1;
      if (n % i == 0)
      {
         for (int j = 2; j <= i; j++)
         {
            if (i % j == 0 && j != i)
            {
               check = 0;
            }
            if (check == 1)
            {
               t = j;
            }
         }
      }
   }
   cout << "The largest prime factor of " << n << " is " << t;
   return 0;
}