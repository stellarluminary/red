#include <iostream>
#include <string>
#include <chrono>
#include <thread>
/*#include "makeChoice.h"*/

//
// New-line function because easy is neat and goooood 😁
//

void n() {
    std::cout << "\n";
}

//
// Delays
//

void delay500() {
    // Pause for 500 milliseconds (0.5 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "" << std::endl;
}

void delay1000() {
    // Pause for 1000 milliseconds (1 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "" << std::endl;
}

void delay1500() {
    // Pause for 1500 milliseconds (1.5 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    std::cout << "" << std::endl;
}

void delay2000() {
    // Pause for 2000 milliseconds (2 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "" << std::endl;
}

void delay3000() {
    // Pause for 3000 milliseconds (3 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout << "" << std::endl;
}

void delay5000() {
    // Pause for 5000 milliseconds (5 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << "" << std::endl;
}

void delay7000() {
    // Pause for 7000 milliseconds (7 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(7000));
    std::cout << "" << std::endl;
}

void delay10000() {
    // Pause for 10000 milliseconds (10 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    std::cout << "" << std::endl;
}

void delay15000() {
    // Pause for 15000 milliseconds (15 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(15000));
    std::cout << "" << std::endl;
}

void delay20000() {
    // Pause for 20000 milliseconds (20 seconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(20000));
    std::cout << "" << std::endl;
}

//
//
//ASCII Art
//
//

void titleArt();
void insideArt();
void bathArt();
void closetArt();
void windArt();
void accidentArt();
void bathtubArt();
void outsideArt();
void uphillArt();
void downhillArt();
void flatArt();
void billArt();
void streamArt();
void paulineArt();
void nanhouseArt();
void nanArt();
void deathArt();
void langleyArt();
void trioArt();
void endArt();

void titleArt() {
    std::cout << "88888888ba                          88                                88888888ba,                88  88\n";
    std::cout << "88      \"8b                         88                      ,d        88      `\"8b               88  \"\"\n";
    std::cout << "88      ,8P                         88                      88        88        `8b              88\n";
    std::cout << "88aaaaaa8P'  ,adPPYYba,  ,adPPYba,  88   ,d8   ,adPPYba,  MM88MMM     88         88   ,adPPYba,  88  88  8b       d8   ,adPPYba,  8b,dPPYba,  8b       d8\n";
    std::cout << "88\"\"\"\"\"\"8b,  \"\"     `Y8  I8[    \"\"  88 ,a8\"   a8P_____88    88        88         88  a8P_____88  88  88  `8b     d8'  a8P_____88  88P'   \"Y8  `8b     d8'\n";
    std::cout << "88      `8b  ,adPPPPP88   `\"Y8ba,   8888[     8PP\"\"\"\"\"\"\"    88        88         8P  8PP\"\"\"\"\"\"\"  88  88   `8b   d8'   8PP\"\"\"\"\"\"\"  88           `8b   d8'\n";
    std::cout << "88      a8P  88,    ,88  aa    ]8I  88`\"Yba,  \"8b,   ,aa    88,       88      .a8P   \"8b,   ,aa  88  88    `8b,d8'    \"8b,   ,aa  88            `8b,d8'\n";
    std::cout << "88888888P\"   `\"8bbdP\"Y8  `\"YbbdP\"'  88   `Y8a  `\"Ybbd8\"'    \"Y888     88888888Y\"'     `\"Ybbd8\"'  88  88      \"8\"       `\"Ybbd8\"'  88              Y88'\n";
    std::cout << "                                                                                                                                                  d8'\n";
    std::cout << "                                                                                                                                                 d8'\n";
    std::cout << "                                                         ,dPYb,\n";
    std::cout << "                                                         IP'`Yb\n";
    std::cout << "                                                         I8  8I\n";
    std::cout << "                                                         I8  8'\n";
    std::cout << "                                                         I8 dP       gg     gg                   ,gggg,\n";
    std::cout << "                                                         I8dP   88gg I8     8I                 ,88\"\"\"Y8b,               I8\n";
    std::cout << "                                                         I8P    8I   I8,   ,8I                d8\"     `Y8               I8 \n";
    std::cout << "                                                        ,d8b,  ,8I  ,d8b, ,d8I               d8'   8b  d8            88888888\n";
    std::cout << "                                                        8P'\"Y88P\"'  P\"\"Y88P\"888             ,8I    \"Y88P'               I8\n";
    std::cout << "                                                                          ,d8I'             I8'             ,gggg,gg    I8\n";
    std::cout << "                                                     gg                 ,dP'8I              d8             dP\"  \"Y8I    I8\n";
    std::cout << "                                                    dP8,               ,8\"  8I       I8     Y8,           i8'    ,8I   ,I8,\n";
    std::cout << "                         _    _                    dP Yb               I8   8I       I8     `Yba,,_____, ,d8,   ,d8b, ,d88b,\n";
    std::cout << "                         H    H                   ,8  `8,              `8, ,8I    88888888  gg`\"Y8888888 P\"Y8888P\"`Y888P\"\"Y88\n";
    std::cout << "                        / \\  / \\                  I8   Yb               `Y8P\"        I8     \"\"\n";
    std::cout << "                     \\( | | | .-|                 `8b, `8,   gg      gg    ,g,       I8     gg    ,ggg,,ggg,    ,ggg,\n";
    std::cout << "                    OOOO| | | |_|                  `\"Y88888  I8      8I   ,8'8,      I8     88   ,8\" \"8P\" \"8,  i8\" \"8i\n";
    std::cout << "                 ___OOOO|_|_|___|_                     \"Y8   I8,    ,8I  ,8'  Yb    ,I8,    88   I8   8I   8I  I8, ,8I\n";
    std::cout << "                |____OO___________|                     ,88,,d8b,  ,d8b,,8'_   8)  ,d88b, _,88,_,dP   8I   Yb, `YbadP'\n";
    std::cout << "                |/\\/\\/O/\\/\\/\\/\\/\\/|                 ,ad888888P'\"Y88P\"`Y8P' \"YY8P8P88P\"\"Y888P\"\"Y88P'   8I   `Y8888P\"Y888\n";
    std::cout << "                |/\\/\\/\\/\\/\\/\\/\\/\\/|               ,dP\"'   Yb     ,ggg,        gg\n";
    std::cout << "                |/\\/\\/\\/\\/\\/\\/\\/\\/|              ,8'      I8    dP\"\"Y8b       dP\n";
    std::cout << "                \\\\/\\/\\/\\/\\/\\/\\/\\/\\/             ,8'       I8    Yb, `88      d8'\n";
    std::cout << "                 `'============='`              I8,      ,8'     `\"  88    ,dP'    gg\n";
    std::cout << "                                                `Y8,___,d8'          88aaad8\"      \"\"\n";
    std::cout << "                                                  \"Y888P\"            88\"\"\"\"Yb,     gg     ,gggg,gg   ,ggg,,ggg,     ,gggg,gg\n";
    std::cout << "                                                                     88     \"8b    88    dP\"  \"Y8I  ,8\" \"8P\" \"8,   dP\"  \"Y8I\n";
    std::cout << "                                                                     88      `8i   88   i8'    ,8I  I8   8I   8I  i8'    ,8I\n";
    std::cout << "                                                                     88       Yb,_,88,_,d8,   ,d8b,,dP   8I   Yb,,d8,   ,d8b,\n";
    std::cout << "                                                                     88        Y88P\"\"Y8P\"Y8888P\"`Y88P'   8I   `Y8P\"Y8888P\"`Y8\n\n";
}

void insideArt() {
    std::cout << "               |                                                                                     |\n";
    std::cout << "               |                                      _______________          _______________       |\n";
    std::cout << "               |       ____________                  |  _.-'   _.  | |        |  ___________  |      |\n";
    std::cout << "               |      | ____  ____ |                 | |   _.-'  | | |        | |   _____   | |      |\n";
    std::cout << "               |      ||    || -( ||                 | |  |      | | |        | |  |     |  | |      |\n";
    std::cout << "               |      ||    || ,'`||                 | |  | _.-' | | |        | |  |  _  |  | |      | |\\\n";
    std::cout << "               |      ||____||____||                 | |  |    _.| | |        | |  |     |  | |      | | \\\n";
    std::cout << "               |      | ____  ____ |                 | |  |_.-' _.-| |        | |  |_____|  | |      | |  \\\n";
    std::cout << "               |      ||,-._||.-. ||                 | |    _.-'   | |        | |___________| |      | ||\\ \\\n";
    std::cout << "               |      ||    ||   `||                 | |_.-'   _. o| |        | |   _____   | |      | || \\ \\\n";
    std::cout << "               |     _||____||____||_                | |   _.-'  | | |        | |  |     | o| |      | ||\\ \\ \\\n";
    std::cout << "              .|    |________________|               | |  | _.-' | | |        | |  |     |  | |      | |||\\ \\ \\\n";
    std::cout << "              ||                                     | |  |    _.| | |        | |  |  -  |  | |      | ||| \\ \\ \\\n";
    std::cout << "             /||                                     | |  |_.-'   _| |        | |  |     |  | |      | |||  \\ \\ \\\n";
    std::cout << "            / ||                              .      | |      _.-'   |        | |  |_____|  | |      | ||| \\ | | |\n";
    std::cout << "         . /  ||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|      | |   _.-'      |        | |           | |      | |||\\  | | |\n";
    std::cout << "         |/   /                              /|______|_|.-'__________|________|_|-----------|_|______| ||| \\ | | |\n";
    std::cout << "         |   /                              / |                                                      \\ |||  \\| | |\n";
    std::cout << "         |  /                              /  |                                                       \\||| \\ | | |\n";
    std::cout << "         | /                            . /  /|                                                        \\||   |o| |\n";
    std::cout << "         |/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|/  /                                                    ..     \\ \\  | | |\n";
    std::cout << "         |                              |  /                                                     |\\\\     \\ \\ | | |\n";
    std::cout << "         |                              | /                                                 .====^^\\\\==.  \\ \\| | |\n";
    std::cout << "         |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|/                                                  |\\     ||  |\\  \\ | | |\n";
    std::cout << "        /|                              |                                                 .-:X\"====^^===='_ \\  | |\n";
    std::cout << "       /                                                                                 /  \\|XXXXXXXXXX|  \\ \\ | |\n";
    std::cout << "      /                                                                                 (     \"\"\"\"\"\"\"\"\"\"    ) \\| |\n";
    std::cout << "     /                                                                                   \\_________________/   \\ |\n";
    std::cout << "    /                                                                                       || ||  || ||        \\|\n";
    std::cout << "   /                                                                                        ||\\||--||\\||         \\\n";
    std::cout << "  /                                                                                         ||\\||=====||          \\\n";
    std::cout << " /                                                                                          || ||  || ||           \\\n";
    std::cout << "/                                                                                              ||     ||            \\\n\n";
}

