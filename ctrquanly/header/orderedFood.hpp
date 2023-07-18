#ifndef __ORDEREDFOOD__
#define __ORDEREDFOOD__
/*--------CREATE CLASS ORDERED FOOD-------*/

class orderedFood
{
private:
    int id;
    string foodName;
    double price;
    int numofOrdered;
public:
    orderedFood(int ID,string nameofFood, double cost);
    void setFoodInform(int ID,string nameofFood,double cost,int numofOrder);
    void increaseNumofOrdered(int increase);
    void showInfo();
    string getFoodName();
    double getFoodPrice();
    int getNumofOrdered();
    int getOrderedID();
};


#endif