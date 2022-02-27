#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main(void)
{
  int n, r;
  
  std::cout << "Enter a value for n : ";
  std::cin >> n;

  std::cout << "Enter a value for r : ";
  std::cin >> r;

  std::cout << "nCr = ";
  std::cout << nCr(n, r);

  std::cout << std::endl;

  return 0;
}

long nCr(int n, int r)
{
	int nCr;
	nCr = Factorial(n) / (Factorial(r) * Factorial(n - r));
	return nCr;
}

long Factorial(int no)
{
  int factorial = 1, i;
  
  for(i = 2; i <= no; i++)
  	factorial = factorial * i;
  
  return factorial;
}