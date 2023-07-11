#ifndef __FOOD_HPP__
#define __FOOD_HPP__
/*--------CREATE CLASS FOOD-------*/
class food
{
private:
    int id;
    string foodName;
    double price;
   // int totalNumber;
public:
    food(string nameofFood, double cost);
    food(int ID,string nameofFood, double cost);
    void showInfo();
    void setFoodInform(string nameofFood);
    void setFoodInform(double priceofFood);
    void setFoodInform(string nameofFood,double priceofFood);
    int getID();
    string getFoodName();
    double getFoodPrice();  
};
#endif