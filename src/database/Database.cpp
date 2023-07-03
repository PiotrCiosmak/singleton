#include <utility>

#include "../../include//database/Database.hpp"

Database* Database::database = nullptr;

Database::Database(std::string url) : url{std::move(url)}
{}

Database* Database::getInstance(const std::string& value)
{
    if (database == nullptr)
    {
        database = new Database(value);
    }
    return database;
}

std::string Database::getUrl()
{
    return url;
}
