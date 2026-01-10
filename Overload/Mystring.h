#ifndef _MYSTRING_H
#define _MYSTRING_H_
#include <iostream>
class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    private:
        char *str; // pointer to a char[] that holds a C-style string
    public:
        Mystring();         // no-args constructor
        Mystring(const char *s);  // Overloaded const
        Mystring(const Mystring &source); // copy constructor - deep copy
        Mystring(Mystring &&source); // move constructor
        ~Mystring();                // Destructor

        Mystring &operator=(const Mystring &rhs); // copy assignment
        Mystring &operator=(Mystring &&rhs); // move assignment

        void display() const;
        int get_length() const;  // getters
        const char *get_str() const;
};

#endif