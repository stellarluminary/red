#include <iostream>
#include <string>
#include "makeChoice.h"


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
};

int main() {
    std::cout << intro;
    int choice {};

    bool validInput { true };

    while (validInput) {
        std::cin >> choice;

        if (choice == 1) 
        {
            std::string morning { "You push open the ajar door and see a toilet, sink, and"
                " bathtub. You walk to the toilet, sitting down in a tired, just-woken-up "
                "heap, and go about your business. Now to get dressed.\n\n"
                "What would you like to do?\n\n"
                "1: Open the first closed door.\n"
                "2: Open the second closed door." 
            };
            std::cout << morning << "\n\n";

            // CODE TO CONTINUE THIS BRANCH HERE
            int choice {};
            while (validInput) 
            {
                std::cin >> choice;
                std::cout << "\n";

                if (choice == 1) 
                {
                    std::string text {"You open the first door and assess your clothing options for the day. Before deciding, you should check the weather outside.\n"
            "You open the second closed door, and a frigid breeze from outside whips around and up your pajamas, chilling you. Heading back to the closet,\n" 
            "you put on a pair of slacks and a knitted sweater. You grab a warm woolen cloak and wrap it around your shoulders, pulling up the hood to\n" 
            "shield your ears from the wind. You grab the basket from the stool in the corner and head outside.\n\n"
                    };
                    std::cout << text << std::endl;

                    validInput = false; 
                }
                else if (choice == 2)
                {
                    std::string text {"You open the second door and a frigid breeze from outside whips around and up your pajamas, chilling you. Maybe you should rug up before heading out.\n"
            "You open the first closed door and assess your clothing options for the day. You put on a pair of slacks and a knitted sweater. Since it's cold outside, you grab a warm\n"
            "woolen cloak and wrap it around your shoulders, pulling up the hood to shield your ears from the wind. You grab the basket from the stool in the corner and head outside.\n\n"
            };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else
                { 
                    std::string text {"You can't be a lazy daisy all day.\n" 
                    "Enter 1 or 2, corresponding to what you want to do.\n" };
                    std::cout << text << std::endl;
                
                }
            }
        }
        else if (choice == 2)
        {
            std::string firstDoor { "You open the first door and assess your clothing "
                "options for the day. Before deciding, you really ought to get to "
                "the toilet to relieve yourself.\n\n"
                "1: Push open the ajar door.\n"
                "2: Open the second closed door.\n\n"

            };
            std::cout << firstDoor;            

            std::string ajarDoor { "You push open the ajar door and see a toilet,"
                " sink, and bathtub. You walk to the toilet, sitting down in a"
                " tired, just-woken-up heap, and go about your business. Now to"
                " get dressed..\n\n"
                "You open the second closed door, and a frigid"
                " breeze from outside whips around and up your pajamas, chilling"
                " you. Heading back to the closet, you put on a pair of slacks "
                "and a knitted sweater. You grab a warm woolen cloak and wrap it"
                " around your shoulders, pulling up the hood to shield your ears"
                " from the wind. You grab the basket from the stool in the corner"
                " and head outside.\n\n"
            };

            std::string closedDoor { "You open the second closed door, and a frigid "
                "breeze from outside whips around and up your pajamas, chilling"
                " you. Maybe you should rug up before heading out. You need to"
                " clean yourself up, too, as you've just wet yourself.\n\n" 
                "In a fit of disgust, you push open the ajar door so"
                " hard that it swings wildly, slamming into the wall. Cringing at the"
                " sound, you peel off your wet pajamas, tossing them into the sink. "
                "You start drawing a bath while you hand-wash and hang the sodden "
                "heap of clothes. Slipping into the warm bath, you luxuriate for a "
                "few minutes before you remember the basket. You get to work scrubbing"
                " clean before getting out and drying off. Heading back to the closet,"
                " you put on a pair of slacks and a knitted sweater. Since it's cold "
                "outside, you grab a warm woolen cloak and wrap it around your "
                "shoulders, pulling up the hood to shield your ears from the wind. "
                "You grab the basket from the stool in the corner and head outside.\n\n"
            };
            
            makeChoice(ajarDoor, closedDoor);
            validInput = false;


        }
        else if (choice == 3)
        {
            // CODE TO CONTINUE THIS BRANCH HERE
            validInput = false;

        }
        else
        {
            std::string invalid_choice {"You can't be a lazy daisy all day. Enter 1 or 2, "
            "corresponding to what you want to do.\n\n"};
            std::cout << invalid_choice;
        }
    }

    std::string outside { "Despite the chill, the air is crisp and clear. You breathe "
            "deeply, savoring the fresh scent of nature around you. In the distance, you"
            " hear songbirds going about their merry morning gossip. A squirrel, spooked"
            " by your appearance, dashes across the path and scurries up a tree. Soon, "
            "you come to a fork in the road.\n\n" 
            "The path to the left leads uphill. Groves of redwood trees"
            " shade the groundcover of ferns and duff, darkening everything.\n\n"
            "The path to the right leads downhill. Moss and lichen "
            "appear to be thriving in the moist, foggy environment.\n\n"
            "The path straight ahead is level and flat. The bright sun "
            "makes the path look welcoming, but you don't have any sunscreen.\n\n"
            "Which path do you take?\n\n"
            "1: The shady path to the left that leads uphill.\n"
            "2: The foggy path to the right that leads downhill.\n"
            "3: The sunny, flat path straight ahead.\n\n"
        };

    std::cout << outside;
    bool whileTrueVar2 { true };
    int choice2 {};

    while (whileTrueVar2) 
    {
        std::cin >> choice2;
        
        if (choice2 == 1)
        {
            // Uphill path
            std::string uphill {
            "Eager for a small hike before your arrival, you turn left. You'll be only half an hour or so later than you planned. You don't think Nan will mind too much.\n" 
            "The redwood forest seems thicker and darker than usual for some reason, but you can't quite put your finger on what. Taking a firmer grip on the basket"
            " and tightening your cloak, you quicken your pace.\n\n"
            // delay //
            "\033[31m\"Hello, little girl,\"\033[0m says a cool voice.\n\n"
            "Gasping and practically jumping out of your skin, you whip around to face a tall, skinny man standing next to a cart of leather goods. You" 
            " could have sworn he wasn't there a moment ago—you walked right past him and would have seen him.\n\n"
            // delay //
            "What do you say?\n"
            "1. Hello, of course. It would be rude not to!\n"
            "2. Nothing. You're not supposed to talk to strangers.\n"
            // delay //
            };
            std::cout << uphill;

            // void kianaspath() 
            // {
                validInput = true;
                int kChoice {};
                while (validInput) 
                {
                    std::cin >> kChoice;
                    std::cout << "\n";

                    if (kChoice == 1) 
                    {
                        std::string hi {"\033[36m\"Hello, Sir,\"\033[0m you finally get out.\n"
                        // delay //
                        "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n"
                        // delay //
                        "\033[36m\"Lunch with my friend.\"\033[0m\n"
                        // delay //
                         "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me ‘Buffalo Bill.’ Might you be interested in some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                        // delay //
                        "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                        // delay //
                        "\033[31m\"Very well. I wouldn’t be surprised to see you as a new leather coat soon.\"\033[0m\n"
                        // delay //
                        "\033[36m\"What?\"\033[0m\n"
                        // delay //
                        "\033[31m\"I wouldn’t be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
                        // delay //
                        "\033[36m\"Good day.\"\033[0m\n"
                        "Perturbed, you turn around and head back to the fork in the road.\n\n"
                        };
                        std::cout << hi << std::endl;
                        validInput = false; 
                    }
                    else if (kChoice == 2)
                    {
                        std::string meetBill {"In too much shock, you say nothing, blinking.\n"
                        // delay //
                            "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n"
                            // delay //
                            "You remain silent.\n"
                            "The leather dealer smirks at you, \033[31m\"Wolf got your tongue?\"\033[0m\n"
                            "Stammering, you finally manage to speak.\033[36m\"No, sir. I’m having lunch with my friend.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me ‘Buffalo Bill.’ Might you be interested in some of my wares? Your poor cloak looks tired "
                            "and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                            // delay //
                            "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Very well. I wouldn’t be surprised to see you as a new leather coat soon.\"\033[0m\n"
                            // delay //
                            "\033[36m\"What?\"\033[0m\n"
                            // delay //
                            "\033[31m\"I wouldn’t be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
                            // delay //
                            "\033[36m\"Good day.\"\033[0m\n"
                            "Perturbed, you turn around and head back to the fork in the road.\n\n"
                        };
                        std::cout << meetBill << std::endl;
                        validInput = false;    
                    }
                    else
                    { 
                        std::string iv {"You can't be a lazy daisy all day.\n"
                        "Enter 1 or 2, corresponding to what you want to do.\n"
                        };
                        std::cout << iv << std::endl;

                    }
                }   
            
            std::string pathQ {"Which path do you take now?\n\n"
            "1.The foggy path to the right that leads downhill.\n"
            "2.The sunny, flat path straight ahead.\n"
            };
// delay //
            validInput = true;
            std::cout << pathQ;
            int k2Choice {};
            while (validInput) 
            {
                std::cin >> k2Choice;
                std::cout << "\n";

                if (k2Choice == 1) 
                {
                    std::string kPauline {"You head downhill toward the mossy stream to splash some water on your face. That Bill person weirded you out to no end.\n"
                    " The moisture from the fog feels invigorating, calming your nerves already. Reaching the stream, you put the basket down on a tree stump\n"
                    "and kneel to scoop up some cool water, splashing it on your face and smoothing down your hair.\n"
                    "Over the sound of the stream, you can hear someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed, you decide to head towards Pauline to say hi.\n\n"
                    // delay //
                    "Coming upon Pauline, she lowers her axe and waves at you.\n"
                    "You wave back, \033[36m\"Hello there!\"\033[0m\n"
                    "\033[92m\"Hi! What brings you around this neck of the woods?\"\033[0m\n"
                    "\033[36m\"I’m visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
                    "\033[36m\"Would you like to join us? We have plenty to share.\"\033[0m\n"
                    "\033[92m\"Tempting, but I want to make sure I get all my chopping done. Thanks for offering, though!\"\033[0m\n"
                    "\033[36m\"No worries—more for us then!\"\033[0m You break into a wide smile, and you both laugh.\n"
                    //delay//
                    };
                    std::cout << kPauline << std::endl;
                    validInput = false; 
                }
                else if (k2Choice == 2)
                {
                    std::string jPauline {"You head out along the flat path. You need a bit of sun on your face. That Bill person weirded you out to no end.\n"
                    "The moisture from the fog feels invigorating, calming your nerves already. Reaching the stream, you put the basket down on a tree stump\n"
                    "and kneel to scoop up some cool water, splashing it on your face and smoothing down your hair.\n"
                    "Over the sound of the stream, you can hear someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed, you decide to head towards Pauline to say hi.\n\n"
                    // delay //
                    "Coming upon Pauline, she lowers her axe and waves at you.\n"
                    "You wave back, \033[36m\"Hello there!\"\033[0m\n"
                    "\033[92m\"Hi! What brings you around this neck of the woods?\"\033[0m\n"
                    "\033[36m\"I’m visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
                    "\033[36m\"Would you like to join us? We have plenty to share.\"\033[0m\n"
                    "\033[92m\"Tempting, but I want to make sure I get all my chopping done. Thanks for offering, though!\"\033[0m\n"
                    "\033[36m\"No worries—more for us then!\"\033[0m You break into a wide smile, and you both laugh.\n"
                    //delay//
                    };
                    std::cout << jPauline << std::endl;
                    validInput = false; 
                }
                else
                { 
                    std::string inval {"You can't be a lazy daisy all day.\n"
                    "Enter 1 or 2, corresponding to what you want to do.\n"
                    };
                    std::cout << inval << std::endl;
                }
            }
            std::string mention {"Do you mention the leather dealer?\n\n"
            "1.Yes.\n"
            "2.No.\n"
                };
// delay //
            std::cout << mention;
            int aChoice {};
            validInput = true;
            while (validInput) 
            {
                std::cin >> aChoice;
                std::cout << "\n";

                if (aChoice == 1)
                {
                    std::string text {"You remember Pauline mentioning that her leather axe holster was wearing\n"
                    "out and she’d need a new one soon. You decide to tell her about Bill, despite his creepiness.\n"
                    "\033[36m\"I passed by a leather dealer earlier. He called himself 'Buffalo Bill.'\"\033[0m\n"
                    "\033[92m\"Weird name,\"\033[0m Pauline says, making a face.\n"
                    "\033[36m\"I know, right? He seemed super creepy, but I know you’ve been looking for a new holster\n"
                    "for your axe. He might have something that will work.\"\033[0m\n"
                    "\033[92m\"Thanks! I might check him out.\"\033[0m\n"
                    "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you’re running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan’s, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi’ by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you’re here now; let’s eat the lunch you bro—\"\033[0m\n"
                    "Before Nan can finish, Bill breaks down the door, brandishing a rope fashioned into a noose. He kicks Nan squarely in the chest,"
                    "causing her to fall to the floor, hitting her head and knocking her unconscious.\n"
                    // long delay //
                };
                std::cout << text << std::endl;
                validInput = false; 
                }
                else if (aChoice == 2)
                {
                    std::string text {"You remember Pauline mentioning that her leather axe holster was wearing\n"
                    "out and she’d need a new one soon. That Bill guy was super creepy, though. You decide not to mention him.\n\n"
                    "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you’re running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan’s, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[36m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi’ by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you’re here now; let’s eat the lunch you bro—\"\033[0m\n"
                    "Before Nan can finish, Bill breaks down the door, brandishing a rope fashioned into a noose. He kicks Nan squarely in the chest,"
                    "causing her to fall to the floor, hitting her head and knocking her unconscious.\n"
                    // long delay //
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else
                { 
                    std::string text {"You can't be a lazy daisy all day.\n"
                    "Enter 1 or 2, corresponding to what you want to do.\n"
                    };
                    std::cout << text << std::endl;
                }
            }
            validInput = true; 
            std::string text {"What do you do?\n\n"
            "1.Lunge at Bill.\n"
            "2.Check on Nan.\n"
            };
        // delay //
            std::cout << text;
            int gChoice {};
            while (validInput) 
            {
                std::cin >> gChoice;
                std::cout << "\n";

                if (gChoice == 1) 
                {
                    std:: string text {"You lunge at Bill, grasping for the rope, but he’s too quick for you. He dodges your attack, managing to slip the rope\n"
                    "around your neck in the process. \033[31m\"Your skin will make some fine, fine leather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n"
                    "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill’s skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We’d be goners for sure.\"\033[0m\n"
                    "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n"
                    // long delay //
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else if (gChoice == 2)
                {
                    std::string text {"You drop to the floor next to Nan, attempting to revive her so you both can escape. Bill comes up behind you and slips the rope\n"
                    "around your neck. \"Your skin will make some fine, fine leather,\" Bill sneers as he strangles you, your vision going splotchy.\n"
                   "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill’s skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We’d be goners for sure.\"\033[0m\n"
                    "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n"
                    // long delay //
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else
                { 
                    std::string text {"You can't be a lazy daisy all day.\n"
                    "Enter 1 or 2, corresponding to what you want to do.\n"
                    };
                    std::cout << text << std::endl;
                }
            }
            validInput = true; 
                std::string popo {"Should you call the police?\n\n"
                "1.Yes.\n"
                "2.No.\n"
                };
            // delay //
            std::cout << popo;
            int fChoice {};
            while (validInput) 
            {
                std::cin >> fChoice;
                std::cout << "\n";

                if (fChoice == 1) 
                {
                    std:: string text {"You nod, \033[36m\"Yes, the authorities need to know.\"\033[0m\n"
                    "Nan reaches for the telephone and begins to dial 9-1-1.\n"
                    "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n"
                    "Several FBI agents and cops enter the house, guns drawn. A man who clearly is the head of the operation steps forward.\n"
                    "\033[34m\"I’m Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you’ve met ‘Buffalo Bill.’ We’ve been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you’ll be free to go.\"\033[0m\n\n"
                    "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" they all say in unison.\n"
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else if (fChoice == 2)
                {
                    std::string text {"You shake your head, \033[36m\"We can’t call the police. They’d never believe us!\"\033[0m\n"
                    "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n"
                    "Several FBI agents and cops enter the house, guns drawn. A man who clearly is the head of the operation steps forward.\n"
                    "\033[34m\"I’m Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you’ve met ‘Buffalo Bill.’ We’ve been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you’ll be free to go.\"\033[0m\n\n"
                    "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" they all say in unison.\n"
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else
                { 
                    std::string text {"You can't be a lazy daisy all day.\n"
                    "Enter 1 or 2, corresponding to what you want to do.\n"
                    };
                    std::cout << text << std::endl;
                }

            }
            // kianaspath();
            whileTrueVar2 = false;
        
        }
        else if (choice2 == 2)
        {
            std::string downhill { "Eager for a small hike before your arrival, you turn right."
                " You'll be only half an hour or so later than you planned. You don't think "
                "Nan will mind too much. The fog seems thicker and darker than usual for some"
                " reason, but you can't quite put your finger on what. Taking a firmer grip on"
                " the basket and tightening your cloak, you quicken your pace.\n\n"
                "\033[31m\"Hello, little girl,\"\033[0m says a cool voice.\n\n"
                "Gasping and practically jumping out of your skin, you whip around to face a tall, skinny man standing next to a cart of leather goods. You" 
                " could have sworn he wasn't there a moment ago—you walked right past him and would have seen him.\n\n"
                // delay //
                "What do you say?\n"
                "1. Hello, of course. It would be rude not to!\n"
                "2. Nothing. You're not supposed to talk to strangers.\n"
                // delay //
             };
            std::cout << downhill;

            std::string hiToBill {"\033[36m\"Hello, Sir,\"\033[0m you finally get out.\n"
                        // delay //
                        "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n"
                        // delay //
                        "\033[36m\"Lunch with my friend.\"\033[0m\n"
                        // delay //
                         "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me ‘Buffalo Bill.’ Might you be interested in some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                        // delay //
                        "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                        // delay //
                        "\033[31m\"Very well. I wouldn’t be surprised to see you as a new leather coat soon.\"\033[0m\n"
                        // delay //
                        "\033[36m\"What?\"\033[0m\n"
                        // delay //
                        "\033[31m\"I wouldn’t be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
                        // delay //
                        "\033[36m\"Good day.\"\033[0m\n"
                        "Perturbed, you turn around and head back to the fork in the road.\n\n"
                        };            
            
            std::string sayNothing {"In too much shock, you say nothing, blinking.\n"
                        // delay //
                            "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n"
                            // delay //
                            "You remain silent.\n"
                            "The leather dealer smirks at you, \033[31m\"Wolf got your tongue?\"\033[0m\n"
                            "Stammering, you finally manage to speak.\033[36m\"No, sir. I’m having lunch with my friend.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me ‘Buffalo Bill.’ Might you be interested in some of my wares? Your poor cloak looks tired "
                            "and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                            // delay //
                            "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Very well. I wouldn’t be surprised to see you as a new leather coat soon.\"\033[0m\n"
                            // delay //
                            "\033[36m\"What?\"\033[0m\n"
                            // delay //
                            "\033[31m\"I wouldn’t be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
                            // delay //
                            "\033[36m\"Good day.\"\033[0m\n"
                            "Perturbed, you turn around and head back to the fork in the road.\n\n"
                        };

            makeChoice(hiToBill, sayNothing);

        
            std::string secondPath {
                "Which path do you take now?\n\n"
                "1: The shady path to the left that leads uphill.\n"
                "2: The sunny, flat path straight ahead.\n\n"
            };
            std::cout << secondPath;

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
                "You wave back, \033[36m\"Hello there!\"\033[0m\n"
                "\033[92m\"Hi! What brings you around this neck of the woods?\"\033[0m\n"
                "\033[36m\"I’m visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
                "\033[36m\"Would you like to join us? We have plenty to share.\"\033[0m\n"
                "\033[92m\"Tempting, but I want to make sure I get all my chopping done. Thanks for offering, though!\"\033[0m\n"
                "\033[36m\"No worries—more for us then!\"\033[0m You break into a wide smile, and you both laugh.\n"
                    //delay//
                    };

            std::string flat2 {"You head out along the flat path. You need a bit "
                "of sun on your face. That Bill person weirded you out to no end."
                " The moisture from the fog feels invigorating, calming your nerves"
                " already. Reaching the stream, you put the basket down on a tree stump"
                " and kneel to scoop up some cool water, splashing it on your face and"
                " smoothing down your hair. Over the sound of the stream, you can hear "
                "someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed,"
                " you decide to head towards Pauline to say hi.\n\n"
                "Coming upon Pauline, she lowers her axe and waves at you.\n\n"
                "You wave back, \033[36m\"Hello there!\"\033[0m\n"
                "\033[92m\"Hi! What brings you around this neck of the woods?\"\033[0m\n"
                "\033[36m\"I’m visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
                "\033[36m\"Would you like to join us? We have plenty to share.\"\033[0m\n"
                "\033[92m\"Tempting, but I want to make sure I get all my chopping done. Thanks for offering, though!\"\033[0m\n"
                "\033[36m\"No worries—more for us then!\"\033[0m You break into a wide smile, and you both laugh.\n"
                //delay//
                };            

            makeChoice(uphill2, flat2);


            std::string pauline {
                "Tell Pauline about Buffalo Bill?\n\n"
                "1: Tell Pauline.\n"
                "2: Don\'t tell Pauline.\n\n"
            };
            std::cout << pauline;

            std::string talkAboutBill {"You remember Pauline mentioning that her leather axe holster was wearing\n"
                    "out and she’d need a new one soon. You decide to tell her about Bill, despite his creepiness.\n"
                    "\033[36m\"I passed by a leather dealer earlier. He called himself 'Buffalo Bill.'\"\033[0m\n"
                    "\033[92m\"Weird name,\"\033[0m Pauline says, making a face.\n"
                    "\033[36m\"I know, right? He seemed super creepy, but I know you’ve been looking for a new holster\n"
                    "for your axe. He might have something that will work.\"\033[0m\n"
                    "\033[92m\"Thanks! I might check him out.\"\033[0m\n"
                    "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you’re running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan’s, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi’ by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you’re here now; let’s eat the lunch you bro—\"\033[0m\n"
                    "Before Nan can finish, Bill breaks down the door, brandishing a rope fashioned into a noose. He kicks Nan squarely in the chest,"
                    "causing her to fall to the floor, hitting her head and knocking her unconscious.\n"
                    // long delay //
                };

            std::string doNotTalkAboutBill { "You remember Pauline mentioning that her leather axe"
                " holster was wearing out and she'd need a new one soon. That Bill guy was super "
                "creepy, though. You decide not to mention him.\n\n" 
                "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you’re running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan’s, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi’ by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you’re here now; let’s eat the lunch you bro—\"\033[0m\n"
                    "Before Nan can finish, Bill breaks down the door, brandishing a rope fashioned into a noose. He kicks Nan squarely in the chest,"
                    "causing her to fall to the floor, hitting her head and knocking her unconscious.\n"
                    // long delay //
                };

            makeChoice(talkAboutBill, doNotTalkAboutBill);

            std::string billAttackEvent { 
                "What do you do?\n\n"
                "1: Lunge at Bill.\n"
                "2: Check on Nan.\n\n"
            };
            std::cout << billAttackEvent;

            std::string lungeAtBill {"You lunge at Bill, grasping for the rope, but he’s too quick for you. He dodges your attack, managing to slip the rope\n"
                    "around your neck in the process. \033[31m\"Your skin will make some fine, fine leather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n"
                    "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill’s skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We’d be goners for sure.\"\033[0m\n"
                    "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n"
                    // long delay //
                    };
            
            std::string checkOnNan {"You drop to the floor next to Nan, attempting to revive her so you both can escape. Bill comes up behind you and slips the rope\n"
                    "around your neck. \"Your skin will make some fine, fine leather,\" Bill sneers as he strangles you, your vision going splotchy.\n"
                   "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill’s skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We’d be goners for sure.\"\033[0m\n"
                    "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n"
                    // long delay //
                    };
            makeChoice(lungeAtBill, checkOnNan);

            std::string callPoliceEvent {"Should you call the police?\n\n"
                "1: Yes.\n"
                "2: No.\n"
            };

            std::cout << callPoliceEvent;

            std::string callPolice {"You nod, \033[36m\"Yes, the authorities need to know.\"\033[0m\n"
                    "Nan reaches for the telephone and begins to dial 9-1-1.\n"
                    "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n"
                    "Several FBI agents and cops enter the house, guns drawn. A man who clearly is the head of the operation steps forward.\n"
                    "\033[34m\"I’m Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you’ve met ‘Buffalo Bill.’ We’ve been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you’ll be free to go.\"\033[0m\n\n"
                    "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" they all say in unison.\n"
                    };
            std::string dontCallPolice {"You shake your head, \033[36m\"We can’t call the police. They’d never believe us!\"\033[0m\n"
                    "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n"
                    "Several FBI agents and cops enter the house, guns drawn. A man who clearly is the head of the operation steps forward.\n"
                    "\033[34m\"I’m Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you’ve met ‘Buffalo Bill.’ We’ve been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you’ll be free to go.\"\033[0m\n\n"
                    "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" they all say in unison.\n"
                    };   
            // };
            makeChoice(callPolice, dontCallPolice);
            whileTrueVar2 = false;

        }
        else if (choice2 == 3)
        {
            // Downhill path
            whileTrueVar2 = false;
        }
        else
        {
            std::string invalid_choice { "You can't be a lazy daisy all day. Enter "
                "1, 2, or 3, corresponding to what you want to do.\n\n" };
            std::cout << invalid_choice;
            // cycle back through choices
        }
    }

    return 0;
}
