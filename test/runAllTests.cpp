#include "gtest/gtest.h"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/*Problemi coi test: adesso clion riconosce l'include di gtest, ma quando provo a eseguire i test
 * vengono riportati errori che non riesco a risolvere...*/