void bathArt() {
    std::cout << "\n                                                         |\n";
    std::cout << "                                            __________   |\n";
    std::cout << "                           _    __    _    |          |  |\n";
    std::cout << "                          /_\\  /  \\  /_\\   |          |  |\n";
    std::cout << "                          =|= | // | =|=   |          |  |\n";
    std::cout << "                           !   \\__/   !    |          |  |\n";
    std::cout << "                                 _         |          |  |\n";
    std::cout << " ___               ___          //'        |          |  |\n";
    std::cout << "[___]       _   :=|   |=:   __T_||_T__     |p=        |  |\n";
    std::cout << "|  ~|     =)_)=   |   |    [__________]    |          |  |\n";
    std::cout << "|   |      (_(    |xXx|     \\_      _/     |          |  |\n";
    std::cout << "|   |      )_)    \"\"\"\"\"       \\    /       |          |  |\n";
    std::cout << "\\___|                          |  |        |          |  |\n";
    std::cout << " |  `========,                 |  |        |          |  |\n";
    std::cout << "__`.        .'_________________|  |________|__________|__|\n";
    std::cout << "    `.    .'                  (____)                      \\\n";
    std::cout << "    _|    |_...             .;;;;;;;;.                     \\\n";
    std::cout << "   (________);;;;          :;;;;;;;;;;:\n";
    std::cout << "        :::::::'            '::::::::'\n\n";
}

void closetArt() {
    std::cout << "====!==========!=========!========!=====\n";
    std::cout << " /`\\__/`\\  /`\\   /`\\  /)=I=(\\  /`\"\"\"`\\\n";
    std::cout << "|        ||   `\"`   | |  :  | |   :   |\n";
    std::cout << "'-|    |-''-|     |-' |  T  \\ '-| : |-'\n";
    std::cout << "  |    |    |     |   (  |\\  |  '---'\n";
    std::cout << "  '.__.'    '.___.'   |  |/  /\n";
    std::cout << "                      |  /  /\n";
    std::cout << "                      |  \\ /\n";
    std::cout << "                      '--'`\n\n";
}

void windArt() {
    std::cout << "              ██                ██            ██████████████▓▓                                                                                \n";
    std::cout << "                                        ████░░              ████                                            ██████████████                    \n";
    std::cout << "                                      ▓▓                    ████      ▓▓                                ████          ████                    \n";
    std::cout << "                                                              ██      ██                          ████                  ██            ▓▓░░    \n";
    std::cout << "                                ░░▓▓                        ████                                ██                      ██                    \n";
    std::cout << "                                ░░▓▓        ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░░                              ▓▓░░                ▓▓▓▓▓▓██                    \n";
    std::cout << "                                ░░▓▓                                                          ██                                              \n";
    std::cout << "                        ▓▓      ░░██                                                          ██                                              \n";
    std::cout << "  ██                    ░░        ▒▒██                                                        ████                                            \n";
    std::cout << "                                      ████                                ██                    ████                                      ████\n";
    std::cout << "                                          ██████████████████████████████████                      ████                                ▓▓██    \n";
    std::cout << "                                          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                      ░░░░▓▓▓▓▓▓                        ▓▓▒▒░░    \n";
    std::cout << "                                                                                        ██                  ████████████████████████          \n";
    std::cout << "      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                                                                                                                      \n";
    std::cout << "██  ██                  ████                                                            ██████                                  ██            \n";
    std::cout << "    ██                    ██                                                      ██████    ████                                              \n";
    std::cout << "    ██                  ▓▓░░          ▒▒                ▓▓                    ▓▓▓▓░░░░░░      ██                                              \n";
    std::cout << "    ██                                                                    ████                ██                ▒▒░░                          \n";
    std::cout << "    ██▒▒                                                                ▓▓██                  ██                                              \n";
    std::cout << "    ░░████                                                              ██                ▓▓▓▓                                                \n";
    std::cout << "        ████  ██                                                        ████                                                                  \n";
    std::cout << "                ██  ████  ██  ██░░▓▓▒▒▒▒██  ██████████                    ████                                            ██                  \n";
    std::cout << "                ░░                          ░░░░░░░░            ▓▓          ██▓▓                                                              \n";
    std::cout << "                                                                              ░░████                  ██  ████████░░                          \n";
    std::cout << "                                                                                    ████  ██████  ████                                        \n";
    std::cout << "                                                                                    ░░░░    ░░    ░░                                          \n";
    std::cout << "  ██▓▓                      ██                                                                                                          ▓▓    \n";
    std::cout << "                  ▓▓                              ░░        ▓▓                                                                                \n\n";
}

void accidentArt() {
    std::cout << "    ss$$ss\n";
    std::cout << "   $$$$`$$$\n";
    std::cout << "  $$$ @ @|$\n";
    std::cout << "  $$$__O_/$$\n";
    std::cout << "  $$$\\_/-.,$$\n";
    std::cout << "  /        \\\n";
    std::cout << " /\\/|    |\\/\\\n";
    std::cout << " \\\\ /____\\ \\ \\\n";
    std::cout << " ||\\|  | |  ||\\\n";
    std::cout << "    |  | |\n";
    std::cout << "    |  | |\n";
    std::cout << "    |  | |\n";
    std::cout << "   .\\_|_/--.,\n";
    std::cout << " ,' / \\ `-.  \\\n";
    std::cout << "(   \\_/---'   )\n";
    std::cout << " \\_         _./\n";
    std::cout << "   `'-._,.-`\n\n";
}

void bathtubArt() {
    std::cout << "                 _______\n";
    std::cout << "     _____      |.-----.|\n";
    std::cout << "    /.---.\\     ||     ||\n";
    std::cout << "    ||   ||     ||_____||\n";
    std::cout << "    ||  /__\\    |-_---_-|\n";
    std::cout << "    ||          =| |=| |=\n";
    std::cout << "    ||           !!! !!!\n";
    std::cout << "    ||                .\n";
    std::cout << "    || o       .  o o_..---.\n";
    std::cout << "   _||___.---.O_o_.-\" _..._)\n";
    std::cout << "  (______|   |_____.-'    /\n";
    std::cout << "   \\     |___|            |\n";
    std::cout << "   |     !!!!!            |\n";
    std::cout << "    \\                    /\n";
    std::cout << "     '.__            __.'\n";
    std::cout << "      _\\/``\"\"\"\"\"\"\"``\\/_\n";
    std::cout << "     (__(           )__)\n\n";
}

void outsideArt() {
    std::cout << "           )\n";
    std::cout << "         ( _\n";
    std::cout << "          |_|~`.\n";
    std::cout << "       _.-'-_~_~`-._\n";
    std::cout << "   _.-'_~-_~-_~_-_~_`-._\n";
    std::cout << "  ~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "    |       __    _   |\n";
    std::cout << "    |  []  | .|  [_]  |_._._._._._._._._._.\n";
    std::cout << "    |____()|__|()_____|=|=|=|=|=|=|=|=|=|=|\n";
    std::cout << "^^^^^^^^^^^ === ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    std::cout << "              ===\n";
    std::cout << "                ===\n";
    std::cout << "                  ===\n\n";
}

void uphillArt() {
    std::cout << "     __                      __\n";
    std::cout << "     ><<         _          >><\n";
    std::cout << "    >>><<<      (_)        >>><<<\n";
    std::cout << "     >%%<<<               >%%<<<\n";
    std::cout << "    >>%%\\%<<             >>%%\\%<<\n";
    std::cout << "     >>%|%<<<            >>%|%<<<<\n";
    std::cout << "   >>>%%|%<<<          >>>%%|%<<<\n";
    std::cout << "     >>%|%%<<           >>>%|%%<<\n";
    std::cout << "   >` >%|%%<<<        >`>>>%|%%<<<\n";
    std::cout << "      >>|%%<<<          >>>>|%%<<<\n";
    std::cout << "       >|<<-<<<<        `>>>|<<-<<<<\n";
    std::cout << "        || `<<              ||    `<<\n";
    std::cout << "      >-||<              >>-||<\n";
    std::cout << "        ||-<                ||-<\n";
    std::cout << "        ||--<<              ||--<<\n";
    std::cout << "     >--||               >--||\n";
    std::cout << "        ||                  ||\n";
    std::cout << "        ||-               >-||\n";
    std::cout << "        ||                  ||-<\n";
    std::cout << "        ||-                -||-\n";
    std::cout << "        ||-                -||     /\n";
    std::cout << "  \\/    ||   \\/             ||    \\/\n";
    std::cout << "  \\/    ||-  \\/             ||-   \\/\n";
    std::cout << "  \\//  %||%  \\//      \\/   %||%   \\//\n";
    std::cout << "V|\\// %%||%%  .   .    .  %%||%% .\\//|V\n";
    std::cout << "V|\\// %%||%%  ;:,:;;:,:;  %%||%%;:\\//|V\n";
    std::cout << "V|\\///%%||%% ;:;:;:;:;:;: %%||%%;:\\//|V\n";
    std::cout << "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n";
}

void downhillArt() {
    std::cout << "                          _____\n";
    std::cout << "                _,-'\"\"  \"\"   \"\"\"\"\"\"`--._\n";
    std::cout << "            _.-'                        `'-,_\n";
    std::cout << "        ,-'                                 . `-.,\n";
    std::cout << "     ./              .              ;%     ;;     `;.\n";
    std::cout << "   _,'   ,           ,                :;%  %;        )\n";
    std::cout << " _/'       :         ;                   :;%;'     ., )\n";
    std::cout << "(,.        %;     %;            ;        %;'    ,;    ,)\n";
    std::cout << "( ` ;       ;%;  %%;        ,     %;    ;%;    ,%'   ,)\n";
    std::cout << "(     %;       %;%;      ,  ;       %;  ;%;   ,%;'  -`\n";
    std::cout << " \\    ;%;      %;        ;%;        % ;%;  ,%;'    )\n";
    std::cout << "  `-  `%;.     ;%;     %;'         `;%%;.%;'        @\n";
    std::cout << "     ` `:;%.    ;%%. %@;        %; ;@%;%'      @ @ @  @ @ @\n";
    std::cout << "          `:%;.  :;bd%;          %;@%;'      @  @\\/@ @ /__@\n";
    std::cout << "            `@%:.  :;%.         ;@@%;'       @@@ @\\ / @/  @ @\n";
    std::cout << "              `@%.  `;@%.      ;@@%;        @\\  \\/@| @ | @      '.,\n";
    std::cout << "                `@%%. `@%%    ;@@%;        @__\\@ \\ |/ \\| / @      'b      *\n";
    std::cout << "                  ;@%. :@%%  %@@%;           __\\|@|  ||/__/@       '$    #.\n";
    std::cout << "                    %@bd%%%bd%%:;           /  \\ \\\\  / /__          $:   #:\n";
    std::cout << "                      #@%%%%%:;;           @    \\  \\/ /   @          *#  @):\n";
    std::cout << "                      %@@%%%::;                  |\" '|                :@,@):   ,.**:'\n";
    std::cout << "                      %@@@%(o);  . '             |\"  |     ,         :@@*: ..**'\n";
    std::cout << "                      %@@@o%;:(.,'               |\"  |      '#o.    .:(@'.@*\"'\n";
    std::cout << "                  `.. %@@@o%::;                 ~|\"  |~        'bq,..:,@@*'   ,*\n";
    std::cout << "                     `)@@@o%::;             ~~~~\"\"\"\"\"\"\"~~~~    ,p$q8,:@)'  .p*'\n";
    std::cout << "                      %@@(o)::;           ~~               ~~~'    '@@Pp@@*'\n";
    std::cout << "                     .%@@@@%::;                                     Y7'.'\n";
    std::cout << "                     ;%@@@@%::;.                                    :@):.\n";
    std::cout << "                    ;%@@@@%%:;;;.                                  .:@:'.\n";
    std::cout << "                ...;%@@@@@%%:;;;;,..                             .::(@:.\n\n";
}

