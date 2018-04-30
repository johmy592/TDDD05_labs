//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_CONTEXT_H
#define LAB3_TRAITS_CONTEXT_H


class Context {
public:
    Context();
    virtual ~Context();
public:
    static Context *currentContext_;

private:
    Context *parentContext_;
};


#endif //LAB3_TRAITS_CONTEXT_H
