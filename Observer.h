//
// Created by andrea on 29/02/20.
//

#ifndef USERSCHAT_OBSERVER_H
#define USERSCHAT_OBSERVER_H


class Observer {
public:
    virtual ~Observer(){}
    virtual void attach() = 0;
    virtual void detach() = 0;
    virtual void update() = 0;
};


#endif //USERSCHAT_OBSERVER_H