void flatArt() {
    std::cout << "                                              \\_/\n";
    std::cout << "                 ___                        --(_)--\n";
    std::cout << "               _/XXX\\                         / \\\n";
    std::cout << "_             /XXXXXX\\_                                    __\n";
    std::cout << "X\\__    __   /X XXXX XX\\                          _       /XX\\__      ___\n";
    std::cout << "    \\__/  \\_/__       \\ \\                       _/X\\__   /XX XXX\\____/XXX\\\n";
    std::cout << "  \\  ___   \\/  \\_      \\ \\               __   _/      \\_/  _/  -   __  -  \\__/\n";
    std::cout << " ___/   \\__/   \\ \\__     \\__           /  \\_//  _ _ \\  \\     __  /  \\____//\n";
    std::cout << "/  __    \\  /     \\ \\_   _//_\\___     _/    //           \\___/  \\/     __/\n";
    std::cout << "__/_______\\________\\__\\_/________\\_ _/_____/_____________/_______\\____/_______\n";
    std::cout << "                                  /\\\n";
    std::cout << "                                 /  \\\n";
    std::cout << "                                /    \\\n";
    std::cout << "                               /      \\\n";
    std::cout << "                              /        \\\n";
    std::cout << "                             /          \\\n";
    std::cout << "                            /            \\\n";
    std::cout << "                           /              \\\n";
    std::cout << "                          /                \\\n\n";
}

void billArt() {
    std::cout << "                      _=~~'````~~\\\\,\n";
    std::cout << "                  .W#P             `8#m,\n";
    std::cout << "                 W#fW####L      m####KY#b\n";
    std::cout << "                d#!|@~Y*M#!    |#*f~Y#!V#L\n";
    std::cout << "               !##    ./\\       .=\\,   `##\n";
    std::cout << "               |#|   /'  \\     /   !,   M#!\n";
    std::cout << "              P.P   |     |    /    !,   |,t\n";
    std::cout << "             :\\'|   |  _jmZ    Wm\\, .!   |||\n";
    std::cout << "             ||:'   |/+4@~|    \\Y#Z=d    |||\n";
    std::cout << "             `/W    ``; ./     `\\  /`    !d|\n";
    std::cout << "              b#      `~'  ,  .  ~~'      Pd\n";
    std::cout << "              ##          :'  |          :\\#\n";
    std::cout << "              #Y,         /   `;         ||V\n";
    std::cout << "               `|     j= /      |        |\n";
    std::cout << "                \\    ||  !=____+   -q    |\n";
    std::cout << "                |     `\\           /''  |\n";
    std::cout << "                 !,     ~=_      _='   |\n";
    std::cout << "                  \\        ~/~~~~     /\n";
    std::cout << "                   `;                /\n";
    std::cout << "                      `\\ .,     _, /\n";
    std::cout << "                        `. `===/~ /\n";
    std::cout << "                          |       +\n";
    std::cout << "                         /         \\\n";
    std::cout << "      __/========  -~~~~'           / !/'  ``~~~~~~===_\n";
    std::cout << "   .=~                   \\         /                   ~q\n";
    std::cout << "  /'                      \\       /                      \\\n";
    std::cout << " /'                        \\     /                        \\\n";
    std::cout << " |                          \\   /                          |\n\n";
}

void streamArt() {
    std::cout << "                                         A     A   |   /|\\   |   |    |\n";
    std::cout << "                       A       A   A |  /|\\ |  |  /|\\  /|\\   | /   |  |\n";
    std::cout << "                      /|\\     /|\\ /|/|\\  |\\/|  |\\ /|\\ //|\\  /     /  /\n";
    std::cout << "                      /|\\     /|\\ /|V|. /|\\/| /|\\ /|\\\\//|\\ |  |     | |\n";
    std::cout << "                      /|\\     /|\\ /|V|\\ .|\\/| /|\\//|\\\\//|\\ | /   |  | |\n";
    std::cout << "                     //|\\\\    /|\\ /|V|\\% _____%| //|\\\\//|\\ |        | |\n";
    std::cout << "                     //|\\\\   //|\\\\%%%_ ,*\\V/\\\\ %%/|\\%%%%%/  /  /  / /|\n";
    std::cout << "                   ,-//|\\\\%%%%%____.' /////*\\*|\\  %%%%%%%|  |     | %%%\n";
    std::cout << " -----------------`--------'\"\"\"      ///Y/|[]\\\\\\\\.    %% |     |  |   %\n";
    std::cout << "                 `````\"--------------..-------..._,------'.______.'----\n";
    std::cout << "~^~_-~^^-^~^_~^_^-~^~^-~-~^~^~^~_-~^_^-^~^_~^_^-~^~^-~~^-~^-~^_~^~-~^~^\n";
    std::cout << "_~^~_~^-^~^-~^~-_~^-~^-~^_~^~-~^~^-^'~~=._~_~^~^-~^-~^_~^~-~^~^-~^~-_~\n";
    std::cout << "~_~^-^~~-:`-~^-~^_~^:--^~^-~^~-_~^-~^-~^_~^~-~^~^-_:~^-~^- ,~^-~^-~~^~\n";
    std::cout << "^_~^~-~^~^-~^~-_~^~_~^-^~ ~-'._~^-~^-_^~=-^~^-~^~-_~^-~^~(`(`)`)^~.=~-\n";
    std::cout << "~^-_~^-_.'^-~^-~^-~^_~^~-~^~^-~^~-_~^~_~^-^~_~^-~^~=.~^-( ( O ) )-~^~_\n";
    std::cout << "~_~^-^~~-:^-~^-~^_~^:-~^-~^~-_~^-~^-~^_~^~^-:~^-~^-~`;_.(__(_)__)^~^-~\n";
    std::cout << "~^~^-~^-~^~^~-^~-~^_~^~-~^~^-~^~-_~^-~^-~^_~^~!~-_.='~s |     | | '```\n";
    std::cout << "~^~^`~-~^_~^~-~^~^-~^~-_~^____------`````' -L...=-\"  ___|       | ````\n";
    std::cout << "~_~^-^~~     __.,------'\"\"``\" ``` '```\" ```' -----`'\"   |   | | | ' ``\n";
    std::cout << "   ______.--( __)_)_ ,' `  '````\" ``` ' .\" ``` ``` `` ` |       | `` '\n";
    std::cout << "\"'\" __    .  ` ` (__)    ```\" ``` '\"'````\" ```  `` ```  |       |  '``\n";
    std::cout << " .-`  )     ```\" ``` '\"'````\" `````\" ``\" ```    `` '` ` |  |  | | ``\\`\n";
    std::cout << "(  _.'  ``\" ``` '\"'```` ``\" ``` '\"'````  `---\" ````- ` /         \\ -\\`\n";
    std::cout << "   ``\" ``` '\"'````  \"\"''```\" ``` '\"'````\" ``` '\"'```` `\" `- ``/``\\ ```\n";
    std::cout << "         ``\" ``` '\"'````   ```` '```` ```` `` ````````` ``' ``\"\"` ````\n";
    std::cout << "                        `` `'`` ```'`` ``'``` '`````` `'``````` `` ```\n\n";
}

void paulineArt() {
    std::cout << "       __\n";
    std::cout << "      /  '.\n";
    std::cout << "      )____\\_\n";
    std::cout << "     /_______)\n";
    std::cout << "      SS e e|S\n";
    std::cout << "     SSS  v /SS\n";
    std::cout << "     SSS_`/'SSS\n";
    std::cout << "    /     o \\\\\n";
    std::cout << "   /  /   o | \\\n";
    std::cout << "  |\\_/____o_|_/\\\n";
    std::cout << "  \\/ /      \\`-'\n";
    std::cout << "    /        \\\n";
    std::cout << "    '-._____.-`\n";
    std::cout << "       | | |\n";
    std::cout << "       |-|-|\n";
    std::cout << "       / \\ '-.\n";
    std::cout << "       \\_/----'\n\n";
}

