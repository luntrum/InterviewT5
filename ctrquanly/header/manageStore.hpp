#ifndef __MANAGE_STORE__
#define __MANAGE_STORE__

typedef enum{
    QUIT_CHOICE,
    IMPORT_FOOD,
    DELETE_FOOD,
    UPDATE_FOOD,
    SHOW_MENU,
}managerChoice;

typedef enum{
    QUIT,
    UPDATE_NAME,
    UPDATE_PRICE,
    UPDATE_ALL,
}updateChoice;

typedef enum{
    OUT,
    QUAN_LY=1,
    NHAN_VIEN,
}managerStore;

typedef enum{
    QUIT_ORDER,
    ADD_ORDER,
    UPDATE_ORDER,
    DELETE_ORDER,
    LIST_OF_OREDER,
    BILL,
}tableContact;

typedef enum{
    EMPTY,
    RUNNING,
}tableStatus;
#define ENTER_INFORM(choiceName,var,condition,errorHandle)  \
    do                                          \
    {                                           \
        cout<<choiceName;                       \
        while(!(cin>>var)){                     \
            cin.clear();                        \
            cout<<errorHandle<<endl;            \
            cin.ignore(200,'\n') ;              \
        }                                       \
    } while (condition);
    

#endif    