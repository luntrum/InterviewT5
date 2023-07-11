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

#define ENTER_INFORM(choiceName,var,condition,errorHandle)  \
    do                                          \
    {                                           \
        cout<<choiceName;                       \
        while(!(cin>>var)){                     \
            cin.clear();                        \
            cout<<errorHandle<<endl;            \
            cin.ignore(200,'\n') ;                \
        }                                       \
    } while (condition);
    

#endif    