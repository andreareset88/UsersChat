#include "gtest/gtest.h"
#include "../Chat.h"

User andrea("Andrea");
User charles("Charles");

TEST(Chat,testNames){
    Chat chat(andrea,charles);
    ASSERT_EQ(chat.getMyProfile(),"Andrea") <<"I profili sono diversi";
    ASSERT_EQ(chat.getOtherProfile(),"Charles") <<"I profili sono diversi";
}

TEST(Chat,testMethods){
    Message message1("Andrea","Charles","Hi Charles, let's win this championship!");
    Message message2("Charles","Andrea","Hi Andrea, I'll do my best to win, I promise!");
    Message message3("Charles","Sebastian","Stay focused seb");
    Chat chat(andrea,charles);
    chat.addMessage(message1);
    ASSERT_EQ(chat.last(),message1);
    ASSERT_THROW(chat.read(2),out_of_range);
    EXPECT_THROW(chat.read(0),out_of_range) << "Non viene lanciata nessuna eccezione";// The test will fail...
    EXPECT_THROW(chat.addMessage(message2),invalid_argument) <<"Non viene lanciata nessuna eccezione";
}

