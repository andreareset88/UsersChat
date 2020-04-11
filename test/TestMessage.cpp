#include "gtest/gtest.h"
#include "../Message.h"

TEST(Message,testMessage){
    Message msg("Charles","Andrea","How are you?");
    ASSERT_EQ(msg.getSender(),"Charles") <<"Il mittente non coincide";
    EXPECT_EQ(msg.getReceiver(),"Seb") <<"Il destinatario non coincide";
    ASSERT_EQ(msg.getRead(), false);
    ASSERT_EQ(msg.getText(),"How are you?");
    msg.setIsRead(true);
    ASSERT_EQ(msg.getRead(),true);
}

