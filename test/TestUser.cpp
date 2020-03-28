#include "gtest/gtest.h"
#include "../User.h"

TEST(User,testUser){
    User andrea("Andrea");
    ASSERT_EQ(andrea.getName(),"Andrea");
    andrea.setName("Sebastian");
    ASSERT_EQ(andrea.getName(),"Sebastian");
}

/*Problemi coi test: adesso clion riconosce l'include di gtest, ma quando provo a eseguire i test
 * vengono riportati errori che non riesco a risolvere...*/