void nanhouseArt() {
    std::cout << "                           (    )\n";
    std::cout << "                          (    )\n";
    std::cout << "                            )  )\n";
    std::cout << "                           (  (                  /\\\n";
    std::cout << "                            (_)                 /  \\  /\\\n";
    std::cout << "                    ________[_]________      /\\/    \\/  \\\n";
    std::cout << "           /\\      /\\        ______    \\    /   /\\/\\  /\\/\\\n";
    std::cout << "          /  \\    //_\\       \\    /\\    \\  /\\/\\/    \\/    \\\n";
    std::cout << "   /\\    / /\\/\\  //___\\       \\__/  \\    \\/\n";
    std::cout << "  /  \\  /\\/    \\//_____\\       \\ |[]|     \\\n";
    std::cout << " /\\/\\/\\/       //_______\\       \\|__|      \\\n";
    std::cout << "/      \\      /XXXXXXXXXX\\                  \\\n";
    std::cout << "        \\    /_I_II  I__I_\\__________________\\\n";
    std::cout << "               I_I|  I__I_____[]_|_[]_____I\n";
    std::cout << "               I_II  I__I_____[]_|_[]_____I\n";
    std::cout << "               I II__I  I     XXXXXXX     I\n";
    std::cout << "            ~~~~~\"   \"~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}

void nanArt() {
    std::cout << "   ss$$ss        ,@@@@,\n";
    std::cout << "  $$$$`$$$      /@@@@@@|\n";
    std::cout << " $$$ e e|$       )- \\@@/\n";
    std::cout << " $$$__-_/$$      \\J_ /\n";
    std::cout << " $$$\\_/-.$$     .-)_;-.\n";
    std::cout << " /       \\     /       \\\n";
    std::cout << "/\\/|   |\\/\\   /_/|   |\\_\\\n";
    std::cout << "\\ \\|.__| \\ \\  \\ \\|___|/ /\n";
    std::cout << " ||\\    \\ ||\\  )|\\   /|\\\n";
    std::cout << "  /      \\      |_____|\n";
    std::cout << "  `-.___.-'      | | |\n";
    std::cout << "    | | |        |-|-|\n";
    std::cout << "    |-|-|        \\ | /\n";
    std::cout << "    / \\ `-.      /-T-\\\n";
    std::cout << "    \\_/---'     (_/ \\_)\n\n";
}

void deathArt() {
    std::cout << "            ________________________\n";
    std::cout << "           (_(((____________________)\n";
    std::cout << "             /  |\n";
    std::cout << "            /   |\n";
    std::cout << "           /    |\n";
    std::cout << "          /_____|\n";
    std::cout << "        @@ _    _\\@\n";
    std::cout << "      @@  (*)  (*)@\n";
    std::cout << "    @@@       \\  \\@\n";
    std::cout << "   @@@       __)  )\n";
    std::cout << "   @@    ,_______(\n";
    std::cout << "   C    /\n";
    std::cout << "    \\  |  _ _ _ _\n";
    std::cout << "     \\  \\|_|_|_|_|\n";
    std::cout << "      \\          /\n";
    std::cout << "       \\   _____)\n";
    std::cout << "        )    (\n\n";
}

void langleyArt() {
    std::cout << "        _.---._\n";
    std::cout << "     .-' ((O)) '-.\n";
    std::cout << "      \\ _.\\_/._ /\n";
    std::cout << "       /..___..\\\n";
    std::cout << "      (| e ) e |)\n";
    std::cout << "       \\  /_   /     |||\n";
    std::cout << "       _\\__-__/_   (\\|-|\n";
    std::cout << "      /`/ \\V/ \\`\\   \\  )\n";
    std::cout << "     /  \\  Y  /  \\  /=/\n";
    std::cout << "    / |  \\ | / {} \\/ /\n";
    std::cout << "    \\ \\   `|'   | \\_/\n";
    std::cout << "     |_)   |.   |\n";
    std::cout << "      ',__.'.__,'\n";
    std::cout << "       |   |   |\n";
    std::cout << "       |   |   |\n";
    std::cout << "       | _ | _ |\n";
    std::cout << "       |   |   |\n";
    std::cout << "       |___|___|\n";
    std::cout << "       /  J L  \\\n";
    std::cout << "      (__/   \\__)\n\n";
}

void trioArt() {
    std::cout << "       __\n";
    std::cout << "      /  '.\n";
    std::cout << "      )____\\_        ss$$ss        ,@@@@,\n";
    std::cout << "     /_______)      $$$`$$$$      /@@@@@@|\n";
    std::cout << "      SS e e|S      $|e e $$$      )- \\@@/\n";
    std::cout << "     SSS  - /SS    $$\\_-__$$$      \\J_ /\n";
    std::cout << "     SSS_`/'SSS    $$.-\\_/$$$     .-)_;-.\n";
    std::cout << "    /     o \\\\      /       \\    /       \\\n";
    std::cout << "   /  /   o | \\    /\\/|   |\\/\\  /_/|   |\\_\\\n";
    std::cout << "  |\\_/____o_|_/\\  / / |__,|/ /  \\ \\|___|/ /\n";
    std::cout << "  \\/ /      \\`-' /|| /    /||    )|\\   /|\\\n";
    std::cout << "    /        \\      /       \\     |_____|\n";
    std::cout << "    '-._____.-`    `-._____.-'     | | |\n";
    std::cout << "       | | |         | | |         |-|-|\n";
    std::cout << "       |-|-|         |-|-|         \\ | /\n";
    std::cout << "       / \\ '-.     .-' / \\         /-T-\\\n";
    std::cout << "       \\_/----'    '---\\_/        (_/ \\_)\n\n";
}

void endArt() {
    std::cout << "ooooooooooooo oooo                       oooooooooooo                   .o8\n";
    std::cout << "8'   888   `8 `888                       `888'     `8                  \"888\n";
    std::cout << "     888       888 .oo.    .ooooo.        888         ooo. .oo.    .oooo888\n";
    std::cout << "     888       888P\"Y88b  d88' `88b       888oooo8    `888P\"Y88b  d88' `888\n";
    std::cout << "     888       888   888  888ooo888       888         888   888  888   888\n";
    std::cout << "     888       888   888  888    .o       888       o  888   888  888   888\n";
    std::cout << "    o888o     o888o o888o `Y8bod8P'      o888ooooood8 o888o o888o `Y8bod88P\"\n\n";
}

std::string intro {
    "The rising sun slowly brightens your bedroom, lulling you from your dreams. Reluctantly, \n"
    "you pull yourself away from your slumber, opening your eyes a smidgen to help reacquaint \n"
    "yourself with the waking world. Blinking a few times to clear the sleep matter from your \n"
    "eyes and let your pupils adjust, you see a basket sitting on a small stool in the corner \n"
    "of the room. Pulling back the bedcovers and sitting up, you stretch your arms high up into \n"
    "the air, accompanied by a yawn. Besides the basket on the stool and the bed you're in, the \n"
    "room has three doors. Two of the doors are closed. The third is open a couple of inches.\n\n"
};

std::string introAsk {
    "What would you like to do (enter 1, 2, or 3)?\n\n"
};

std::string introChoice {
    "1: Push open the ajar door.\n"
    "2: Open the first closed door.\n"
    "3: Open the second closed door.\n\n"
};

//
//
// Cat's functions
//
//

void introduction();

void door1Bath();
void door1Bath_door2Closet();
void door1Bath_door2Out();

void door1Closet();
void door1Closet_door2Bath();
void door1Closet_door2Out();

void door1Out();
void door1Out_door2Bath();
void door1Out_door2Closet();

void outside();

void uphill1();
void uphill1Talk();
void uphill1Silent();
void uphill1Bill();

void downhill1();
void downhill1Talk();
void downhill1Silent();
void downhill1Bill();

void flat1();
void flat1Talk();
void flat1Silent();
void flat1Bill();

void uphill1Downhill2();
void uphill1Flat2();

void downhill1Uphill2();
void downhill1Flat2();

void flat1Uphill2();
void flat1Downhill2();

void pauline();
void tell();
void noTell();
void nan();
void attack();
void checkNan();
void paulineFTW();
void callPolice();
void noPolice();
void end();

void door1Lazy();
void door1BathLazy();
void door1ClosetLazy();
void door1OutLazy();
void crossroads1Lazy();
void uphill1Lazy();
void downhill1Lazy();
void flat1Lazy();
void uphill1Crossroads2Lazy();
void downhill1Crossroads2Lazy();
void flat1Crossroads2Lazy();
void paulineLazy();
void attackLazy();
void policeLazy();

// Game start

void introduction()
{
    std::cout << "The rising sun slowly brightens your bedroom, lulling you from your dreams. Reluctantly, you \npull yourself away from your slumber, opening your eyes a smidgen to help reacquaint yourself \nwith the waking world. Blinking a few times to clear the sleep matter from your eyes and let \nyour pupils adjust, you see a basket containing a bottle of juice and several sandwiches \nsitting on a small stool in the corner of the room. Pulling back the bedcovers and sitting \nup, you stretch your arms high up into the air, accompanied by a yawn.\n\n";

    delay15000();

    insideArt();

    std::cout << "Besides the basket on the stool and the bed you're in, the room has three doors. Two of the \ndoors are closed. The third is open a couple of inches.\n\n\n";

    delay7000();

    int choice;
    std::cout << "What would you like to do?\n\n";

    delay1500();

    std::cout << "1. Push open the ajar door.\n";
    std::cout << "2. Open the first closed door.\n";
    std::cout << "3. Open the second closed door.\n\n";

    std::cin >> choice;
    if (choice == 1)
    {
        door1Bath();
    }
    else
    {
        if (choice == 2)
        {
            door1Closet();
        }
        else
        {
            if (choice == 3)
            {
                door1Out();
            }
            else
            {
                door1Lazy();
            }
        }
    }
}

void door1Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1, 2, or 3, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What would you like to do?\n\n";

    delay1500();

    std::cout << "1. Push open the ajar door.\n";
    std::cout << "2. Open the first closed door.\n";
    std::cout << "3. Open the second closed door.\n\n";

    std::cin >> choice;
    if (choice == 1) {
        door1Bath();
    } else {
        if (choice == 2) {
            door1Closet();
        } else {
            if (choice == 3) {
                door1Out();
            } else {
                door1Lazy();
            }
        }
    }
}

// First choice | Bath (first closed door)

void door1Bath()
{
    n();

    bathArt();

    std::cout << "You push open the ajar door and see a toilet, sink, and bathtub. You walk to the toilet, sitting \ndown in a tired, just-woken-up heap, and go about your business. Now to get dressed.\n\n\n";

    delay7000();

    int choice;
    std::cout << "What would you like to do??\n\n";

    delay1500();

    std::cout << "1. Open the first closed door.\n";
    std::cout << "2. Open the second closed door.\n\n";

    std::cin >> choice;
    if (choice == 1)
        door1Bath_door2Closet();
    else if (choice == 2)
        door1Bath_door2Out();
    else
    {
        door1BathLazy();
    }
}

void door1BathLazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What would you like to do?\n\n";

    delay1500();

    std::cout << "1. Push open the ajar door.\n";
    std::cout << "2. Open the second closed door.\n\n";

    std::cin >> choice;
    if (choice == 1)
        door1Bath_door2Closet();
    else if (choice == 2)
        door1Bath_door2Out();
    else
    {
        door1BathLazy();
    }
}

void door1Bath_door2Closet()
{
    n();

    closetArt();

    std::cout << "You open the first closed door and assess your clothing options for the day. Before deciding, \nyou should check the weather outside.\n\n";

    delay7000();

    windArt();

    std::cout << "You open the second closed door, and a frigid breeze from outside whips around and up your \npajamas, chilling you.\n\n";

    delay7000();

    closetArt();

    std::cout << "Heading back to the closet, you put on a pair of slacks and a knitted sweater. You grab a warm \nwoolen cloak and wrap it around your shoulders, pulling up the hood to shield your ears from \nthe wind. You grab the basket from the stool in the corner and head outside.\n\n";

    delay10000();

    outside();
}

void door1Bath_door2Out()
{
    n();

    windArt();

    std::cout << "You open the second closed door, and a frigid breeze from outside whips around and up your pajamas, chilling you. Maybe you should rug up before heading out.\n\n";

    delay7000();

    closetArt();

    std::cout << "You open the first closed door and assess your clothing options for the day. You put on a pair of slacks and a knitted sweater. Since it's cold outside, you grab a warm woolen cloak and wrap it around your shoulders, pulling up the hood to shield your ears from the wind. You grab the basket from the stool in the corner and head outside.\n\n";

    delay10000();

    outside();
}

// First choice | Closet (first closed door)

