#include "war_h.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace hirsch_war;

int main()
{
  //establish vector
  std::vector<Card> deck;
  //requests change in capacity
  deck.reserve(Card::deck_count);

  //sets cards
  for(int cval = 0; cval < Card::deck_count; ++cval)
    {
      deck.push_back(Card(cval));
    }

    //first card (Ace of Clubs) prints 0 of 0
    std::cout << "First card is "
              << deck[0].getrank()
              << " of "
              << deck[0].getsuit()
              << std::endl;

    //52nd card (King of Hearts) prints 12 of 3
    std::cout << "52nd card is "
              << deck[51].getrank()
              << " of "
              << deck[51].getsuit()
              << std::endl;

    std::cout << "Would you like to shuffle? (y/n)" << std::endl;
    char x;
    std::cin >> x;

    if(x = 'y')
    {
      std::cout << "Now shuffling..." << std::endl;
      std::random_shuffle(deck.begin(), deck.end());
      std::cout << "Deck shuffled." << std::endl;

      std::cout << "First card now is "
                << deck[0].getrank()
                << " of "
                << deck[0].getsuit()
                << std::endl;

      std::cout << "52nd card now is "
                << deck[51].getrank()
                << " of "
                << deck[51].getsuit()
                << std::endl;
    }
    else if(x = 'n')
      std::cout << "K... Bye" << std::endl;

}
