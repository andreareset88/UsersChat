//
// Created by andrea on 29/02/20.
//

#ifndef USERSCHAT_MESSAGE_H
#define USERSCHAT_MESSAGE_H

#include <chrono>
#include "header.h"

class Message {
public:
    Message(const string& se,const string& re,const string& te,bool read = false):sender(se),receiver(re),text(te),isRead(read){
        time(&currentTime); // Leggo l'ora corrente e la salvo in currentTime
    }

    const string &getSender() const {
        return sender;
    }

    const string &getReceiver() const {
        return receiver;
    }

    const string &getText() const {
        return text;
    }

    void setIsRead(bool isRead) {
        Message::isRead = isRead;
    }

    bool getRead() {
        return isRead;
    }

    time_t getCurrentTime() const {
        return currentTime;
    }

    bool operator==(const Message &rhs) const {
        return sender == rhs.sender &&
               receiver == rhs.receiver &&
               text == rhs.text;
    }


private:
    string sender,receiver,text;
    bool isRead;
    time_t currentTime; // time_t è un tipo che rappresenta l'ora...
};


#endif //USERSCHAT_MESSAGE_H