void door1Closet()
    {
        n();

        closetArt();

        std::cout << "You open the first closed door and assess your clothing options for the day. Before deciding, \nyou really ought to get to the toilet to relieve yourself.\n\n\n";

        delay7000();

        int choice;
        std::cout << "What would you like to do??\n\n";

        delay1500();

        std::cout << "1. Push open the ajar door.\n";
        std::cout << "2. Open the second closed door.\n\n";

        std::cin >> choice;
        if (choice == 1)
            door1Closet_door2Bath();
        else if (choice == 2)
            door1Closet_door2Out();
        else
        {
            door1ClosetLazy();
        }
}

void door1ClosetLazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What would you like to do?\n\n";

    delay1500();

    std::cout << "1. Push open the ajar door.\n";
    std::cout << "2. Open the second closed door.\n\n";

    std::cin >> choice;
    if (choice == 1)
        door1Closet_door2Bath();
    else if (choice == 2)
        door1Closet_door2Out();
    else
    {
        door1ClosetLazy();
    }
}

void door1Closet_door2Bath()
{
    n();

    bathArt();

    std::cout << "You push open the ajar door and see a toilet, sink, and bathtub. You walk to the toilet, sitting \ndown in a tired, just-woken-up heap, and go about your business. Now to get dressed.\n\n";

    delay7000();

    windArt();

    std::cout << "You open the second closed door, and a frigid breeze from outside whips around and up your \npajamas, chilling you.\n\n";

    delay7000();
    
    closetArt();

    std::cout << "Heading back to the closet, you put on a pair of slacks and a knitted sweater. You grab a warm \nwoolen cloak and wrap it around your shoulders, pulling up the hood to shield your ears from \nthe wind. You grab the basket from the stool in the corner and head outside.\n\n";

    delay10000();

    outside();
}

void door1Closet_door2Out()
{
    n();

    windArt();

    std::cout << "You open the second closed door, and a frigid breeze from outside whips around and up your \npajamas, chilling you. Maybe you should rug up before heading out.\n\n";

    delay7000();

    accidentArt();

    std::cout << "You need to clean up, too, as you've just wet yourself.\n\n";

    delay5000();

    bathtubArt();

    std::cout << "In a fit of disgust, you push open the ajar door so hard that it swings wildly, slamming into \nthe wall. Cringing at the sound, you peel off your wet pajamas, tossing them into the sink. \nYou start drawing a bath while you hand-wash and hang the sodden heap of clothes. Slipping \ninto the warm bath, you luxuriate for a few minutes before you remember the basket. You get \nto work scrubbing clean before getting out and drying off.\n\n";

    delay15000();

    closetArt();

    std::cout << "Heading back to the closet, you put on a pair of slacks and a knitted sweater. Since it's cold \noutside, you grab a warm woolen cloak and wrap it around your shoulders, pulling up the \nhood to shield your ears from the wind. You grab the basket from the stool in the corner and \nhead outside.\n\n";

    delay10000();

    outside();
}

// First choice | Outside (second closed door)

void door1Out()
{
    n();

    windArt();

    std::cout << "You open the second closed door, and a frigid breeze from outside whips around and up your \npajamas, chilling you. Maybe you should rug up before heading out. You really ought to get to \nthe toilet to relieve yourself, too.\n\n\n";

    delay7000();

    int choice;
    std::cout << "What would you like to do??\n\n";

    delay1500();

    std::cout << "1. Push open the ajar door.\n";
    std::cout << "2. Open the first closed door.\n\n";

    std::cin >> choice;
    if (choice == 1)
        door1Out_door2Bath();
    else if (choice == 2)
        door1Out_door2Closet();
    else
    {
        door1OutLazy();
    }
}

void door1OutLazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What would you like to do?\n\n";

    delay1500();

    std::cout << "1. Push open the ajar door.\n";
    std::cout << "2. Open the first closed door.\n\n";

    std::cin >> choice;
    if (choice == 1)
        door1Out_door2Bath();
    else if (choice == 2)
        door1Out_door2Closet();
    else
    {
        door1OutLazy();
    }
}

void door1Out_door2Bath()
{
    n();

    bathArt();

    std::cout << "You push open the ajar door and see a toilet, sink, and bathtub. You walk to the toilet, sitting \ndown in a tired, just-woken-up heap, and go about your business. Now to get dressed.\n\n";

    delay7000();

    closetArt();

    std::cout << "You open the first closed door and assess your clothing options for the day. You put on a pair \nof slacks and a knitted sweater. Since it's cold outside, you grab a warm woolen cloak and \nwrap it around your shoulders, pulling up the hood to shield your ears from the wind. You grab \nthe basket from the stool in the corner and head outside.\n\n";

    delay10000();

    outside();
}

void door1Out_door2Closet()
{
    n();

    closetArt();

    std::cout << "You open the first closed door and assess your clothing options for the day.\n\n";

    delay7000();

    accidentArt();

    std::cout << "You need to clean up, too, as you've just wet yourself.\n\n";

    delay5000();

    bathtubArt();

    std::cout << "In a fit of disgust, you push open the ajar door so hard that it swings wildly, slamming into \nthe wall. Cringing at the sound, you peel off your wet pajamas, tossing them into the sink. \nYou start drawing a bath while you hand-wash and hang the sodden heap of clothes. Slipping \ninto the warm bath, you luxuriate for a few minutes before you remember the basket. You get \nto work scrubbing clean before getting out and drying off.\n\n";

    delay15000();

    closetArt();

    std::cout << "Heading back to the closet, you put on a pair of slacks and a knitted sweater. Since it's cold \noutside, you grab a warm woolen cloak and wrap it around your shoulders, pulling up the \nhood to shield your ears from the wind. You grab the basket from the stool in the corner and \nhead outside.\n\n";

    delay10000();

    outside();
}

// Going outside

void outside() {
    outsideArt();

    std::cout << "Despite the chill, the air is crisp and clear. You breathe deeply, savoring the fresh scent \nof nature around you. In the distance, you hear songbirds going about their merry morning \ngossip. A squirrel, spooked by your appearance, dashes across the path and scurries up a \ntree. Soon, you come to a fork in the road.\n\n";

    delay10000();

    uphillArt();

    std::cout << "The path to the left leads uphill. Groves of redwood trees shade the groundcover of ferns and duff, darkening everything.\n\n";

    delay7000();

    downhillArt();

    std::cout << "The path to the right leads downhill. Moss and lichen appear to be thriving in the moist, foggy environment.\n\n";

    delay7000();

    flatArt();

    std::cout << "The path straight ahead is level and flat. The bright sun makes the path look welcoming, but you don't have any sunscreen.\n\n\n";

    delay7000();

    int choice;
    std::cout << "Which path do you take?\n\n";

    delay1500();

    std::cout << "1. The shady path to the left that leads uphill.\n";
    std::cout << "2: The foggy path to the right that leads downhill.\n";
    std::cout << "3: The sunny, flat path straight ahead.\n\n";

    std::cin >> choice;
    if (choice == 1)
        uphill1(); // replace "Flat1" with name of first uphill function
    else if (choice == 2)
        downhill1(); // replace "Flat1" with name of first downhill function
    else if (choice == 3)
        flat1();
    else
    {
        crossroads1Lazy();
    }
}

void crossroads1Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1, 2, or 3, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "Which path do you take?\n\n";

    delay1500();

    std::cout << "1. The shady path to the left that leads uphill.\n";
    std::cout << "2: The foggy path to the right that leads downhill.\n";
    std::cout << "3: The sunny, flat path straight ahead.\n\n";

    std::cin >> choice;
    if (choice == 1)
        uphill1();
    else if (choice == 2)
        downhill1();
    else if (choice == 3)
        flat1();
    else
    {
        crossroads1Lazy();
    }
}

// Uphill path

void uphill1()
{
    n();

    uphillArt();

    std::cout << "Eager for a small hike before your arrival, you turn left. You'll be only half an hour or \nso later than you planned. You don't think Nan will mind too much. The redwood forest seems \nthicker and darker than usual for some reason, but you can't quite put your finger on what. \nTaking a firmer grip on the basket and tightening your cloak, you quicken your pace.\n\n";

    delay15000();

    std::cout << "\033[31m\"Hello, little girl,\"\033[0m says a cool voice.\n\n";

    delay3000();

    billArt();

    std::cout << "Gasping and practically jumping out of your skin, you whip around to face a tall, skinny man \nstanding next to a cart of leather goods. You could have sworn he wasn't there a moment ago\u2014you \nwalked right past him and would have seen him.\n\n\n";

    delay7000();

    int choice;
    std::cout << "What do you say?\n\n";

    delay1500();

    std::cout << "1. Hello, of course. It would be rude not to!\n";
    std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";

    std::cin >> choice;
    if (choice == 1)
        uphill1Talk();
    else if (choice == 2)
        uphill1Silent();
    else
    {
        uphill1Lazy();
    }
}

void uphill1Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What do you say?\n\n";

    delay1500();

    std::cout << "1. Hello, of course. It would be rude not to!\n";
    std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";

    std::cin >> choice;
    if (choice == 1)
        uphill1Talk();
    else if (choice == 2)
        uphill1Silent();
    else
    {
        uphill1Lazy();
    }
}

void uphill1Talk()
{
    n();

    std::cout << "\033[36m\"Hello, Sir,\"\033[0m you finally get out.\n\n";

    delay3000();

    std::cout << "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[36m\"Lunch with my friend.\"\033[0m\n\n";

    delay2000();

    uphill1Bill();
}

void uphill1Silent()
{
    n();

    std::cout << "In too much shock, you say nothing, blinking.\n\n";

    delay3000();

    std::cout << "\033[31m\"What brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "You remain silent.\n\n";

    delay2000();

    std::cout << "The leather dealer smirks at you, \033[31m\"Wolf got your tongue?\"\033[0m\n\n";

    delay3000();

    std::cout << "Stammering, you finally manage to speak.\033[36m\"No, sir. I'm having lunch with my friend.\"\033[0m\n\n";

    delay3000();

    uphill1Bill();
}

void uphill1Bill()
{
    std::cout << "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested \nin some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand \nnew leather coat.\"\033[0m\n\n";

    delay7000();

    std::cout << "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[36m\"What?\"\033[0m\n\n";

    delay2000();

    std::cout << "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[36m\"Good day.\"\033[0m Perturbed, you turn around and head back to the fork in the road.\n\n\n";

    delay3000();

    int choice;
    std::cout << "Which path do you take now?\n\n";

    delay1500();

    std::cout << "1: The foggy path to the right that leads downhill.\n";
    std::cout << "2: The sunny, flat path straight ahead.\n\n";

    std::cin >> choice;
    if (choice == 1)
        uphill1Downhill2();
    else if (choice == 2)
        uphill1Flat2();
    else
    {
        uphill1Crossroads2Lazy();
    }
}

