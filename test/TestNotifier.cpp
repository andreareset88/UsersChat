#include "gtest/gtest.h"
#include "../Notifier.h"

TEST(Notifier,testOnline){
    User andrea("Andrea");
    User charles("Charles");
    Chat chat(andrea,charles);
    Notifier notifier(false,&chat);
    ASSERT_FALSE(notifier.isOnline());
    notifier.setOnline(true);
    ASSERT_TRUE(notifier.isOnline());
}

