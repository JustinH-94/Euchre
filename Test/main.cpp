#include "../src/DeckOfCards.h"
#include "../src/Player.h"

#include </gtest/gtest.h>

TEST(DeckTest, DeckOfCards::Card c){
    DeckOfCards d = DeckOfCards();
    ASSERT_EQ(c, d.TopSuit(c));
}

int main(int argc, char ** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}