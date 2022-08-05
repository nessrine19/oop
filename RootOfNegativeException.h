#pragma once

#include "MathException.h"


/**
 * @todo write docs
 */
class RootOfNegativeException :  public MathException
{
public:
    /**
     * Default constructor
     */
    RootOfNegativeException(std::string msg="RootOfNegativeException");


};