void uphill1Crossroads2Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "Which path do you take now?\n\n";

    delay1500();

    std::cout << "1: The foggy path to the right that leads downhill.\n";
    std::cout << "2: The sunny, flat path straight ahead.\n\n";

    std::cin >> choice;
    if (choice == 1)
        uphill1Downhill2();
    else if (choice == 2)
        uphill1Flat2();
    else
    {
        uphill1Crossroads2Lazy();
    }
}

void uphill1Downhill2()
{
    n();

    streamArt();

    std::cout << "You head downhill toward the mossy stream to splash some water on your face. That Bill person \nweirded you out to no end. The moisture from the fog feels invigorating, calming your nerves \nalready. Reaching the stream, you put the basket down on a tree stump and kneel to scoop up \nsome cool water, splashing it on your face and smoothing down your hair. Over the sound of the \nstream, you can hear someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed, \nyou decide to head towards Pauline to say hi.\n\n";

    delay15000();

    pauline();
}

void uphill1Flat2()
{
    n();

    streamArt();

    std::cout << "You head out along the flat path. You need a bit of sun on your face. That Bill person weirded \nyou out to no end. The sun's warmth feels invigorating, calming your nerves already. Reaching \na stream, you put the basket down on a tree stump and kneel to scoop up some cool water, \nsplashing it on your face and smoothing down your hair. Over the sound of the stream, you can \nhear someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed, you decide to \nhead towards Pauline to say hi.\n\n";

    delay15000();

    pauline();
}

// Downhill path

void downhill1()
{
    downhillArt();

    std::cout << "Eager for a small hike before your arrival, you turn right. You'll be only half an hour or \nso later than you planned. You don't think Nan will mind too much. The fog seems thicker and \ndarker than usual for some reason, but you can't quite put your finger on what. Taking a \nfirmer grip on the basket and tightening your cloak, you quicken your pace.\n\n.";

    delay15000();

    std::cout << "\033[31m\"Hello, little girl,\"\033[0m says a cool voice.\n\n";

    delay3000();

    billArt();

    std::cout << "Gasping and practically jumping out of your skin, you whip around to face a tall, skinny man \nstanding next to a cart of leather goods. You could have sworn he wasn't there a moment ago\u2014you \nwalked right past him and would have seen him.\n\n\n";

    delay7000();

    int choice;
    std::cout << "What do you say?\n\n";

    delay1500();

    std::cout << "1. Hello, of course. It would be rude not to!\n";
    std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";

    std::cin >> choice;
    if (choice == 1)
        downhill1Talk();
    else if (choice == 2)
        downhill1Silent();
    else
    {
        downhill1Lazy();
    }
}

void downhill1Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What do you say?\n\n";

    delay1500();

    std::cout << "1. Hello, of course. It would be rude not to!\n";
    std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";

    std::cin >> choice;
    if (choice == 1)
        downhill1Talk();
    else if (choice == 2)
        downhill1Silent();
    else
    {
        downhill1Lazy();
    }
}

void downhill1Talk()
{
    n();

    std::cout << "\033[36m\"Hello, Sir,\"\033[0m you finally get out.\n\n";

    delay3000();

    std::cout << "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[36m\"Lunch with my friend.\"\033[0m\n\n";

    delay2000();

    downhill1Bill();
}

void downhill1Silent()
{
    n();

    std::cout << "In too much shock, you say nothing, blinking.\n\n";

    delay3000();

    std::cout << "\033[31m\"What brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "You remain silent.\n\n";

    delay2000();

    std::cout << "The leather dealer smirks at you, \033[31m\"Wolf got your tongue?\"\033[0m\n\n";

    delay3000();

    std::cout << "Stammering, you finally manage to speak.\033[36m\"No, sir. I'm having lunch with my friend.\"\033[0m\n\n";

    delay3000();

    downhill1Bill();
}

void downhill1Bill()
{
    std::cout << "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested \nin some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand \nnew leather coat.\"\033[0m\n\n";

    delay7000();

    std::cout << "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[36m\"What?\"\033[0m\n\n";

    delay2000();

    std::cout << "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[36m\"Good day.\"\033[0m Perturbed, you turn around and head back to the fork in the road.\n\n\n";

    delay3000();

    int choice;
    std::cout << "Which path do you take now?\n\n";

    delay1500();

    std::cout << "1: The shady path to the left that leads uphill.\n";
    std::cout << "2: The sunny, flat path straight ahead.\n\n";

    std::cin >> choice;
    if (choice == 1)
        downhill1Uphill2();
    else if (choice == 2)
        downhill1Flat2();
    else
    {
        downhill1Crossroads2Lazy();
    }
}

void downhill1Crossroads2Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "Which path do you take now?\n\n";

    delay1500();

    std::cout << "1: The shady path to the left that leads uphill.\n";
    std::cout << "2: The sunny, flat path straight ahead.\n\n";

    std::cin >> choice;
    if (choice == 1)
        downhill1Uphill2();
    else if (choice == 2)
        downhill1Flat2();
    else
    {
        downhill1Crossroads2Lazy();
    }
}

void downhill1Uphill2()
{
    n();

    streamArt();

    std::cout << "You head uphill to the stream in the redwood forest to splash some water on your face. That \nBill person weirded you out to no end. The scent of the redwoods feels invigorating, calming \nyour nerves already. Reaching the stream, you put the basket down on a tree stump and kneel to \nscoop up some cool water, splashing it on your face and smoothing down your hair. Over the \nsound of the stream, you can hear someone chopping wood nearby. Pauline Bunyan must be at \nwork. Refreshed, you decide to head towards Pauline to say hi.\n\n";

    delay15000();

    pauline();
}

void downhill1Flat2()
{
    n();

    streamArt();

    std::cout << "You head out along the flat path. You need a bit of sun on your face. That Bill person weirded \nyou out to no end. The sun's warmth feels invigorating, calming your nerves already. Reaching \na stream, you put the basket down on a tree stump and kneel to scoop up some cool water, \nsplashing it on your face and smoothing down your hair. Over the sound of the stream, you can \nhear someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed, you decide to \nhead towards Pauline to say hi.\n\n";

    delay15000();

    pauline();
}

// Flat path

void flat1()
{
    n();

    flatArt();

    std::cout << "Eager to feel the sun on your face, you go straight. You'll be only half an hour or so later \nthan you planned. You don't think Nan will mind too much. Although the air is cold, the sun \nis warm, bordering on hot, and seems a bit stifling for some reason, but you can't quite put \nyour finger on what. Taking a firmer grip on the basket, you quicken your pace.\n\n";

    delay15000();

    std::cout << "\033[31m\"Hello, little girl,\"\033[0m says a cool voice.\n\n";

    delay3000();

    billArt();

    std::cout << "Gasping and practically jumping out of your skin, you whip around to face a tall, skinny man \nstanding next to a cart of leather goods. You could have sworn he wasn't there a moment ago\u2014you \nwalked right past him and would have seen him.\n\n\n";

    delay7000();

    int choice;
    std::cout << "What do you say?\n\n";

    delay1500();

    std::cout << "1. Hello, of course. It would be rude not to!\n";
    std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";

    std::cin >> choice;
    if (choice == 1)
        flat1Talk();
    else if (choice == 2)
        flat1Silent();
    else
    {
        flat1Lazy();
    }
}

void flat1Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What do you say?\n\n";

    delay1500();

    std::cout << "1. Hello, of course. It would be rude not to!\n";
    std::cout << "2. Nothing. You're not supposed to talk to strangers.\n\n";

    std::cin >> choice;
    if (choice == 1)
        flat1Talk();
    else if (choice == 2)
        flat1Silent();
    else
    {
        flat1Lazy();
    }
}

void flat1Talk()
{
    n();

    std::cout << "\033[36m\"Hello, Sir,\"\033[0m you finally get out.\n\n";

    delay3000();

    std::cout <<  "\033[31m\"And what brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[36m\"Lunch with my friend.\"\033[0m\n\n";

    delay2000();

    flat1Bill();
}

void flat1Silent()
{
    n();

    std::cout << "In too much shock, you say nothing, blinking.\n\n";

    delay3000();

    std::cout << "\033[31m\"What brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "You remain silent.\n\n";

    delay2000();

    std::cout << "The leather dealer smirks at you, \033[31m\"Wolf got your tongue?\"\033[0m\n\n";

    delay3000();

    std::cout << "Stammering, you finally manage to speak.\033[36m\"No, sir. I'm having lunch with my friend.\"\033[0m\n\n";

    delay3000();

    flat1Bill();
}

void flat1Bill()
{
    std::cout << "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested \nin some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand \nnew leather coat.\"\033[0m\n\n";

    delay7000();

    std::cout << "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[36m\"What?\"\033[0m\n\n";

    delay2000();

    std::cout << "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[36m\"Good day.\"\033[0m Perturbed, you turn around and head back to the fork in the road.\n\n\n";

    delay3000();

    int choice;
    std::cout << "Which path do you take now?\n\n";

    delay1500();

    std::cout << "1: The shady path to the left that leads uphill.\n";
    std::cout << "2: The foggy path to the right that leads downhill.\n\n";

    std::cin >> choice;
    if (choice == 1)
        flat1Uphill2();
    else if (choice == 2)
        flat1Downhill2();
    else
    {
        flat1Crossroads2Lazy();
    }
}

void flat1Crossroads2Lazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "Which path do you take now?\n\n";

    delay1500();

    std::cout << "1: The shady path to the left that leads uphill.\n";
    std::cout << "2: The foggy path to the right that leads downhill.\n\n";

    std::cin >> choice;
    if (choice == 1)
        flat1Uphill2();
    else if (choice == 2)
        flat1Downhill2();
    else
    {
        flat1Crossroads2Lazy();
    }
}

void flat1Uphill2() {
    n();

    streamArt();

    std::cout << "You head uphill to the stream in the redwood forest to splash some water on your face. That \nBill person weirded you out to no end. The scent of the redwoods feels invigorating, calming \nyour nerves already. Reaching the stream, you put the basket down on a tree stump and kneel to \nscoop up some cool water, splashing it on your face and smoothing down your hair. Over the \nsound of the stream, you can hear someone chopping wood nearby. Pauline Bunyan must be at \nwork. Refreshed, you decide to head towards Pauline to say hi.\n\n";

    delay15000();

    pauline();
}

void flat1Downhill2()
{
    n();

    streamArt();

    std::cout << "You head downhill toward the mossy stream to splash some water on your face. That Bill person \nweirded you out to no end. The moisture from the fog feels invigorating, calming your nerves \nalready. Reaching the stream, you put the basket down on a tree stump and kneel to scoop up \nsome cool water, splashing it on your face and smoothing down your hair. Over the sound of the \nstream, you can hear someone chopping wood nearby. Pauline Bunyan must be at work. Refreshed, \nyou decide to head towards Pauline to say hi.\n\n";

    delay15000();

    pauline();
}

// Rest of story

