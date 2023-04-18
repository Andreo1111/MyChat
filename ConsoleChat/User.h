#pragma ones
#include <iostream>
#include <string>

class User
{
    
public:
    User(const std::string& login, const std::string& name, const std::string& password) :login_(login), name_(name), password_(password) {}
    const std::string& getLogin() const { return login_; }
    const std::string& getName() const { return name_; }
    void setName(const std::string& name) { name_ = name; }
    const std::string& getPassword() const { return password_; }
    void setPassword(const std::string& password) { password_ = password; }

private:
    const std::string login_;
    std::string name_;
    std::string password_;
};