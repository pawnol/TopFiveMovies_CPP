/*
Top Five Movies
Pawelski
5/10/2022
Please follow the instructions on the activity guide!
*/

#include <iostream>
#include <array>

int main()
{
    std::array<std::string, 5> top_five_movies = { "It Happened One Night",
        "Citizen Kane", "The Wizard of Oz", "Modern Times", "Black Panther" };
    std::cout << "1. " << top_five_movies[0] << std::endl;
    std::cout << "2. " << top_five_movies[1] << std::endl;
    std::cout << "3. " << top_five_movies[2] << std::endl;
    std::cout << "4. " << top_five_movies[3] << std::endl;
    std::cout << "5. " << top_five_movies[4] << std::endl;

    std::cout << std::endl;
    for (int i = 0; i < top_five_movies.size(); i++)
    {
        std::cout << i + 1 << ". " << top_five_movies[i] << std::endl;
    }
    return 0;
}
