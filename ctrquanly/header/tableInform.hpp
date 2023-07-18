#ifndef __TABLE_INFORM__
#define __TABLE_INFORM__

/*--------CREATE CLASS TABLEINFORM-------*/

class tableInform
{
private:
    int tableNumber;
    tableStatus status;
    
    list<orderedFood> orderedList;
    
public:
    void resetTableInform(int numberofTable);
    void getTableStatus();
    void addOdered(orderedFood ordered);
    void listOfOdered();
    void updateOdered(int ID,int num);
    void deleteOdered(int ID);  
    void bill();
    void changeTableStatus();
    
};

#endif