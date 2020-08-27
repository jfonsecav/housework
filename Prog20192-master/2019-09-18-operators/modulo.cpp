#include <iostream>

int main(void)
{
  int a = 0;
  std::cin >> a;
  if (a%3 == 0) {
    std::cout << "Number " << a << " CAN be divided by 3\n";
  }
  else {
    std::cout << "Number " << a << " CANNOT be divided by 3\n";
  }
  
  return 0;
}
