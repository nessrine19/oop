#pragma once

#include "MathException.h"


/**
 * @todo write docs
 */
class OverflowException :  public MathException
{
public:
    /**
     * Default constructor
     */
    OverflowException(std::string msg="OverflowException");


};
