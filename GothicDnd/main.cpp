/* 
 * File:   main.cpp
 * Author: Branden Hitt
 * Created on April 10, 2015, 4:10 PM
 * Last Modified: April 10, 2015, 4:10 PM
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
    cout<<"Type 2: "<<endl;
    cout<<"Type 3: "<<endl;
    cout<<"Type 4: "<<endl;
    cout<<"Type 5: Wooden Chest"<<endl;
    cout<<"Type 6: Stone Chest"<<endl;
    cout<<"Type 7: Metal Chest"<<endl;
    cout<<"Type 8: Ornate Chest"<<endl;
    cout<<"Type 9: "<<endl;
    cout<<"Type T: "<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                cout<<"***********************"<<endl;
                short a, result;
                cout<<"Please add the modifier for the roll:"<<endl;
                cin>>a;
                result=d20Roll(a);
                cout<<"Roll total with modifier: "<<result<<endl;
                cout<<"***********************"<<endl;
                break;
            }
            case '2':{
                cout<<"***********************"<<endl;
                
                break;
            }
            case '3':{
                cout<<"***********************"<<endl;
                
                break;
            }
            case '4':{
                cout<<"***********************"<<endl;
                
                break;
            }
            case '5':{//Wooden Chest
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
                break;
            }
            case '6':{//Stone Chest
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 1: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 2: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                break;
            }
            case '7':{//Metal Chest
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 1: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 2: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 3: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                break;
            }
            case '8':{//Ornate Chest
                cout<<"***********************"<<endl;
                short playerNum, pick;
                cout<<"Please first assign a number to each player."<<endl;
                cout<<"How many players are there: "<<endl;
                cin>>playerNum;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 1: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 2: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 3: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                pick=rand()%playerNum+1;
                cout<<"Loot winner 4: Player "<<pick<<endl;
                loot();
                cout<<endl;
                cout<<"***********************"<<endl;
                break;
            }
            case '9':{
                cout<<"***********************"<<endl;
               
                break;
            }
            case 't':
            case 'T':{
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
    short lootRoll=rand()%50+1;
    if(lootRoll==0){
        cout<<"You find nothing in the chest but your crushed hopes"<<endl;
    }
    if(lootRoll>=0&&lootRoll<=30){
        cout<<"Common Item: ";
        if(lootRoll==1){
            cout<<"5 copper pieces"<<endl;
        }else if(lootRoll==2){
            cout<<"10 copper pieces"<<endl;
        }else if(lootRoll==3){
            cout<<"15 copper pieces"<<endl;
        }else if(lootRoll==4){
            cout<<"25 copper pieces"<<endl;
        }else if(lootRoll==5){
            cout<<"50 copper pieces"<<endl;
        }else if(lootRoll==6){
            cout<<"1 silver piece"<<endl;
        }else if(lootRoll==7){
            cout<<"5 silver pieces"<<endl;
        }else if(lootRoll==8){
            cout<<"10 silver pieces"<<endl;
        }else if(lootRoll==9){
            cout<<"15 silver pieces"<<endl;
        }else if(lootRoll==10){
            cout<<"20 silver pieces"<<endl;
        }else if(lootRoll==11){
            cout<<"25 silver pieces"<<endl;
        }else if(lootRoll==12){
            cout<<"30 silver pieces"<<endl;
        }else if(lootRoll==13){
            cout<<"35 silver pieces"<<endl;
        }else if(lootRoll==14){
            cout<<"40 silver pieces"<<endl;
        }else if(lootRoll==15){
            cout<<"50 silver pieces"<<endl;
        }else if(lootRoll==16){
            cout<<"One weak health potion"<<endl;
        }else if(lootRoll==17){
            cout<<"Two weak health potions"<<endl;
        }else if(lootRoll==18){
            cout<<"Three weak health potions"<<endl;
        }else if(lootRoll==19){
            cout<<"Solid Black Cowl"<<endl;
        }else if(lootRoll==20){
            cout<<"5 torches"<<endl;
        }else if(lootRoll==21){
            cout<<"Rusty Old Shovel"<<endl;
        }else if(lootRoll==22){
            cout<<"A Monk's Robe"<<endl;
        }else if(lootRoll==23){
            cout<<"A Monk's Robe"<<endl;
        }else if(lootRoll==24){
            cout<<"6 feet of chain link"<<endl;
        }else if(lootRoll==25){
            cout<<"8 feet of rope"<<endl;
        }else if(lootRoll==26){
            cout<<"Box of Cheez-Its"<<endl;
        }else if(lootRoll==27){
            cout<<"Stylish Monocle"<<endl;
        }else if(lootRoll==28){
            cout<<"Goblet of Blood"<<endl;
        }else if(lootRoll==29){
            cout<<"Case of Incense"<<endl;
        }else if(lootRoll==30){
            cout<<"Potato Sack"<<endl;
        }else{
            //do nothing
        }
    }
    if(lootRoll>=31&&lootRoll<=45){
        cout<<"Rare Item: ";
        if(lootRoll==31){
            cout<<"1 Gold piece"<<endl;
        }else if(lootRoll==32){
            cout<<"5 Gold pieces"<<endl;
        }else if(lootRoll==33){
            cout<<"25 Gold pieces"<<endl;
        }else if(lootRoll==34){
            cout<<"34"<<endl;
        }else if(lootRoll==35){
            cout<<"35"<<endl;
        }else if(lootRoll==36){
            cout<<"36"<<endl;
        }else if(lootRoll==37){
            cout<<"37"<<endl;
        }else if(lootRoll==38){
            cout<<"38"<<endl;
        }else if(lootRoll==39){
            cout<<"39"<<endl;
        }else if(lootRoll==40){
            cout<<"40"<<endl;
        }else if(lootRoll==41){
            cout<<"41"<<endl;
        }else if(lootRoll==42){
            cout<<"42"<<endl;
        }else if(lootRoll==43){
            cout<<"43"<<endl;
        }else if(lootRoll==44){
            cout<<"44"<<endl;
        }else if(lootRoll==45){
            cout<<"Poe's Pet Raven"<<endl;
        }else{
            //do nothing
        }
    }
    if(lootRoll>=46&&lootRoll<=49){
        cout<<"Epic Item: ";
        if(lootRoll==46){
            cout<<"100 Gold"<<endl;
        }else if(lootRoll==47){
            cout<<"Heart of Lazarus: One time resurrection from death "<<endl;
        }else if(lootRoll==48){
            cout<<"Death's Approach: You always have max initiative in combat."<<endl;
        }else if(lootRoll==49){
            cout<<"The Night Mare"<<endl;
        }else{
            //do nothing
        }
    }
    if(lootRoll==50){
        cout<<"Legendary Item: The Necronomicon"<<endl;
    }
    
}