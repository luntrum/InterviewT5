#ifndef __MANAGER__
#define __MANAGER__

/*--------CREATE CLASS MANAGER-------*/

class manager
{
private:
    list<food> database;
    int numberTable=0;
    void importFood();
    void deleteFood();
    void updateFood();
public:
    //manager();
    void setNumberofTable();
    void contactStore(); 
    void showMenu();
    int getNumberTable();
    list<food> getMenu();
};

#endif
