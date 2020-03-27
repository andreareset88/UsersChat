#include "gtest/gtest.h"
#include "../User.h"

TEST(User,testUser){
    User andrea("Andrea");
    ASSERT_EQ(andrea.getName(),"Andrea");
    andrea.setName("Sebastian");
    ASSERT_EQ(andrea.getName(),"Sebastian");
}
