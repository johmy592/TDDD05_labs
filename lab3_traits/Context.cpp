//
// Created by johannes on 4/30/18.
//

#include "Context.h"

Context::Context() {
    parentContext_ = currentContext_;
    currentContext_ = this;
}

Context::~Context() {
    currentContext_ = parentContext_;
}

Context *Context::currentContext_ = nullptr;