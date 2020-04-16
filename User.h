//
// Created by andrea on 28/03/20.
//

#ifndef USERSCHAT_USER_H
#define USERSCHAT_USER_H

#include <string>
using namespace std;

class User {
public:
    explicit User(const string& name):name(name){}

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        User::name = name;
    }
private:
    string name;
};


#endif //USERSCHAT_USER_H
