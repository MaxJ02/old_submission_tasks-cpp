#include <iostream>
int num1 = -3;
int* ptr1 = &num1;

int main() 
{
  std::cout << "num1 = " << num1 << "\n";
  *ptr1 = 4;
  std::cout << "ptr1 =" << *ptr1;
  
}
