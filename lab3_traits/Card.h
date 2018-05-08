//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_CARD_H
#define LAB3_TRAITS_CARD_H


class Card {
public:
    ~Card() = default;
    Card(int value) : value_{value} {}

    int get_value();
private:
    const int value_;
};


#endif //LAB3_TRAITS_CARD_H
