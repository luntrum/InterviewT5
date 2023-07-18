#ifndef __STAFF__
#define __STAFF__
#include<vector>
#include"tableInform.hpp"
#include"food.hpp"
#include"manager.hpp"
/*--------CREATE CLASS STAFF-------*/
class staff
{
private:
    list<food> menuofStore;
    vector<tableInform> tableData;
public:
    
    void updateStaff(manager ql);

    void showAllTableStatus();
    void choseTable();
    void openmenu();
    list<food> getMenu();
};

#endif