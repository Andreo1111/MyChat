#include <iostream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "Welcome to the chat!" << endl;
    cout << "Type 'quit' to exit the chat" << endl;
    
    vector<string> messages;
    string input;
    
    while (input != "quit")
    {
        cout << "> ";
        getline(cin, input);
        if (input != "quit")
        {
            messages.push_back(input);
            cout << "You said: " << input << endl;
        }
    }
    
    cout << endl << "All your messages:" << endl;
    for (int i = 0; i < messages.size(); i++)
    {
        cout << messages[i] << endl;
    }
    
    return 0;
}