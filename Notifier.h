//
// Created by andrea on 29/02/20.
//

#ifndef USERSCHAT_NOTIFIER_H
#define USERSCHAT_NOTIFIER_H

#include "header.h"
#include "Observer.h"
#include "Chat.h"

class Notifier : public Observer {
public:
    Notifier(bool online, Chat* s):online(online),subject(s){}

    ~Notifier() override {}

    void attach() override {
        subject->subscribe(this);
    }

    void detach() override {
        subject->unsubscribe(this);
    }

    void update() override {
        if(online)
            this->draw(subject->last());
        cout<<"There are "<<subject->getNumUnreadMessages()<<" unread message/s"<<endl;
    }

    void draw(const Message& ms) {
        char buffer[80];
        time_t actualTime = ms.getCurrentTime();
        struct tm *localTime = localtime(&actualTime); // struct che contiene data e tempo divisi nei suoi componenti
        cout<<"NEW MESSAGE!"<<endl;
        strftime(buffer,80,"Sent at %I:%M%p of the day %d/%m/%Y",localTime);
        cout<<buffer<<endl;
    }

    bool isOnline() const {
        return online;
    }

    void setOnline(bool online) {
        Notifier::online = online;
    }


private:
    Chat* subject;
    bool online;
};


#endif //USERSCHAT_NOTIFIER_H
