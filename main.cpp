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
            std::string downhill { "Eager for a small hike before your arrival, you turn right."
                " You'll be only half an hour or so later than you planned. You don't think "
                "Nan will mind too much. The fog seems thicker and darker than usual for some"
                " reason, but you can't quite put your finger on what. Taking a firmer grip on"
                " the basket and tightening your cloak, you quicken your pace.\n\n"
                "'Hello, little girl,' says a cool voice.\n\n"
                "Gasping and practically jumping out of your skin, you whip around to face a "
                "tall, skinny man standing next to a cart of leather goods. You could have sworn"
                " he wasn't there a moment ago—you walked right past him and would have seen him.\n\n"
                "What do you say?\n\n"
             };
            std::cout << downhill;
            std::cout << "1. Hello, of course. It would be rude not to!\n";
            std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";
            bool cycleThroughChoices { true };
            while (cycleThroughChoices)
            {
                int choice3 {};
                std::cin >> choice3;
                if (choice3 == 1)
                {
                    std::string hiToBill { "'Hello, Sir,' you finally get out.\n\n"
                        "'And what brings you 'round this neck of the woods?'\n\n"
                        "'Lunch with my friend.'\n\n"
                        "'Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' "
                        "Might you be interested in some of my wares? Your poor cloak looks tired"
                        " and ratty. You would look divine in a brand new leather coat.'\n\n"
                        "'No, thank you, Bill. I really must be going.'\n\n"
                        "'Very well. I wouldn't be surprised to see you as a new leather coat soon.'\n\n"
                        "'What?'\n\n"
                        "'I wouldn't be surprised to see you in a new leather coat soon. Good day, "
                        "little girl.'\n\n"
                        "'Good day.' Perturbed, you turn around and head back to the fork in the road.\n\n"
                     };
                    std::cout << hiToBill;
                    cycleThroughChoices = false;
                }
                else if (choice3 == 2)
                {
                    std::string sayNothing { "In too much shock, you say nothing, blinking.\n\n"
                    "'What brings you 'round this neck of the woods?'\n\n"
                    "You remain silent.\n\n"
                    "The leather dealer smirks at you, 'Wolf got your tongue?'\n\n"
                    "Stammering, you finally manage to speak. 'No, sir. I'm having lunch with my friend.'\n\n"
                    "'ovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be"
                    " interested in some of my wares? Your poor cloak looks tired and ratty. You would "
                    "look divine in a brand new leather coat.'\n\n"
                    "'No, thank you, Bill. I really must be going.'\n\n"
                    "'Very well. I wouldn't be surprised to see you as a new leather coat soon.'\n\n"
                    "'What?'\n\n"
                    "'I wouldn't be surprised to see you in a new leather coat soon. Good day, little"
                    " girl.'\n\n"
                    "'Good day.' Perturbed, you turn around and head back to the fork in the road.\n\n"
                    };
                    std::cout << sayNothing;
                    cycleThroughChoices = false;
                }
                else
                {
                    std::string invalid_choice { "You can't be a lazy daisy all day. Enter 1 or 2, "
                        "corresponding to what you want to do.\n\n" };
                    std::cout << invalid_choice; 
                }
            }
            std::cout << "Which path do you take now?\n\n";
            std::cout << "1: The shady path to the left that leads uphill.\n";
            std::cout << "2: The sunny, flat path straight ahead.\n\n";

            bool cycleThroughPaths { true };
            while (cycleThroughPaths)
            {
                int path {};
                std::cin >> path;

                if (path == 1)
                {
                    std::string uphill2 { "You head uphill to the stream in the"
                        " redwood forest to splash some water on your face. That "
                        "Bill person weirded you out to no end. The moisture from the "
                        "fog feels invigorating, calming your nerves already. Reaching "
                        "the stream, you put the basket down on a tree stump and kneel "
                        "to scoop up some cool water, splashing it on your face and "
                        "smoothing down your hair. Over the sound of the stream, you can"
                        " hear someone chopping wood nearby. Pauline Bunyan must be at work."
                        " Refreshed, you decide to head towards Pauline to say hi.\n\n"
                        "Coming upon Pauline, she lowers her axe and waves at you.\n\n"
                        "You wave back, 'Hello there!'\n\n"
                        "'Hi! What brings you around this neck of the woods?'\n\n"
                        "'I\'m visiting Nan for lunch,'you reply, raising the basket to "
                        "indicate you have it with you. 'Would you like to join us? We"
                        " have plenty to share.'\n\n"
                        "'Tempting, but I want to make sure I get all my chopping done."
                        " Thanks for offering, though!'\n\n"
                        "'No worries—more for us then!' You break into a wide smile, and "
                        "you both laugh.\n\n"
                    };
                    std::cout << uphill2;
                    cycleThroughPaths = false;
                }
                else if (path == 2)
                {
                    std::string flat2 {"You head out along the flat path. You need a bit "
                        "of sun on your face. That Bill person weirded you out to no end."
                        " The moisture from the fog feels invigorating, calming your nerves"
                        " already. Reaching the stream, you put the basket down on a tree stump"
                        " and kneel to scoop up some cool water, splashing it on your face and"
                        " smoothing down your hair. Over the sound of the stream, you can hear "
                        "someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed,"
                        " you decide to head towards Pauline to say hi.\n\n"
                        "Coming upon Pauline, she lowers her axe and waves at you.\n\n"
                        "You wave back, 'Hello there!'\n\n"
                        "'Hi! What brings you around this neck of the woods?'\n\n"
                        "'I\'m visiting Nan for lunch,' you reply, raising the basket to indicate"
                        " you have it with you. 'Would you like to join us? We have plenty to share.'\n\n"
                        "'Tempting, but I want to make sure I get all my chopping done. Thanks for"
                        " offering, though!'\n\n"
                        "'No worries—more for us then!' You break into a wide smile, and you both laugh.\n\n"
                    };
                    std::cout << flat2;
                    cycleThroughPaths = false;
                }
                else
                {
                    std::string invalid_choice { "You can't be a lazy daisy all day. Enter 1 or 2, "
                        "corresponding to what you want to do.\n\n" };
                    std::cout << invalid_choice; 
                }
            }
            std::cout << "Tell Pauline about Buffalo Bill?\n\n";
            std::cout << "1: Tell Pauline.\n";
            std::cout << "2: Don\'t tell Pauline.\n\n";
            bool tellPauline { true };
            while (tellPauline)
            {
                int choice4 {};
                std::cin >> choice4;
                if (choice4 == 1)
                {
                    std::string talkAboutBill { "You remember Pauline mentioning that her leather axe holster"
                        " was wearing out and she'd need a new one soon. You decide to tell her about Bill,"
                        " despite his creepiness. 'I passed by a leather dealer earlier. He called himself"
                        " 'Buffalo Bill.''\n\n"
                        "'Weird name,' Pauline says, making a face.\n\n"
                        "'I know, right? He seemed super creepy, but I know you've been looking for a new "
                        "holster for your axe. He might have something that will work.'\n\n"
                        "'Thanks! I might check him out.'\n\n"
                        "'Well, I should be going. Have a good day!'\n\n"
                        "'You too! Say hi to Nan for me.'\n\n"
                        "'Will do!'\n\n"
                    };
                    std::cout << talkAboutBill;

                    std::string reachNan { "Breaking into a light jog, you venture back to the crossroads"
                        " and take the last path. You're eager to see Nan and eat some lunch; all that"
                        " hiking and chatting built up an appetite, and now you're running a little bit"
                        " late. Unbeknownst to you, Bill had been following you the whole time.\n\n" 
                        "Reaching Nan's, you knock on the door. Nan opens the door and greets you with"
                        " a warm hug. 'It's so good to see you, but what kept you, my little Red Robin?'\n\n"
                        "'I went for a little bit of a hike and ran into a creepy leather dealer and "
                        "also Pauline. She says 'Hi' by the way.'\n\n"
                        "'What a busy morning! Well, you're here now; let's eat the lunch you bro—' "
                        "Before Nan can finish, Bill breaks down the door, brandishing a rope fashioned "
                        "into a noose. He kicks Nan squarely in the chest, causing her to fall to the floor,"
                        " hitting her head and knocking her unconscious.\n\n"
                    };
                    std::cout << reachNan;
                    tellPauline = false;
                }
                else if (choice4 == 2)
                {
                    std::string doNotTalkAboutBill { "You remember Pauline mentioning that her leather axe"
                        " holster was wearing out and she'd need a new one soon. That Bill guy was super "
                        "creepy, though. You decide not to mention him.\n\n" 
                        "'Well, I should be going. Have a good day!'\n\n"
                        "'You too! Say hi to Nan for me.'\n\n"
                        "'Will do!'\n\n"
                        "Breaking into a light jog, you venture back to the crossroads and take the last "
                        "path. You're eager to see Nan and eat some lunch; all that hiking and chatting "
                        "built up an appetite, and now you're running a little bit late. Unbeknownst to you,"
                        " Bill had been following you the whole time.\n\n"
                        "Reaching Nan's, you knock on the door. Nan opens the door and greets you with a "
                        "warm hug. 'It's so good to see you, but what kept you, my little Red Robin?'\n\n"
                        "'I went for a little bit of a hike and ran into a creepy leather dealer and also"
                        " Pauline. She says 'Hi' by the way.'\n\n"
                        "'What a busy morning! Well, you're here now; let's eat the lunch you bro—' Before"
                        " Nan can finish, Bill breaks down the door, brandishing a rope fashioned into a"
                        " noose. He kicks Nan squarely in the chest, causing her to fall to the floor, "
                        "hitting her head and knocking her unconscious.\n\n"
                    };
                    std::cout << doNotTalkAboutBill;
                    tellPauline = false;
                }
                else
                {
                    std::string invalid_choice { "You can't be a lazy daisy all day. Enter 1 or 2, "
                        "corresponding to what you want to do.\n\n" };
                    std::cout << invalid_choice; 
                }
            }


            
            
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
