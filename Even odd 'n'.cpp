#include <iostream>

using namespace std;

int main ()
{
  int n;

  cout << "Enter the value of n ";
  cin >> n;

  if (n % 2 == 0)
    {
      if (n >= 2 && n <= 5)	//If n is even and in the inclusive range of 2 to 5, print Not Weird
	{
	  cout << "Not Weird";
	}
      else if (n >= 6 && n <= 20)	//If n is even and in the inclusive range of 6 to 20, print Weird
	{
	  cout << "Weird";
	}
      else
	{
	  cout << "Not Weird";	//If n is even and greater than 20, print Not Weird
	}
    }
  else
    {
      cout << "Weird";		//If n is odd, print Weird
    }

  return 0;
}
