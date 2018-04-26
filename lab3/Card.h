//
// Created by viktor on 2018-04-26.
//

#ifndef LAB3_CARD_H
#define LAB3_CARD_H


class Card {
public:
    Card(int value): value_{value}{}
    int get_value();
private:
    int value_;
};


#endif //LAB3_CARD_H
