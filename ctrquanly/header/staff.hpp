#ifndef __STAFF__
#define __STAFF__

class staff
{
private:
    list<tableInform> tableData;
    list<food> foodData;
public:
    staff(list<monAn> database,int numberOfTable);
    void getInformOfTable();
};

#endif