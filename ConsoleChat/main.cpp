#include "Chat.h"
#include "Message.h"
int main()
{
    Chat chat;
    chat.start();
   
  while (chat.isChatWork())

    {
        chat.ShowLoginMenu();
        while (chat.getCurrentUser())
       {
             chat.ShowUserMenu();
         }
    }
    return 0;
}