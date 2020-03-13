//
// Created by andrea on 29/02/20.
//

#ifndef USERSCHAT_USER_H
#define USERSCHAT_USER_H

#include "header.h"


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
