#include <iostream>
#include <string>

void makeChoice(std::string text1, std::string text2)
{
    bool whileTrueVar = { true };
    while (whileTrueVar) 
    {
        int playerChoice = {};
        std::cin >> playerChoice;
        if (playerChoice == 1)
        {
            std::cout << text1;
            whileTrueVar = false;
        }
        else if (playerChoice == 2)
        {
            std::cout << text2;
            whileTrueVar = false;
        }
        else
        {
            std::string invalid_choice {"You can't be a lazy daisy all day. Enter 1 or 2, "
                        "corresponding to what you want to do.\n\n"};
            std::cout << invalid_choice;
        }
    }

}

void makeChoice(std::string text1, std::string text2, std::string text3)
{
    bool whileTrueVar = { true };
    while (whileTrueVar) 
    {
        int playerChoice = {};
        std::cin >> playerChoice;
        if (playerChoice == 1)
        {
            std::cout << text1;
            whileTrueVar = false;
        }
        else if (playerChoice == 2)
        {
            std::cout << text2;
            whileTrueVar = false;
        }
        else if (playerChoice == 3)
        {
            std::cout << text3;
            whileTrueVar = false;
        }
        else
        {
            std::string invalid_choice {"You can't be a lazy daisy all day. Enter 1 or 2, "
                        "corresponding to what you want to do.\n\n"};
            std::cout << invalid_choice;
        }
    }

}
