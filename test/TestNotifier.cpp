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

/*Problemi coi test: adesso clion riconosce l'include di gtest, ma quando provo a eseguire i test
 * vengono riportati errori che non riesco a risolvere...*/