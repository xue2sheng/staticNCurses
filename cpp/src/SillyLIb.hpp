//
// Created by user on 23/11/24.
//

#ifndef STATICNCURSES_SILLYLIB_HPP
#define STATICNCURSES_SILLYLIB_HPP

#include <string>
#include <unordered_map>
#include <utility>

using Item = std::pair<std::string, std::string>;
using Collection = std::unordered_map<std::string, Item>;

class SillyLib
{
public:
    explicit SillyLib(Collection& collection);
    bool find(const std::string& user, std::pair<std::string, std::string>& item) const;
private:
    Collection& _collection;
};
#endif //STATICNCURSES_SILLYLIB_HPP