void pauline()
{
    n();

    paulineArt();

    std::cout << "Coming upon Pauline, she lowers her axe and waves at you.\n\n";

    delay3000();

    std::cout << "You wave back, \033[36m\"Hello there!\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[92m\"Hi! What brings you around this neck of the woods?\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[36m\"I'm visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you. \n\033[36m\"Would you like to join us? We have plenty to share.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[92m\"Tempting, but I want to make sure I get all my chopping done. Thanks for offering, though!\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[36m\"No worries\u2014more for us then!\"\033[0m You break into a wide smile, and you both laugh.\n\n\n";

    delay3000();

    int choice;
    std::cout << "Do you mention the leather dealer?\n\n";

    delay1500();

    std::cout << "1: Yes.\n";
    std::cout << "2: No.\n\n";

    std::cin >> choice;
    if (choice == 1)
        tell();
    else if (choice == 2)
        noTell();
    else
    {
        paulineLazy();
    }
}

void paulineLazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "Do you mention the leather dealer?\n\n";

    delay1500();

    std::cout << "1: Yes.\n";
    std::cout << "2: No.\n\n";

    std::cin >> choice;
    if (choice == 1)
        tell();
    else if (choice == 2)
        noTell();
    else
    {
        paulineLazy();
    }
}

void tell()
{
    n();
    
    std::cout << "You remember Pauline mentioning that her leather axe holster was wearing out and she'd need \na new one soon. You decide to tell her about Bill, despite his creepiness. \033[36m\"I passed by a leather dealer earlier. He called himself 'Buffalo Bill.'\"\033[0m\n\n";

    delay7000();

    std::cout << "\033[92m\"Weird name,\"\033[0m Pauline says, making a face.\n\n";

    delay3000();

    std::cout << "\033[36m\"I know, right? He seemed super creepy, but I know you've been looking for a new holster for \nyour axe. He might have something that will work.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[92m\"Thanks! I might check him out.\"\033[0m\n\n";

    delay3000();

    nan();
}

void noTell()
{
    n();
    
    std::cout << "You remember Pauline mentioning that her leather axe holster was wearing out and she'd need \na new one soon. That Bill guy was super creepy, though. You decide not to mention him.\n\n";

    delay7000();

    nan();
}

void nan()
{
    std::cout << "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n\n";

    delay3000();

    std::cout << "\033[36m\"Will do!\"\033[0m\n\n";

    delay2000();

    nanhouseArt();

    std::cout << "Breaking into a light jog, you venture back to the crossroads and take the last path. You're \neager to see Nan and eat some lunch; all that hiking and chatting built up an appetite, and \nnow you're running a little bit late. Unbeknownst to you, Bill had been following you the \nwhole time.\n\n";

    delay10000();

    nanArt();

    std::cout << "Reaching Nan's, you knock on the door. Nan opens the door and greets you with a warm hug. \033[95m\"It's \nso good to see you, but what kept you, my little Red Robin?\"\033[0m\n\n";

    delay7000();

    std::cout << "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She \nsays 'Hi' by the way.\"\033[0m\n\n";

    delay5000();

    std::cout << "\033[95m\"What a busy morning! Well, you're here now; let's eat the lunch you bro\u2014\"\033[0m Before Nan can finish, \nBill breaks down the door, brandishing a rope fashioned into a noose. He kicks Nan squarely \nin the chest, causing her to fall to the floor, hitting her head and knocking her unconscious.\n\n\n";

    delay15000();

    int choice;
    std::cout << "What do you do?\n\n";

    delay1500();

    std::cout << "1: Lunge at Bill.\n";
    std::cout << "2: Check on Nan.\n\n";

    std::cin >> choice;
    if (choice == 1)
        attack();
    else if (choice == 2)
        checkNan();
    else
    {
        attackLazy();
    }
}

void attackLazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "What do you do?\n\n";

    delay1500();

    std::cout << "1: Lunge at Bill.\n";
    std::cout << "2: Check on Nan.\n\n";

    std::cin >> choice;
    if (choice == 1)
        attack();
    else if (choice == 2)
        checkNan();
    else
    {
        attackLazy();
    }
}

void attack()
{
    n();
    
    std::cout << "You lunge at Bill, grasping for the rope, but he's too quick for you. He dodges your attack, \nmanaging to slip the rope around your neck in the process. \033[31m\"Your skin will make some fine, \nfine leather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n\n";

    delay10000();

    paulineFTW();
}

void checkNan()
{
    n();
    
    std::cout << "You drop to the floor next to Nan, attempting to revive her so you both can escape. Bill comes \nup behind you and slips the rope around your neck. \033[31m\"Your skin will make some fine, fine \nleather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n\n";

    delay10000();

    paulineFTW();
}

void paulineFTW()
{
    std::cout << "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out \nthrough the open door, \033[92m\"I brought my axe with me, too, in case Nan needs any fresh firewood.\"\033[0m \nShe gasps at the scene inside as she steps through the doorway. Without any time to spare, \nshe grasps her axe and brings it down hard onto Bill's skull, killing him instantly.\n\n";

    delay10000();

    deathArt();

    delay10000();

    std::cout << "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains \nconsciousness and looks up at Pauline. \033[95m\"Thank goodness you came. We'd be goners for sure.\"\033[0m\n\n";

    delay7000();

    std::cout << "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n\n\n";

    delay3000();

    int choice;
    std::cout << "Should you call the police?\n\n";

    delay1500();

    std::cout << "1: Yes.\n";
    std::cout << "2: No.\n\n";

    std::cin >> choice;
    if (choice == 1)
        callPolice();
    else if (choice == 2)
        noPolice();
    else
    {
        policeLazy();
    }
}

void policeLazy()
{
    n();

    std::cout << "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n";

    delay2000();

    int choice;
    std::cout << "Should you call the police?\n\n";

    delay1500();

    std::cout << "1: Yes.\n";
    std::cout << "2: No.\n\n";

    std::cin >> choice;
    if (choice == 1)
        callPolice();
    else if (choice == 2)
        noPolice();
    else
    {
        policeLazy();
    }
}

void callPolice()
{
    n();
    
    std::cout << "You nod, \033[36m\"Yes, the authorities need to know.\"\033[0m\n\n";

    delay3000();

    std::cout << "Nan reaches for the telephone and begins to dial 9-1-1.\n\n";

    delay3000();

    end();
}

void noPolice()
{
    n();
    
    std::cout << "You shake your head, \033[36m\"We can't call the police. They'd never believe us!\"\033[0m\n\n";

    delay3000();

    end();
}

void end()
{
    std::cout << "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n\n";

    delay5000();

    langleyArt();

    std::cout << "\033[34m\"I'm Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you've met 'Buffalo Bill.' \nWe've been tailing him across state lines for months and were minutes behind him when \nhe entered this house. On behalf of the Bureau, thank you. You potentially saved countless \nfuture victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n";

    delay15000();

    std::cout << "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and \nscene secure. Notify the coroner\u2014we need to transport the body.\"\033[0m He turns back to the women, \n\033[34m\"We need to take your statements and remove the  body, then you'll be free to go.\"\033[0m\n\n";

    delay7000();

    trioArt();

    std::cout << "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" \nthey all say in unison.\n\n\n";

    delay10000();

    endArt();
}

//
//
//
// Main
//
//
//

