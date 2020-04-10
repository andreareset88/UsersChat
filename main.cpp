#include "User.h"
#include "Chat.h"
#include "Message.h"
#include "Notifier.h"

int main() {
  User Andrea("Andrea");
  User Charles("Charles");
  Message firstMessage("Andrea","Charles","Hi Charles, let's win this championship!");
  Message secondMessage("Charles","Andrea","Hi Andrea, I'll do my best to win, I promise!");
  Message thirdMessage("Andrea","Charles","YEAH! That's the right spirit!");
  Message fourthMessage("Sebastian","Andrea","Thank you!");
  Chat chat(Andrea,Charles);
  Notifier notifier(true,&chat);
  notifier.attach();
  chat.addMessage(firstMessage);
  chat.addMessage(secondMessage);
  chat.addMessage(thirdMessage);

    try {
        chat.read(0);
        chat.read(1);
        chat.read(2);
        chat.read(3);
        chat.read(4);// Will not work...
    }

    catch (out_of_range& e){
        cerr<<"Error: "<<e.what()<<endl;
    }

    try {
        chat.addMessage(fourthMessage);
    }
    catch (invalid_argument& e){
        cerr<<endl;
        cerr<<e.what()<<endl;
    }

    notifier.detach();
}
