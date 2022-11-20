#include <iostream>
#include <string>
#include <algorithm>

std::string word_toUpper(std::string s)
{
    std::for_each(s.begin(), s.end(), [](char & c)
    {
        c = ::toupper(c);
    });

    return s;
}

std::string word_toLower(std::string s)
{
    std::for_each(s.begin(), s.end(), [](char & c)
    {
        c = ::tolower(c);
    });

    return s;
}

bool is_word_same(std::string s, std::string s2)
{
    std::for_each(s.begin(), s.end(), [](char & c)
    {
        c = ::tolower(c);
    });

    std::for_each(s2.begin(), s2.end(), [](char & c)
    {
        c = ::tolower(c);
    });

    if(s == s2)
        return true;

    return false;
}