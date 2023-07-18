/*----------------CLASS FOOD-----------------*/

#include"../header/food.hpp"


/*
* Class: food
* Function: food
* Description: This function use for create food
* Input:
*   ID - id of food  
*   nameofFood- the name of food 
*   cost - the price of food
* Output:
*   return: none
*/

food::food(int ID,string nameofFood, double cost){
    id=ID;
    foodName=nameofFood;
    price=cost;
}
/*
* Class: food
* Function: food
* Description: This function use for create food
* Input:
*   nameofFood- the name of food 
*   cost - the price of food
* Output:
*   return: none
*/
food::food(string nameofFood, double cost){
    static int ID=100;
    id=ID;
    ID++;
    foodName=nameofFood;
    price=cost;
}
/*
* Class: food
* Function: showInfo
* Description: This function use for print infomation of object create by class food
* Input:
*   don't have input parametter
* Output:
*   return: none
*/
void food::showInfo(){
    cout<<"ID mon an la: "<<id<<endl;
    cout<<"ten mon an la: "<<foodName<<endl;
    cout<<"gia mon la: "<<price<<endl;
    cout<<"------------------------------------"<<endl;
   // cout<<"so luong la: "<<totalNumber<<endl;
}
/*
* Class: food
* Function: setFoodInform
* Description: This function use for update element foodName of object
* Input:
*   nameofFood- the name you want to change
* Output:
*   return: none
*/
void food::setFoodInform(string nameofFood){
    foodName=nameofFood;
}
/*
* Class: food
* Function: setFoodInform
* Description: This function use for update element price of object
* Input:
*   priceofFood  - the price you want to change
* Output:
*   return: none
*/
void food::setFoodInform(double priceofFood){
    price=priceofFood;
}
/*
* Class: food
* Function: setFoodInform
* Description: This function use for update 2 element foodName and price  of object
* Input:
*   nameofFood - the name you want to change
*   priceofFood  - the price you want to change
* Output:
*   return: none
*/
void food::setFoodInform(string nameofFood,double priceofFood){
    foodName=nameofFood;
    price=priceofFood;
}
/*
* Class: food
* Function: getID
* Description: This function use for get element id of food
* Input:
*   don't have input parametter
* Output:
*   return elemet id of food
*/
int food::getID(){
    return id;
}
/*
* Class: food
* Function: getFoodName
* Description: This function use for get element foodName of food
* Input:
*   don't have input parametter
* Output:
*   return elemet foodName of food
*/
string food::getFoodName(){
    return foodName;
}
/*
* Class: food
* Function: getFoodPrice
* Description: This function use for get element price of food
* Input:
*   don't have input parametter
* Output:
*   return elemet price of food
*/
double food::getFoodPrice(){
    return price;
}
/*
*
*
*
*
*
*
*/



