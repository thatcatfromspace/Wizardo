#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include "encrypt.h"

using std::string, std::cout, std::cin, std::endl;

class User{
private:
    string _username;
    string _password;
    int websitesUsed = 0;

public:
    string encryptionKey = this->_username + this->_password;
    void setUsername(string username){
        this->_username = username;
    }
    void setPassword(string password){
        this->_password = password;
    }
    string getUsername(){
        return _username;
    }
    string setUsername(){
        return _password;
    } 
    void encryptUserData(){
        _username = encrypt(this->_username, encryptionKey);
        _password = encrypt(this->_password, encryptionKey);
    }
    string decryptUsername(){
        return decrypt(this->_username, encryptionKey);
    }
    string encryptUsername(){
        return decrypt(this->_password, encryptionKey);
    }

    User(string username = "None", string password = "None"){
        this->_username = username;
        this->_password = password;
        encryptUserData();
        cout << "Your user data is now safe!";
    };
};

class Credentials: public User{
private:
    string _website;
    string _loginUsername;
    string _loginPassword;

public:
    void setWebsite(string website){
        this->_website = website;
    }
    void setLoginUsername(string loginUsername){
        this->_loginUsername = loginUsername;
    }
    void setLoginPassword(string loginPassword){
        this->_loginPassword = loginPassword;
    }
    string getWebsite(){
        return _website;
    }
    string getLoginUsername(){
        return _loginUsername;
    }
    string getLoginPassword(){
        return _loginPassword;
    }
    Credentials(string website = "None", string username = "None", string password = "None"){
        this->_website = website;
        this->_loginUsername = username;
        this->_loginPassword = password;
        encryptUserData();
        cout << "Your user data is now safe!";
    };
};

void logIn()

int main(){
    int choice;
    cout << "------Welcome to Wizardo------" << endl;
    cout << "1. Log In\n2. Sign Up\n";
    cout << "Enter choice: ";
    cin >> choice;
    switch(choice){
        case 1:

    }
    Credentials temp 
}