int main()
{
    titleArt();

    delay10000();

    n();

    introduction();

    /*
    
    insideArt();

    std::cout << intro;

    delay20000();

    std::cout << introAsk;

    delay1500();

    std::cout << introChoice;

    int choice {};

    bool validInput { true };

    while (validInput) { // Door choices at start
        std::cin >> choice;

        if (choice == 1) // Bathroom (ajar door)
        {
            door1Bath();

            std::string ajar1 {
                "You push open the ajar door and see a toilet, sink, and bathtub. You walk to the toilet, \n"
                "sitting down in a tired, just-woken-up heap, and go about your business. Now to get dressed.\n\n"
            };

            std::string ajar1Ask {
                "What would you like to do?\n\n"
            };

            std::string ajar1Choice {
                "1: Open the first closed door.\n"
                "2: Open the second closed door.\n\n" 
            };
            
            n();
            
            bathArt();

            std::cout << ajar1;

            delay7000();

            std::cout << ajar1Ask;

            delay1500();

            std::cout << ajar1Choice;

            // CODE TO CONTINUE THIS BRANCH HERE
            int choice {};
            while (validInput)
            {
                std::cin >> choice;

                n();

                if (choice == 1)  // Closet (first closed door) | After bathroom
                {
                    std::string closet2 {
                        "You open the first door and assess your clothing options for the day. Before deciding, you \n"
                        "should check the weather outside.\n\n"
                    };

                    std::string outdoor3 {
                        "You open the second closed door, and a frigid breeze from outside whips around and up your \n"
                        "pajamas, chilling you. Heading back to the closet, you put on a pair of slacks and a \n"
                        "knitted sweater. You grab a warm woolen cloak and wrap it around your shoulders, pulling \n"
                        "up the hood to shield your ears from the wind. You grab the basket from the stool in the \n"
                        "corner and head outside.\n\n"
                    };

                    n();

                    closetArt();

                    std::cout << closet2 << std::endl;
                    
                    delay7000();

                    windArt();

                    std::cout << outdoor3 << std::endl;

                    delay10000();

                    validInput = false; 
                }
                else if (choice == 2) // Outside (second closed door) | After bathroom
                {
                    std::string outdoor2 {
                        "You open the second door and a frigid breeze from outside whips around and up your pajamas, \n"
                        "chilling you. Maybe you should rug up before heading out."
                    };
                    
                    std::string closet3 {
                        "You open the first closed door and assess your clothing options for the day. You put on a \n"
                        "pair of slacks and a knitted sweater. Since it's cold outside, you grab a warm woolen cloak \n"
                        "and wrap it around your shoulders, pulling up the hood to shield your ears from the wind. \n"
                        "You grab the basket from the stool in the corner and head outside.\n\n"
                    };
                    
                    n();
                    
                    outsideArt();

                    std::cout << outdoor2 << std::endl;

                    delay7000();

                    closetArt();

                    delay10000();

                    validInput = false; 
                }
                else
                {
                    std::string ajar1lazy {
                        "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n"
                    };
                    
                    n();

                    delay2000();

                    std::cout << ajar1lazy << std::endl;

                    delay1500();                
                }
            }
                    
        }

        else if (choice == 2) // Closet (first closed door)
        {
            door1Closet();

            std::string closet1 {
                "You open the first door and assess your clothing options for the day. Before deciding, \n"
                "you really ought to get to the toilet to relieve yourself.\n\n"
            };

            std::string closet1Ask {
                "What would you like to do?\n\n"
            };

            std::string closet1Choice {
                "1: Push open the ajar door.\n"
                "2: Open the second closed door.\n\n"
            };

            /*n();

            closetArt();

            std::cout << closet1;

            delay7000();

            std::cout << closet1Ask;

            delay1500();

            std::cout << closet1Choice;
            
            delay1500();

            std::string ajarDoor {
                "You push open the ajar door and see a toilet, sink, and bathtub. You walk to the toilet, \n"
                "sitting down in a tired, just-woken-up heap, and go about your business. Now to get dressed.\n\n"
            };

            std::string ajarDoor2 {
                "You open the second closed door, and a frigid breeze from outside whips around and up your \n"
                "pajamas, chilling you. Heading back to the closet, you put on a pair of slacks and a \n"
                "knitted sweater. You grab a warm woolen cloak and wrap it around your shoulders, pulling \n"
                "up the hood to shield your ears from the wind. You grab the basket from the stool in the \n"
                "corner and head outside.\n\n"
            };

            std::string closedDoor {
                "You open the second closed door, and a frigid breeze from outside whips around and up your \n"
                "pajamas, chilling you. Maybe you should rug up before heading out. You need to clean yourself \n"
                "up, too, as you've just wet yourself.\n\n"
            };

            std::string closedDoor2 {
                "In a fit of disgust, you push open the ajar door so hard that it swings wildly, slamming into \n"
                "the wall. Cringing at the sound, you peel off your wet pajamas, tossing them into the sink. \n"
                "You start drawing a bath while you hand-wash and hang the sodden heap of clothes. Slipping \n"
                "into the warm bath, you luxuriate for a few minutes before you remember the basket. You get \n"
                "to work scrubbing clean before getting out and drying off. Heading back to the closet, you \n"
                "put on a pair of slacks and a knitted sweater. Since it's cold outside, you grab a warm \n"
                "woolen cloak and wrap it around your shoulders, pulling up the hood to shield your ears \n"
                "from the wind. You grab the basket from the stool in the corner and head outside.\n\n"
            };
            
            makeChoice(ajarDoor, closedDoor);

            validInput = false;
        }

        else if (choice == 3) // Outside (second closed door)
        {
            door1Out();
        }

        else
        {
            door1Lazy();

            /*n();

            std::string closet1Lazy {
                "You can't be a lazy daisy all day. Enter 1 or 2, corresponding to what you want to do.\n\n"
            };

            n();

            delay2000();

            std::cout << closet1Lazy;

            delay1500();
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

    

    bool whileTrueVar2 { true };
    int choice2 {};

    while (whileTrueVar2) 
    {
        std::cin >> choice2;

        // Uphill path

        if (choice2 == 1)
        {
            uphill1();

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
                         "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested in some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                        // delay //
                        "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                        // delay //
                        "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n"
                        // delay //
                        "\033[36m\"What?\"\033[0m\n"
                        // delay //
                        "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
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
                            "Stammering, you finally manage to speak.\033[36m\"No, sir. I'm having lunch with my friend.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested in some of my wares? Your poor cloak looks tired "
                            "and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                            // delay //
                            "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n"
                            // delay //
                            "\033[36m\"What?\"\033[0m\n"
                            // delay //
                            "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
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
                    "\033[36m\"I'm visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
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
                    "\033[36m\"I'm visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
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
                    "out and she'd need a new one soon. You decide to tell her about Bill, despite his creepiness.\n"
                    "\033[36m\"I passed by a leather dealer earlier. He called himself 'Buffalo Bill.'\"\033[0m\n"
                    "\033[92m\"Weird name,\"\033[0m Pauline says, making a face.\n"
                    "\033[36m\"I know, right? He seemed super creepy, but I know you've been looking for a new holster\n"
                    "for your axe. He might have something that will work.\"\033[0m\n"
                    "\033[92m\"Thanks! I might check him out.\"\033[0m\n"
                    "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you're running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan's, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi' by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you're here now; let's eat the lunch you bro—\"\033[0m\n"
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
                    "out and she'd need a new one soon. That Bill guy was super creepy, though. You decide not to mention him.\n\n"
                    "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you're running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan's, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[36m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi' by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you're here now; let's eat the lunch you bro—\"\033[0m\n"
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
                    std:: string text {"You lunge at Bill, grasping for the rope, but he's too quick for you. He dodges your attack, managing to slip the rope\n"
                    "around your neck in the process. \033[31m\"Your skin will make some fine, fine leather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n"
                    "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill's skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We'd be goners for sure.\"\033[0m\n"
                    "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n"
                    // long delay //
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else if (gChoice == 2)
                {
                    std::string text {"You drop to the floor next to Nan, attempting to revive her so you both can escape. Bill comes up behind you and slips the rope\n"
                    "around your neck. \033[31m\"Your skin will make some fine, fine leather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n"
                   "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill's skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We'd be goners for sure.\"\033[0m\n"
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
                    "\033[34m\"I'm Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you've met 'Buffalo Bill.' We've been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you'll be free to go.\"\033[0m\n\n"
                    "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" they all say in unison.\n"
                    };
                    std::cout << text << std::endl;
                    validInput = false; 
                }
                else if (fChoice == 2)
                {
                    std::string text {"You shake your head, \033[36m\"We can't call the police. They'd never believe us!\"\033[0m\n"
                    "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n"
                    "Several FBI agents and cops enter the house, guns drawn. A man who clearly is the head of the operation steps forward.\n"
                    "\033[34m\"I'm Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you've met 'Buffalo Bill.' We've been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you'll be free to go.\"\033[0m\n\n"
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
                         "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested in some of my wares? Your poor cloak looks tired and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                        // delay //
                        "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                        // delay //
                        "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n"
                        // delay //
                        "\033[36m\"What?\"\033[0m\n"
                        // delay //
                        "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
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
                            "Stammering, you finally manage to speak.\033[36m\"No, sir. I'm having lunch with my friend.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Lovely! My name is Ted Levine, but everyone calls me 'Buffalo Bill.' Might you be interested in some of my wares? Your poor cloak looks tired "
                            "and ratty. You would look divine in a brand new leather coat.\"\033[0m\n"
                            // delay //
                            "\033[36m\"No thank you, Bill. I really must be going.\"\033[0m\n"
                            // delay //
                            "\033[31m\"Very well. I wouldn't be surprised to see you as a new leather coat soon.\"\033[0m\n"
                            // delay //
                            "\033[36m\"What?\"\033[0m\n"
                            // delay //
                            "\033[31m\"I wouldn't be surprised to see you in a new leather coat soon. Good day, little girl.\"\033[0m\n"
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
                "\033[36m\"I'm visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
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
                "\033[36m\"I'm visiting Nan for lunch,\"\033[0m you reply, raising the basket to indicate you have it with you.\n"
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
                    "out and she'd need a new one soon. You decide to tell her about Bill, despite his creepiness.\n"
                    "\033[36m\"I passed by a leather dealer earlier. He called himself 'Buffalo Bill.'\"\033[0m\n"
                    "\033[92m\"Weird name,\"\033[0m Pauline says, making a face.\n"
                    "\033[36m\"I know, right? He seemed super creepy, but I know you've been looking for a new holster\n"
                    "for your axe. He might have something that will work.\"\033[0m\n"
                    "\033[92m\"Thanks! I might check him out.\"\033[0m\n"
                    "\033[36m\"Well, I should be going. Have a good day!\"\033[0m\n"
                    "\033[92m\"You too! Say hi to Nan for me.\"\033[0m\n"
                    "\033[36m\"Will do!\"\033[0m\n\n"
                    // long delay //
                    "Breaking into a light jog, you venture back to the crossroads and take the last path. You're eager to \n"
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you're running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan's, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi' by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you're here now; let's eat the lunch you bro—\"\033[0m\n"
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
                    "Nan and eat some lunch; all that hiking and chatting built up an appetite, and now you're running a little bit late.\n"
                    "Unbeknownst to you, Bill had been following you the whole time.\n\n"
                    "Reaching Nan's, you knock on the door. Nan opens the door and greets you with a warm hug.\n"
                    "\033[95m\"It's so good to see you, but what kept you?\"\033[0m\n"
                    "\033[92m\"I went for a little bit of a hike and ran into a creepy leather dealer and also Pauline. She says 'Hi' by the way.\"\033[0m\n"
                    "\033[95m\"What a busy morning! Well, you're here now; let's eat the lunch you bro—\"\033[0m\n"
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

            std::string lungeAtBill {"You lunge at Bill, grasping for the rope, but he's too quick for you. He dodges your attack, managing to slip the rope\n"
                    "around your neck in the process. \033[31m\"Your skin will make some fine, fine leather,\"\033[0m Bill sneers as he strangles you, your vision going splotchy.\n"
                    "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill's skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We'd be goners for sure.\"\033[0m\n"
                    "\033[92m\"Me, too,\"\033[0m Pauline agrees. \033[92m\"We should call the police.\"\033[0m\n"
                    // long delay //
                    };
            
            std::string checkOnNan {"You drop to the floor next to Nan, attempting to revive her so you both can escape. Bill comes up behind you and slips the rope\n"
                    "around your neck. \"Your skin will make some fine, fine leather,\" Bill sneers as he strangles you, your vision going splotchy.\n"
                   "\033[92m\"I finished up a little early and decided to join you for lunch,\"\033[0m Pauline cheerily calls out through the open door, \033[92m\"I brought my axe with me, too, in case"
                    "Nan needs any fresh firewood.\"\033[0m She gasps at the scene inside as she steps through the doorway. Without any time to spare, she grasps her axe and brings it down\n"
                    "hard onto Bill's skull, killing him instantly.\n\n"
                    "No longer deprived of air, you collapse to the floor, catching your breath. Nan regains consciousness and looks up at Pauline.\033[95m\"Thank goodness you came. We'd be goners for sure.\"\033[0m\n"
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
                    "\033[34m\"I'm Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you've met 'Buffalo Bill.' We've been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you'll be free to go.\"\033[0m\n\n"
                    "The three women look back and forth at each other, then at Langley. \"Can we eat our lunch?\" they all say in unison.\n"
                    };

            std::string dontCallPolice {"You shake your head, \033[36m\"We can't call the police. They'd never believe us!\"\033[0m\n"
                    "\033[34m\"Hands up; no one move!\"\033[0m A voice from the doorway calls into the house.\n"
                    "Several FBI agents and cops enter the house, guns drawn. A man who clearly is the head of the operation steps forward.\n"
                    "\033[34m\"I'm Detective Langley,\"\033[0m the agent who spoke before says. \033[34m\"I see you've met 'Buffalo Bill.' We've been tailing him across state lines for\n"
                    "months and were minutes behind him when he entered this house. On behalf of the Bureau, thank you. You potentially saved countless future\n"
                    "victims of his. This is a clear-cut case of self-defense; you may lower your hands.\"\033[0m\n\n"
                    "Langley reaches for his radio. \033[34m\"Dispatch, this is Langley. Suspect neutralized and scene secure. Notify the coroner—we need to transport\n"
                    "the body.\"\033[0m He turns back to the women, \033[34m\"We need to take your statements and remove the  body, then you'll be free to go.\"\033[0m\n\n"
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

    */

    return 0;
}
