#include "MathException.h"

MathException::MathException(std::string msg) : message(msg)
{

}

const char* MathException::what() const noexcept
{
    return message.c_str();
}
