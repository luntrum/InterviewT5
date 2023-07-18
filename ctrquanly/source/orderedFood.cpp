#include"../header/orderedFood.hpp"


orderedFood::orderedFood(int ID,string nameofFood, double cost){
    orderedFood::id=ID;
    orderedFood::foodName=nameofFood;
    orderedFood::price=cost;
}

void orderedFood::setFoodInform(int ID,string nameofFood,double cost,int numofOrder){
    orderedFood::id=ID;
    orderedFood::numofOrdered=numofOrder;
    orderedFood::price=cost;
    orderedFood::foodName=nameofFood;
}
void orderedFood::increaseNumofOrdered(int increase){
    numofOrdered=increase;
}

void orderedFood::showInfo(){
    cout<<"id mon an la: "<<id<<endl;
    cout<<"ten mon an la: "<<foodName<<endl;
    cout<<"gia cua mon an la: "<<price<<endl;
    cout<<"so luong mon da dat: "<<numofOrdered<<endl;
}
int orderedFood::getNumofOrdered(){
    return numofOrdered;
}
int orderedFood::getOrderedID(){
    return id;
}
string orderedFood::getFoodName(){
    return foodName;
}
double orderedFood::getFoodPrice(){
    return price;
}