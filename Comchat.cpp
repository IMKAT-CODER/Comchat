#include <iostream>
#include <string>
using namespace std;

int main() {
 string x;
 cout << "Comchat version 1.0.3\n\nEnjoy chatting with your new friend!\n\n\nComputer : I would like to talk with you!\n           What is your name?\n\nYou : ";
 getline(cin,x);
 cout << "\n\nComputer : Hello " << x << "!\n           How are you?\n\nYou : ";
 getline(cin,x);
 cout << "\n\nComputer : You are " << x << ". Ok! Always stay happy.\n           And you know, that as I am a computer, I have a lot of work...\n           So Bye Bye!\n\nYou : ";
 getline(cin,x);
 return 0;
}

