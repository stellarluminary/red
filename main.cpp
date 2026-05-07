#include <iostream>
#include <string>

bool gameRunning {true};

std::string intro { "The rising sun slowly brightens your bedroom, lulling you from" 
    "your dreams. Reluctantly, you pull yourself away from your slumber, opening your " 
    "eyes a smidgen to help reacquaint yourself with the waking world. Blinking a few " 
    "times to clear the sleep matter from your eyes and let your pupils adjust, you see" 
    "a basket sitting on a small stool in the corner of the room. Pulling back the " 
    "bedcovers and sitting up, you stretch your arms high up into the air, accompanied" 
    "by a yawn.\n\nBesides the basket on the stool and the bed you’re in, the room has" 
    " three doors. Two of the doors are closed. The third is open a couple of inches.\n\n"
    "What would you like to do (enter 1, 2, or 3)?\n\n"
    "1: Push open the ajar door.\n"
    "2: Open the first closed door.\n"
    "3: Open the second closed door.\n"
    "0: To quit the game.\n"
};

int main() {

    while (gameRunning) {
        std::cout << intro;
        int choice {};
        std::cin >> choice;

        if (choice == 1) 
        {
            std::string text { "You push open the ajar door and see a toilet, sink, and"
                " bathtub. You walk to the toilet, sitting down in a tired, just-woken-up "
                "heap, and go about your business. Now to get dressed." };
            std::cout << text << "\n";

            // CODE TO CONTINUE THIS BRANCH HERE
        }
        else if (choice == 2)
        {
            std::string text { "You open the first door and assess your clothing "
                "options for the day. Before deciding, you really ought to get to "
                "the toilet to relieve yourself."};
            std::cout << text << "\n";
        }
        else if (choice == 3)
        {
            std::string text { "You open the second closed door, and a frigid breeze"
                " from outside whips around and up your pajamas, chilling you. Maybe "
                "you should rug up before heading out. You really ought to get to the"
                " toilet to relieve yourself, too." };
            std::cout << text << "\n";
        }
        else if (choice == 0)
        {
            std::cout << "Thank you for playing!\n";
        }

        gameRunning = false;
    }

    return 0;
}
