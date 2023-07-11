#ifndef __MANAGER__
#define __MANAGER__

class manager
{
private:
    list<food> database;
    int numberTable;
    void importFood();
    void deleteFood();
    void updateFood();
public:
    manager(); 
    void showMenu();
    int getNumberTable();
    list<food> getMenu();
};

#endif
