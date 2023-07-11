#ifndef __TABLE_INFORM__
#define __TABLE_INFORM__

class tableInform
{
private:
    int tableNumber;
    bool status;
    typedef struct 
    {
        food oderedFood;
        int quantity;
    }typeFood;
    list<typeFood> tableData;
    
public:
    thongTinBan(int numberofTable,bool tableStatus);
    bool getTableStatus();
    void addFood();
    void modifyFood();
    void deleteFood();
    void listOfFood();
    void bill()
};

#endif