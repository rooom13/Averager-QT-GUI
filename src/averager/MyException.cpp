#ifndef _EXCEPTIONS_HXX
#define _EXCEPTIONS_HXX

class InvalidDateFormat :public std::exception
{
    public:
        const char * what() const throw()
        {
            return  "Invalid date format";
        }
};





#endif

