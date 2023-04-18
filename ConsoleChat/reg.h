#pragma ones
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>



struct Reg
    {
    std::vector <std::string> login;
    std::vector<std::string> name;
    std::vector <std::string> password;
    };
    
void reguser()
{
 Reg reg;
std::string login_;
std::string name_;
std::string password_;
std::cout << "Please input login\n";
std::cout << "Please input user\n";
std::cout << "Please input password\n";
std::cin >> login_;
std::cin >> name_;
std::cin >> password_;
while(!==0)
{
reg.login.push_back(login_);
reg.name.push_back(name_);
reg.password.push_back(password_);
}
reg.login.push_back(login_);
reg.name.push_back(name_);
reg.password.push_back(password_);
std::cout<< reg.login[0]<<"," <<reg.name[0]<<","<< reg.password[0]<<","<< std::endl;
//std::cout<< reg.login[1]<<"," <<reg.name[1]<<","<< reg.password[1]<<","<< std::endl;


}

