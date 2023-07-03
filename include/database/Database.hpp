#pragma once

#include <iostream>

class Database
{
public:
    static Database* getInstance(const std::string& value);
    Database(Database&) = delete;
    void operator=(const Database&) = delete;
    std::string getUrl();
private:
    explicit Database(std::string url);
    static Database* database;
    const std::string url;
};