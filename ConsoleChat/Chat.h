#pragma once
#include <string>
#include <exception>
#include <memory>
#include <vector>
#include "User.h"
#include "Message.h"

class Chat
{


public:
    void start();
    bool isChatWork_ = true;
    bool isChatWork() { return isChatWork_ =true; }
    std::shared_ptr<User> getCurrentUser() const { return currentUser_; }
    void ShowLoginMenu();
    void ShowUserMenu();
    
private:
    //bool isChatWork_ = true;
    std::vector<User> userList_;
    std::vector<Message> messageList_;
    std::shared_ptr<User> currentUser_ = nullptr;
    void login();
    void signUp();
    void showChat() const;
    void ShowAllUsersName() const;
    void addMessage();
    std::vector<User>& getAllUsers() { return userList_; }
    std::vector<Message>& getAllMessages() { return messageList_; }
    std::shared_ptr<User> getUserByLogin(const std::string& login) const;
    std::shared_ptr<User> getUserByName(const std::string& name) const;

};