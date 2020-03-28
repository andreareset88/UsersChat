//
// Created by andrea on 28/03/20.
//

#ifndef USERSCHAT_CHAT_H
#define USERSCHAT_CHAT_H

#include "header.h"
#include "User.h"
#include "Message.h"
#include "Subject.h"

class Chat : public Subject {
public:
    Chat(User& firstUser, User& secondUser): myProfile(firstUser.getName()),otherProfile(secondUser.getName()){
        cout<<"New chat created between "<<myProfile<<" and "<<otherProfile<<endl;
    }
    ~Chat() override{}

    void addMessage(const Message& newMessage){
        if((myProfile == newMessage.getReceiver()||myProfile == newMessage.getSender())&&(otherProfile == newMessage.getSender()||otherProfile == newMessage.getReceiver()))
            messages.push_back(newMessage);
        this->notify();
    }

    const Message& last() const {
        return messages.back();
    }

    void subscribe(Observer* o) override {
        observers.push_back(o);
    }

    void unsubscribe(Observer* o) override {
        observers.remove(o);
    }

    void notify() override {
        for(auto & itr : observers)
            itr->update();
    }

    void read(int i) {
        if(i>=0 && i<messages.size()){
            if(messages[i].getSender() == otherProfile || messages[i].getSender() == myProfile){
                cout<<"User "<<messages[i].getSender()<<" sent a message to "<<messages[i].getReceiver()<<endl;
                cout<<"Text: "<<messages[i].getText()<<endl;
                messages[i].setIsRead(true);
                cout<<"Message "<<i<<" successfully read."<<endl;
            }
        } else
            throw out_of_range("The searched message doesn't exist...");
    }


    int getNumUnreadMessages(){
        int count = 0;
        for(auto & itr : messages)
                if(!itr.getRead())
                    count++;
        return count;
    }

    const string &getMyProfile() const {
        return myProfile;
    }

    void setMyProfile(const string &myProfile) {
        Chat::myProfile = myProfile;
    }

    const string &getOtherProfile() const {
        return otherProfile;
    }

    void setOtherProfile(const string &otherProfile) {
        Chat::otherProfile = otherProfile;
    }

private:
    string myProfile;
    string otherProfile;
    vector<Message> messages;
    list<Observer*> observers;
};


#endif //USERSCHAT_CHAT_H
