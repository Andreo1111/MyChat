#include <iostream>
#include <string>
#include <vector>



int main()
{
  
std::vector <std::string> ivector{"Maria","Anna","Angela","Sasha","Nina","Galya"};

for(int i = 0; i < sizeof(ivector);++i)
{

std::cout<< ivector[i] <<std::endl;
}
std::cout << "Add"<< std::endl;
std::string i;
std::cin >>  i;
ivector.push_back(i);
for(int i = 0; i < sizeof(ivector);++i)
{

std::cout<< ivector[i] <<std::endl;
}



return 0;

}
