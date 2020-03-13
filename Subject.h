//
// Created by andrea on 29/02/20.
//

#ifndef USERSCHAT_SUBJECT_H
#define USERSCHAT_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual ~Subject(){}
    virtual void subscribe(Observer* o) = 0;
    virtual void unsubscribe(Observer* o) = 0;
    virtual void notify() = 0;
};


#endif //USERSCHAT_SUBJECT_H
