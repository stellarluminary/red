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
            std::cout << text << "\n\n";

            // CODE TO CONTINUE THIS BRANCH HERE
        }
        else if (choice == 2)
        {
            std::string text { "You open the first door and assess your clothing "
                "options for the day. Before deciding, you really ought to get to "
                "the toilet to relieve yourself.\n\n"};
            std::cout << text;

            std::cout << "1: Push open the ajar door.\n";
            std::cout << "2: Open the second closed door.\n\n";
            

            bool cycleThroughChoices { true };
            while (cycleThroughChoices)
            {
                int choice { };
                std::cin >> choice;
                if (choice == 1) 
                {
                    std::string text { "You push open the ajar door and see a toilet,"
                        " sink, and bathtub. You walk to the toilet, sitting down in a"
                        " tired, just-woken-up heap, and go about your business. Now to"
                        " get dressed..\n\n"};
                    std::cout << text;

                    std::string text2 { "You open the second closed door, and a frigid"
                        " breeze from outside whips around and up your pajamas, chilling"
                        " you. Heading back to the closet, you put on a pair of slacks "
                        "and a knitted sweater. You grab a warm woolen cloak and wrap it"
                        " around your shoulders, pulling up the hood to shield your ears"
                        " from the wind. You grab the basket from the stool in the corner"
                        " and head outside.\n\n" };
                    cycleThroughChoices = false;
                }
                else if (choice == 2)
                {
                    std::string text { "You open the second closed door, and a frigid "
                        "breeze from outside whips around and up your pajamas, chilling"
                        " you. Maybe you should rug up before heading out. You need to"
                        " clean yourself up, too, as you've just wet yourself.\n\n" };
                    std::cout << text;

                    std::string text2 { "In a fit of disgust, you push open the ajar door so"
                        " hard that it swings wildly, slamming into the wall. Cringing at the"
                        " sound, you peel off your wet pajamas, tossing them into the sink. "
                        "You start drawing a bath while you hand-wash and hang the sodden "
                        "heap of clothes. Slipping into the warm bath, you luxuriate for a "
                        "few minutes before you remember the basket. You get to work scrubbing"
                        " clean before getting out and drying off. Heading back to the closet,"
                        " you put on a pair of slacks and a knitted sweater. Since it's cold "
                        "outside, you grab a warm woolen cloak and wrap it around your "
                        "shoulders, pulling up the hood to shield your ears from the wind. "
                        "You grab the basket from the stool in the corner and head outside.\n\n" };
                    std::cout << text2;
                    cycleThroughChoices = false;
                }
                else
                {
                    std::string invalid_choice { "You can't be a lazy daisy all day. Enter 1 or 2, "
                        "corresponding to what you want to do.\n\n" };
                    std::cout << invalid_choice; 
                    ;
                    // cycle back through choices
                }
            }
        }
        std::string text2 { "Despite the chill, the air is crisp and clear. You breathe "
            "deeply, savoring the fresh scent of nature around you. In the distance, you"
            " hear songbirds going about their merry morning gossip. A squirrel, spooked"
            " by your appearance, dashes across the path and scurries up a tree. Soon, "
            "you come to a fork in the road.\n\n" };
        std::cout << text2;

        std::string text3 { "The path to the left leads uphill. Groves of redwood trees"
            " shade the groundcover of ferns and duff, darkening everything.\n\n" };
        std::cout << text3;

        std::string text4 { "The path to the right leads downhill. Moss and lichen "
            "appear to be thriving in the moist, foggy environment.\n\n" };
        std::cout << text4;

        std::string text5 { "The path straight ahead is level and flat. The bright sun "
            "makes the path look welcoming, but you don't have any sunscreen.\n\n" };
        std::cout << text5;

        std::cout << "Which path do you take?\n\n";

        std::cout << "1: The shady path to the left that leads uphill.\n";
        std::cout << "2: The foggy path to the right that leads downhill.\n";
        std::cout << "3: The sunny, flat path straight ahead.\n\n";

        int choice2 {};
        std::cin >> choice2;
        
        if (choice2 == 1)
        {
            // Uphill path
        }
        else if (choice2 == 2)
        {

        }
        else if (choice2 == 3)
        {
            // Downhill path
        }
        else
        {
            std::string invalid_choice { "You can't be a lazy daisy all day. Enter "
                "1, 2, or 3, corresponding to what you want to do.\n\n" };
            // cycle back through choices
        }


        gameRunning = false;
    }

    return 0;
}
