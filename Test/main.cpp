#include "../src/DeckOfCards.h"
#include "../src/Player.h"

#include </gtest/gtest.h>

TEST(DeckTest, DeckOfCards::Card c){
    DeckOfCards d = DeckOfCards();
    ASSERT_EQ(c, d.TopSuit(c));
}

TEST(PlayerHand, 5){
    Player p = Player();
    ASSERT_EQ(5, p.RetHandSize());
}

TEST(PlayCard, DeckOfCards::Card c){
    Player p = Player();
    DeckOfCards::Card secondBest;
    ASSERT_EQ(c, p.PlayCard(c,secondBest));
}

int main(int argc, char ** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}