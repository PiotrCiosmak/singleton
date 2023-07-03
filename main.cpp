#include <iostream>
#include "include/database/Database.hpp"

int main()
{
    Database* first_database = Database::getInstance("https://oracle.org");
    Database* second_database = Database::getInstance("https://google.com");
    std::cout << first_database->getUrl() << std::endl;
    std::cout << second_database->getUrl() << std::endl;
}
