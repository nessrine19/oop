#pragma once

#include "MathException.h"


/**
 * @todo write docs
 */
class DivideByZeroException :  public MathException
{
public:
    /**
     * Default constructor
     */
    DivideByZeroException(std::string msg = "DivideByZeroException");


};
