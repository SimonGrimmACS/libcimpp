#ifndef Modem_h
#define Modem_h

#include "base.h"

class Modem : public base
{
public:
    Modem();
    using base::base;
	int cost;

    virtual void print();
};

#endif /* Modem_h */
