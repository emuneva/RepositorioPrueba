#include <iostream>


int add (const int& a, const int& b)
{
 return a + b;
} 


int sub (const int& a, const int& b) {
	return a-b;
}

int main()
{
  std::cout << "Hello W" << std::endl;
  std::cout << add (5, 6) << std::endl;
  
  std::cout << "Sub (7-2): " << sub (7, 2) << std::endl;
  
  return 0;
 
}


