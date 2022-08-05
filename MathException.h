#pragma once

#include <exception>
#include <string>

/**
 * @todo write docs
 */
class MathException : public std::exception
{
public:
    /**
     * Default constructor
     */
    MathException(std::string msg);

    const char* what() const noexcept;

protected:
    const std::string message;
};

