#include <utility>


namespace hirsch_war
{
  //mostly derived from class notes on github
    class Card
    {
    public:
      enum Rank
        {
          Ace,
          Two,
          Three,
          Four,
          Five,
          Six,
          Seven,
          Eight,
          Nine,
          Ten,
          Jack,
          Queen,
          King,
          rank_count
        };


      enum Suit
        {
          Clubs,
          Spades,
          Diamonds,
          Hearts,
          suit_count
        };


      //looked at https://stackoverflow.com/questions/234388/generating-a-deck-of-cards
      //to get ideas
      Card(int index)
        : s(static_cast<Suit>(index / rank_count))
        , r(static_cast<Rank>(index % rank_count))
        {}


      //sets count of deck to 52
      static int const deck_count = (suit_count * rank_count);

      //getters
      Suit getsuit() const {return s;}
      Rank getrank() const {return r;}


    private:
          //what each object contains
          Rank r;
          Suit s;

    };

};
