#include <iostream>
#include <ctime>

int main() {
    //variable declaration
    char
    gameAgreement,
    encounterPrefixAgreement,
    retryOption;

    int
    randomEncounter,
    gameDice,
    encounterPrefix;

    //greeting
    std::cout << "Hello there!" << '\n';
    std::cout << '\n' << "Do you want to play my game? (y/n)" << '\n';
    std::cin >> gameAgreement;

    //yes-option
    if(gameAgreement == 'Y' || gameAgreement == 'y'){
        do{
            
        std::cout << '\n' << "Let's begin!" << '\n';
        system("PAUSE");

        //random encounters
        srand(time(0));
        randomEncounter = (rand() % 4) + 1;

        //switch encounters
        switch(randomEncounter){
            case 1:
                std::cout << '\n' <<  "You have encountered a bandit!" << '\n';
                encounterPrefix = 1;
                break;
            case 2:
                std::cout << '\n' <<  "You have encountered a chest!" << '\n';
                encounterPrefix = 2;
                break;
            case 3:
                std::cout << '\n' <<  "You have encountered a village!" << '\n';
                encounterPrefix = 3;
                break;
            case 4:
                std::cout << '\n' <<  "You have encountered a random wanderer!" << '\n';
                encounterPrefix = 4;
                break;
        }

        system("PAUSE");

        //dice
        gameDice = (rand() % 6) + 1;

        //encounter solver
        switch(encounterPrefix){
            case 1:
                std::cout << '\n' <<  "Do you wish to attack him? (y/n)" << '\n';
                std::cin >> encounterPrefixAgreement;

                    //if statement case1
                    if(encounterPrefixAgreement == 'y' || encounterPrefixAgreement == 'Y'){
                        std::cout << '\n' << "You need to roll a dice..." << '\n';
                        std::cout << '\n' << "You need to roll over 3..." << '\n';
                        system("PAUSE");


                            //dice-if

                            if(gameDice > 3){
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "Congrats! You defeated the bandit..." << '\n';
                            }
                            else{
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "You were defeated by the bandit..." << '\n';

                            }
                            system("PAUSE");


                    }
                    else if(encounterPrefixAgreement == 'n' || encounterPrefixAgreement == 'N'){
                        std::cout << '\n' << "You are stabbed to death by the bandit..." << '\n';
                        system("PAUSE");
                    }
                    else{
                        std::cout << '\n' << "Choose a valid choice!" << '\n';
                        system("PAUSE");
                    }
                break;
            case 2:
                std::cout << '\n' <<  "Do you wish to open it? (y/n)" << '\n';
                std::cin >> encounterPrefixAgreement;

                    //if statement case2

                    if(encounterPrefixAgreement == 'y' || encounterPrefixAgreement == 'Y'){
                        std::cout << '\n' << "You need to roll a dice..." << '\n';
                        std::cout << '\n' << "You need to roll over 3..." << '\n';
                        system("PAUSE");


                            //dice-if

                            if(gameDice > 3){
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "Congrats! You got a legendary sword..." << '\n';
                            }
                            else{
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "The chest was empty..." << '\n';
                            }
                    }
                    else if(encounterPrefixAgreement == 'n' || encounterPrefixAgreement == 'N'){
                        std::cout << '\n' << "You walk away..." << '\n';
                        system("PAUSE");
                    }
                    else{
                        std::cout << '\n' << "Choose a valid choice!" << '\n';
                        system("PAUSE");
                    }
                break;
            case 3:
                std::cout << '\n' <<  "Do you wish to enter it? (y/n)" << '\n';
                std::cin >> encounterPrefixAgreement;

                    //if statement case3

                    if(encounterPrefixAgreement == 'y' || encounterPrefixAgreement == 'Y'){
                        std::cout << '\n' << "You need to roll a dice..." << '\n';
                        std::cout << '\n' << "You need to roll over 3..." << '\n';
                        system("PAUSE");


                            //dice-if

                            if(gameDice > 3){
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "Congrats! You got greeted by the villagers..." << '\n';
                            }
                            else{
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "The village turned out to be a huge bandit camp..." << '\n';
                            }
                    }
                    else if(encounterPrefixAgreement == 'n' || encounterPrefixAgreement == 'N'){
                        std::cout << '\n' << "You walk away..." << '\n';
                        system("PAUSE");
                    }
                    else{
                        std::cout << '\n' << "Choose a valid choice!" << '\n';
                        system("PAUSE");
                    }
                break;
            case 4:
                std::cout << '\n' <<  "Do you wish to greet him? (y/n)" << '\n';
                std::cin >> encounterPrefixAgreement;

                    //if statement case4

                    if(encounterPrefixAgreement == 'y' || encounterPrefixAgreement == 'Y'){
                        std::cout << '\n' << "You need to roll a dice..." << '\n';
                        std::cout << '\n' << "You need to roll over 3..." << '\n';
                        system("PAUSE");


                            //dice-if

                            if(gameDice > 3){
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "Congrats! You talked with the wanderer and he turned out to be peacefull..." << '\n';
                            }
                            else{
                                std::cout << '\n' << "You rolled a: " << gameDice << '\n';
                                std::cout << '\n' << "The wanderer turned out to be a bandit..." << '\n';
                            }
                    }
                    else if(encounterPrefixAgreement == 'n' || encounterPrefixAgreement == 'N'){
                        std::cout << '\n' << "You are stabbed to death by the wanderer..." << '\n';
                        system("PAUSE");
                    }
                    else{
                        std::cout << '\n' << "Choose a valid choice!" << '\n';
                        system("PAUSE");
                    }
                break;
        }

        system("PAUSE");

        std::cout << '\n' << "Do you wish to replay the game? (y/n)" << '\n';
        std::cin >> retryOption;

        if(retryOption == 'n' || retryOption == 'N'){
            std::cout << '\n' << "Well then goodbye!" << '\n';
            system("PAUSE");
        }

        
        }while(retryOption == 'y' || retryOption == 'Y');


    }

    //no-option
    else if(gameAgreement == 'n' || gameAgreement == 'N'){
        std::cout << '\n' << "Well then see you later!" << '\n';
        system("PAUSE");
    }
    
    //other-option
    else{
        std::cout << '\n' << "Type only 'y' or 'n' " << '\n';
        system("PAUSE");
    }

    return 0;
}