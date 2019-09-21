// Random Rectangle
#include <iostream>
#include <ctime>
 int main()
 {

unsigned seed = time(0) ;
srand(seed);
int MaxWidth = 40;
int MaxLength = 3;
MaxLength = rand() % MaxWidth + 1;
std::string eq ;
eq.assign(MaxLength,'#') ;

std::cout << eq << std::endl;
std::cout << eq << std::endl;
std::cout << eq << std::endl;
    return 0;
  }
