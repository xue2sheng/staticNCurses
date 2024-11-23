//
// Created by user on 23/11/24.
//
#include "SillyLib.h"
#include "SillyLIb.hpp"

SillyLib::SillyLib(Collection& collection) : _collection(collection)
{}

bool SillyLib::find(const std::string &user, std::pair <std::string, std::string> &item) const
{
    const auto it = _collection.find(user);
    if (it == _collection.end()) {
        return false;
    }
    item = it->second;
    return true;
}

static Collection _collection = {};
static SillyLib _sillyLib(_collection);

void SillyLib_create()
{
    _collection["user000"] = {"configuration000", "This is a brief description of the configuration000"};
}

void SillyLib_destroy()
{
    _collection.clear();
}

int SillyLib_find(const char* user, char* configuration, char* description)
{
    std::pair <std::string, std::string> item;
    if (_sillyLib.find(user, item)) {
        auto &[cfg, desc] = item; // Structured binding to access first and second element of pair
        strncpy(configuration, cfg.c_str(), MAX_SIZE - 1);
        configuration[MAX_SIZE - 1] = '\0';  // Ensure null termination
        strncpy(description, desc.c_str(), MAX_SIZE - 1);
        description[MAX_SIZE - 1] = '\0';  // Ensure null termination
        return TRUE;
    } else {
        // Handle user not found scenario
        configuration[0] = '\0';
        description[0] = '\0';
        return FALSE;
    }
}
