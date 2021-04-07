//#include "DeckOfCards.h"
#include <algorithm>
#include <iostream>
    DeckOfCards d = DeckOfCards();
        void displayDeck(std::vector<DeckOfCards::Card> const &cardDeck){
            for(DeckOfCards::Card c : cardDeck){
                std::cout << c.face<< " " << c.suit << std::endl;
            }
        }


        void settingDeck(std::string face[], std::string suit[], int MAX_SUIT_COUNT, int MAX_FACE_COUNT){
            for(int i = 0; i < MAX_SUIT_COUNT; i++){
                    for(int j = 0; j <MAX_FACE_COUNT; j++){
                        DeckOfCards::Card card = {suit[i], face[j]};
                        d.cardDeck.push_back(card);
                    }
                }
        }

        void settingBestHand(DeckOfCards::Card card){
            d.bestHand.push_back(card);
        }

        std::vector<DeckOfCards::Card> initializingDeck(std::string face[], std::string suit[], int MAX_FACE_COUNT, int MAX_SUIT_COUNT){
            d.cardDeck.clear();
            d.bestHand.clear();
            settingDeck(face, suit, MAX_SUIT_COUNT, MAX_FACE_COUNT);
            std::random_shuffle(std::begin(d.cardDeck),std::end(d.cardDeck));
            displayDeck(d.cardDeck);
            return d.cardDeck;
        }
        std::vector<DeckOfCards::Card> TopSuit(std::vector<DeckOfCards::Card> cardDeck){
            for(DeckOfCards::Card c : cardDeck){
                std::cout << c.suit << std::endl;
                return cardDeck;
            }
            return cardDeck;
        }