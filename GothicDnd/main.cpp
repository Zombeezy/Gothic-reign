/* 
 * File:   main.cpp
 * Author: Branden Hitt
 * Created on April 10, 2015, 4:10 PM
 * Last Modified: April 18, 2015, 2:00 AM
 * 
 * 
 */

//System Libraries
#include <iostream>//I/O standard
#include <string>//for string usage
#include <cstdlib>//for rand
#include <ctime>//for rand i think
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
short d20Roll(short a);
void loot();
void buffs();
void regurgitate(short r);
void shop();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char ans;
    //Prompt the user for inputs
    
    //Output 
    do{
    cout<<"Type 1: D20 Roll"<<endl;
    cout<<"Type 2: Enemy Buff Randomizer"<<endl;
    cout<<"Type 3: Character Flaw"<<endl;
    cout<<"Type 4: Underworld Market"<<endl;
    cout<<"Type 5: Wooden Chest"<<endl;
    cout<<"Type 6: Stone Chest"<<endl;
    cout<<"Type 7: Metal Chest"<<endl;
    cout<<"Type 8: Ornate Chest"<<endl;
    cout<<"Type 9: Regurgitate"<<endl;
    cout<<"Type T: Necronomicon"<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
//****************************************************//
//                    d20 Roll                        //
//                                                    //
//****************************************************//
            case '1':{
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                short a, result;
                cout<<"Please add the modifier for the roll:"<<endl;
                cin>>a;
                result=d20Roll(a);
                cout<<"Roll total with modifier: "<<result<<endl;
                cout<<"***********************"<<endl;
                 cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Enemy Buffs                     //
//                                                    //
//****************************************************//
            case '2':{
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                short e=0;
                cout<<"How many enemies are there?"<<endl;
                cin>>e;
                for (e;e>0;e--){
                    buffs();
                }
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Character Flaws                 //
//                                                    //
//****************************************************//
            case '3':{
                char reflaw;
                char ready;
                short flawNum;
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                cout<<"Ready for your character flaw?"<<endl;
                cout<<"Type Y when ready:"<<endl;
                cin>>ready;
                do{
                cout<<"***********************"<<endl;     
                flawNum=rand()%25+1;
                if (flawNum==1){
                    cout<<"Giant feet: you have disadvantage when attempting to sneak"<<endl;
                }else if (flawNum==2){
                    cout<<"Vertigo: Scared of heights (-3 to initiation on high areas)"<<endl;
                }else if (flawNum==3){
                    cout<<"Indecisive: you have trouble making up your mind"<<endl;
                }else if (flawNum==4){
                    cout<<"Homesick: you always suggest the group go back"<<endl;
                }else if (flawNum==5){
                    cout<<"IBS: you have to announce to the group that you need to shit after every combat"<<endl;
                }else if (flawNum==6){
                    cout<<"Teacher's Pet: you feel the need to compliment the Dm occasionally."<<endl;
                    cout<<"I mean he did put a lot of work into this after all."<<endl;
                }else if (flawNum==7){
                    cout<<"Superstitious: you are terrified of black cats"<<endl;
                }else if (flawNum==8){
                    cout<<"Photophobia: scared of light"<<endl;
                }else if (flawNum==9){
                    cout<<"Illiterate: You can't read, not even your own dice rolls"<<endl;
                }else if (flawNum==10){
                    cout<<"Father Figure: you constantly try to make dad jokes"<<endl;
                }else if (flawNum==11){
                    cout<<"Philanthropist: when given the chance, you will give away your money graciously"<<endl;
                }else if (flawNum==12){
                    cout<<"Antsy: you hate when your group stalls or takes time deciding things."<<endl;
                    cout<<"To calm yourself, you repeatedly sing a nursery rhyme of your choice."<<endl;
                }else if (flawNum==13){
                    cout<<"Determined: you are obsessed with completing your tasks, even to your own detriment."<<endl;
                }else if (flawNum==14){
                    cout<<"Secretive: you always want to hide things from others."<<endl;
                }else if (flawNum==15){
                    cout<<"Ginger fever: whenever Kenneth lands a hit, be sure to compliment him loudly."<<endl;
                }else if (flawNum==16){
                    cout<<"Compulsive honesty: You cannot lie"<<endl;
                }else if (flawNum==17){
                    cout<<"Cruel: Your actions are motivated by cruelty. You contain no mercy"<<endl;
                }else if (flawNum==18){
                    cout<<"Disfigurement: Dude your face.... and your body.... what the fuck happened..."<<endl;
                    cout<<"Change your name to Helga."<<endl;
                }else if (flawNum==19){
                    cout<<"Greedy: You don't share, ever."<<endl;
                }else if (flawNum==20){
                    cout<<"Hunted: You made an enemy in the past that now actively pursues you."<<endl;
                }else if (flawNum==21){
                    cout<<"Obese: You are really, really tubby. (-5 to speed)"<<endl;
                }else if (flawNum==22){
                    cout<<"Gambler: you can't resist a wager"<<endl;
                }else if (flawNum==23){
                    cout<<"Ozzy: terrified of flying monkeys & witches"<<endl;
                }else if (flawNum==24){
                    cout<<"Merciful: You never land a killing blow, and instead will only incapacitate your target"<<endl;
                }else if (flawNum==25){
                    cout<<"Orson Lannister: You are really, really dumb. You spend your free time "<<endl;
                    cout<<" crushing beetles. CUH CUH!"<<endl;
                }else{
                    cout<<"Something fucked up in your program dude"<<endl;
                }
                cout<<"***********************"<<endl;
                cout<<"Would you like to get another flaw? Type Y or N:"<<endl;
                cin>>reflaw;
                }while(reflaw=='y'||reflaw=='Y');
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Underworld Market               //
//                                                    //
//****************************************************//
            case '4':{
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                cout<<"Welcome to the Underworld Market"<<endl;
                cout<<"Have a look at our wares:"<<endl;
                cout<<endl;
                shop();
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Wooden Chest                    //
//                                                    //
//****************************************************//
            case '5':{//Wooden Chest
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cout<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Stone Chest                     //
//                                                    //
//****************************************************//
            case '6':{//Stone Chest
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Metal Chest                     //
//                                                    //
//****************************************************//
            case '7':{//Metal Chest
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Ornate Chest                    //
//                                                    //
//****************************************************//
            case '8':{//Ornate Chest
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Regurgitate                     //
//                                                    //
//****************************************************//
            case '9':{
                char regCho;
                short regurge;
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                cout<<"Would you like to cast this on yourself, an ally, or an enemy:"<<endl;
                cout<<"Type either (A,E,Y):"<<endl;
                cin>>regCho;
                cout<<"***********************"<<endl;
                if (regCho=='a'||regCho=='A'){
                    regurge=rand()%5+1;
                }else if (regCho=='e'||regCho=='E'){
                    regurge=rand()%10+1;
                }else if (regCho=='y'||regCho=='Y'){
                    regurge=rand()%15+1;
                }else{
                    cout<<"incorrect input"<<endl;
                }
                regurgitate(regurge);
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
//****************************************************//
//                    Necronomicon                    //
//                                                    //
//****************************************************//
            case 't':
            case 'T':{
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
               
                cout<<"***********************"<<endl;
                cout<<"***********************"<<endl;
                break;
            }
            default:{
                    cout<<"Invalid Menu Choice"<<endl;
            }
    };
    cout<<"Would you like to Return to the Menu? Type Y for yes or N for no:"<<endl;
    cin>>ans;
    }while((ans=='y'||ans=='Y'));
    
    
    
    
    
    
    
    
    
    return 0;
}
//****************************************************//
//                    d20 Roller                      //
//                                                    //
//****************************************************//
short d20Roll(short a){
    char advantage, disadvantage;
    cout<<"Is there an advantage for the roll?"<<endl;
    cout<<"Type Y for yes or N for no:"<<endl;
    cin>>advantage;
    cout<<"Is there any disadvantage for the roll?"<<endl;
    cout<<"Type Y for yes or N for no:"<<endl;
    cin>>disadvantage;
    if(advantage=='Y'||advantage=='y'){
        short result=0, firstRoll=0, secondRoll=0;
        firstRoll=rand()%20+1;
        cout<<"First roll: "<<firstRoll<<endl;
        secondRoll=rand()%20+1;
        cout<<"Second roll: "<<secondRoll<<endl;
        result=firstRoll;
        if(secondRoll>firstRoll){
            result=secondRoll;
        }
        result+=a;
        return result;
    }else if(disadvantage=='Y'||disadvantage=='y'){
        short result=0, firstRoll=0, secondRoll=0;
        firstRoll=rand()%20+1;
        cout<<"First roll: "<<firstRoll<<endl;
        secondRoll=rand()%20+1;
        cout<<"Second roll: "<<secondRoll<<endl;
        result=firstRoll;
        if(secondRoll<firstRoll){
            result=secondRoll;
        }
        result+=a;
        return result;
    }else{
        short result=0;
        result=rand()%20+1;
        cout<<"Initial roll: "<<result<<endl;
        result+=a;
        return result;
    }
    
}
//****************************************************//
//                    Loot List                       //
//                                                    //
//****************************************************//
void loot(){
    short lootRoll=rand()%100+1;
    if(lootRoll==1){
        cout<<"You find nothing in the chest but your crushed hopes"<<endl;
    }
    if(lootRoll>1&&lootRoll<=60){
        int reRoll=rand()%30+1;
        cout<<"Common Item: ";
        if(reRoll==1){
            cout<<"5 copper pieces"<<endl;
        }else if(reRoll==2){
            cout<<"10 copper pieces"<<endl;
        }else if(reRoll==3){
            cout<<"15 copper pieces"<<endl;
        }else if(reRoll==4){
            cout<<"25 copper pieces"<<endl;
        }else if(reRoll==5){
            cout<<"50 copper pieces"<<endl;
        }else if(reRoll==6){
            cout<<"1 silver piece"<<endl;
        }else if(reRoll==7){
            cout<<"5 silver pieces"<<endl;
        }else if(reRoll==8){
            cout<<"10 silver pieces"<<endl;
        }else if(reRoll==9){
            cout<<"15 silver pieces"<<endl;
        }else if(reRoll==10){
            cout<<"20 silver pieces"<<endl;
        }else if(reRoll==11){
            cout<<"25 silver pieces"<<endl;
        }else if(reRoll==12){
            cout<<"30 silver pieces"<<endl;
        }else if(reRoll==13){
            cout<<"35 silver pieces"<<endl;
        }else if(reRoll==14){
            cout<<"40 silver pieces"<<endl;
        }else if(reRoll==15){
            cout<<"50 silver pieces"<<endl;
        }else if(reRoll==16){
            cout<<"One weak health potion (regen 2 health)"<<endl;
        }else if(reRoll==17){
            cout<<"Two weak health potions (regen 2 health each)"<<endl;
        }else if(reRoll==18){
            cout<<"Three weak health potions (regen 2 health each)"<<endl;
        }else if(reRoll==19){
            cout<<"Solid Black Cowl (aesthetic item)"<<endl;
        }else if(reRoll==20){
            cout<<"5 torches"<<endl;
        }else if(reRoll==21){
            cout<<"Rusty Old Shovel (can be used to dig loose dirt)"<<endl;
        }else if(reRoll==22){
            cout<<"A Monk's Robe (disguise) "<<endl;
        }else if(reRoll==23){
            cout<<"A Monk's Robe (disguise)"<<endl;
        }else if(reRoll==24){
            cout<<"6 feet of chain link"<<endl;
        }else if(reRoll==25){
            cout<<"8 feet of rope"<<endl;
        }else if(reRoll==26){
            cout<<"Box of Cheez-Its"<<endl;
        }else if(reRoll==27){
            cout<<"Stylish Monocle (aesthetic item)"<<endl;
        }else if(reRoll==28){
            cout<<"Goblet of Blood (1 time use for vampires: regen 5 health)"<<endl;
        }else if(reRoll==29){
            cout<<"Hangman's Noose"<<endl;
        }else if(reRoll==30){
            cout<<"Potato Sack"<<endl;
        }else{
            cout<<"Your code fucked up (common loot roll)"<<endl;
        }
    }
    if(lootRoll>60&&lootRoll<=94){
        int reRoll=rand()%15+1;
        cout<<"Uncommon Item: ";
        if(reRoll==1){
            cout<<"1 Gold piece"<<endl;
        }else if(reRoll==2){
            cout<<"5 Gold pieces"<<endl;
        }else if(reRoll==3){
            cout<<"25 Gold pieces"<<endl;
        }else if(reRoll==4){
            cout<<"Skeleton Key"<<endl;
        }else if(reRoll==5){
            cout<<"Loaded Dice: One time free Re-Roll d20"<<endl;
        }else if(reRoll==6){
            cout<<"Loaded Dice: One time free Re-Roll d20"<<endl;
        }else if(reRoll==7){
            cout<<"Feast of Meat and Flesh"<<endl;
        }else if(reRoll==8){
            cout<<"Friendly Wisp"<<endl;
        }else if(reRoll==9){
            cout<<"Castle Guard's Disguise"<<endl;
        }else if(reRoll==10){
            cout<<"Town Guard's Disguise"<<endl;
        }else if(reRoll==11){
            cout<<"Cardinal's Disguise"<<endl;
        }else if(reRoll==12){
            cout<<"Villager's Disguise"<<endl;
        }else if(reRoll==13){
            cout<<"A poison bead and goblet"<<endl;
        }else if(reRoll==14){
            cout<<"Igor's Bell"<<endl;
        }else if(reRoll==15){
            cout<<"Poe's Pet Raven"<<endl;
        }else if(reRoll==16){
            cout<<"Black Bead: Creates a portal to the Underworld Market (one time use)"<<endl;
        }else{
            cout<<"Your code is fucked (uncommon loot roll)"<<endl;
        }
    }
    if(lootRoll>94&&lootRoll<=99){
         int reRoll=rand()%6+1;
        cout<<"Epic Item: ";
        if(reRoll==1){
            cout<<"100 Gold"<<endl;
        }else if(reRoll==2){
            cout<<"Heart of Lazarus: One time resurrection from death "<<endl;
        }else if(reRoll==3){
            cout<<"Death's Approach: You always have max initiative in combat."<<endl;
        }else if(reRoll==4){
            cout<<"Death's Scythe: +3 to hit"<<endl;
            cout<<"         melee: 6d6+6"<<endl;
        }else if(reRoll==5){
            cout<<"Dracula's Gift"<<endl;
        }else if(reRoll==6){
            cout<<"Black Mirror: (Reusable Item)"<<endl;
            cout<<"Opens a portal to the Underworld Market"<<endl;
        }else{
            cout<<"Your code is fucked (epic loot roll)"<<endl;
        }
    }
    if(lootRoll==100){
        cout<<"Legendary Item: The Necronomicon"<<endl;
    }
    
}
//****************************************************//
//                    Enemy Buffs                     //
//                                                    //
//****************************************************//
void buffs(){
    short b=0;
    b=rand()%14+1;
    if (b<=7){
        cout<<"Enemy buff: No buff"<<endl;
    }else if (b==8){
        cout<<"Enemy buff: Aim for the head. (Extra half damage added to zombie hits)"<<endl;
    }else if (b==9){
        cout<<"Enemy buff: Silver Weapons. (Extra half damage added to werewolves hits)"<<endl;
    }else if (b==10){
        cout<<"Enemy buff: Garlic Necklace. (Vampires have disadvantage against this enemy)"<<endl;
    }else if (b==11){
        cout<<"Enemy buff: Fire Weapons (This enemy has advantage to attacks on mummies)"<<endl;
    }else if (b==12){
        cout<<"Enemy buff: Rubber Clothes (This enemy takes no shock/electrical damage)"<<endl;
    }else if (b==13){
        cout<<"Enemy buff: Bounty (This enemy will only attack a Psychopath if one is present)"<<endl;
    }else if (b==14){
        cout<<"Enemy buff: Holy Water (Apparitions do half damage to this enemy)"<<endl;
    }else{
        cout<<"Enemy buff: No buff"<<endl;
    }
}
//****************************************************//
//                    Regurgitate                     //
//                                                    //
//****************************************************//
void regurgitate(short r){
    short num=r;
    if(num==1){
        cout<<"Red goo. Target gains 2 temporary health"<<endl;
    }else if(num==2){
        cout<<"Chewed up toilet seat. Target has now contracted syphilis"<<endl;
    }else if(num==3){
        cout<<"Rusty knife. Target loses 2 health"<<endl;
    }else if(num==4){
        cout<<"Crow bar. Target gains advantage on next dice roll"<<endl;
    }else if(num==5){
        cout<<"Jogging shoes. Target gains 15 speed for 8 hours"<<endl;
    }else if(num==6){
        cout<<"Fancy hat. Target gains 4 temporary health"<<endl;
    }else if(num==7){
        cout<<"Spiked club. Target loses 6 health."<<endl;
    }else if(num==8){
        cout<<"Old tire. Target falls to the ground and gets disadvantage on rolls."<<endl;
    }else if(num==9){
        cout<<"Puff of black smoke. Anyone within 15 feet radius is hidden."<<endl;
    }else if(num==10){
        cout<<"An old dog bone. Nothing happens."<<endl;
    }else if(num==11){
        cout<<"A baby bird. 'Squak squak squak!' "<<endl;
    }else if(num==12){
        cout<<"Black ink purges out and covers your eyes. Your next ability will miss."<<endl;
    }else if(num==13){
        cout<<"A black cat. It scampers away."<<endl;
    }else if(num==14){
        cout<<"You cough up a goblet with a bead of poison. Keep them in your inventory."<<endl;
    }else if(num==15){
        cout<<"Your own stomach. You lose 15 health."<<endl;
    }else {
        cout<<"Your code fucked up (Regurgitate function)"<<endl;
    }
}
//****************************************************//
//                    Shop Function                   //
//                                                    //
//****************************************************//
void shop(){
    for(int i=0;i<3;i++){
    short commonItem=rand()%10+1;
    short stock=rand()%5+1;
    if(commonItem==1){
        cout<<"-Weak health potion (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 1 silver piece"<<endl;
    }else if (commonItem==2){
        cout<<"-Small Dagger (stock: "<<stock<<" in store)"<<endl;
        cout<<"    :1d4"<<endl;
        cout<<" Price: 50 copper pieces"<<endl;
    }else if (commonItem==3){
        cout<<"-Overcoat (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 50 copper pieces"<<endl;
    }else if (commonItem==4){
        cout<<"-Rusty old Shovel (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 50 silver pieces"<<endl;
    }else if (commonItem==5){
        cout<<"-8 feet of robe (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 25 silver pieces"<<endl;
    }else if (commonItem==6){
        cout<<"-Solid Black Cowl-aesthetic item (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 15 silver pieces"<<endl;
    }else if (commonItem==7){
        cout<<"-Torch (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 5 copper pieces"<<endl;
    }else if (commonItem==8){
        cout<<"-Monk's Robe (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: 15 silver pieces "<<endl;
    }else if (commonItem==9){
        cout<<"-Common Item (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: "<<endl;
    }else if (commonItem==10){
        cout<<"-Common Item (stock: "<<stock<<" in store)"<<endl;
        cout<<" Price: "<<endl;
    }else{
        cout<<"Your code fucked up (common item in store roll)"<<endl;
    }
    cout<<endl;
    }
    short specialItem=rand()%10+1;
    if(specialItem<=8){
        short uncommonItem=rand()%5+1;
        if(uncommonItem==1){
        cout<<"-Igor's Bell"<<endl;
        cout<<" Price: "<<endl;
        }else if(uncommonItem==2){
        cout<<"-Loaded Dice (one time free reroll d20)"<<endl;
        cout<<" Price: "<<endl;
        }else if(uncommonItem==3){
        cout<<"-Strong Health Potion"<<endl;
        cout<<" Price: "<<endl;
        }else if(uncommonItem==4){
        cout<<"-Uncommon Item"<<endl;
        cout<<" Price: "<<endl;
        }else if(uncommonItem==5){
        cout<<"-Town Guard's Disguise"<<endl;
        cout<<" Price: "<<endl;
        }else{
            cout<<"Your code fucked up (uncommon item in store roll)"<<endl;
        }
    }else if(specialItem>9){
        short rareItem=rand()%5+1;
        if(rareItem==1){
        cout<<"-Dark Mantle (+2 Toughness)"<<endl;
        cout<<" Price: "<<endl;
        }else if(rareItem==2){
        cout<<"-A Mysterious Portrait"<<endl;
        cout<<" Price: "<<endl;
        }else if(rareItem==3){
        cout<<"-Castle Guard's Disguise"<<endl;
        cout<<" Price: "<<endl;
        }else if(rareItem==4){
        cout<<"-Goblet and a bead of poison"<<endl;
        cout<<" Price: "<<endl;
        }else if(rareItem==5){
        cout<<"-Heart of Lazarus: One time resurrection from death"<<endl;
        cout<<" Price: 100 gold (one in stock)"<<endl;
        }
    }else{
        cout<<"Your code fucked up(special item roll in shop)"<<endl;
    }
}