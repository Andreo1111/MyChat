#include <iostream>
#include <fstream>
#include <string>

class Password
{
public:
int Entarnce()
{
}
int Sing_up()
{
    std::string login = "login.txt";
    std::string password = "password.txt";
    std::fstream log;
    std::fstream pass;
    log.open(login, std::fstream::in | std::fstream::out | std::fstream::app);
pass.open(password, std::fstream::in | std::fstream::out | std::fstream::app);
if (!log.is_open() && !pass.is_open())
{
    std::cout << "Ошибка!" << std::endl;
}
else
{

}

}

};