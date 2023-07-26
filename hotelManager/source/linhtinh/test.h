#define KEY_FUNC_INPUT(func_name,condition,...)                             \
void func_name(int *key){                                                   \
    do                                                                      \
    {                                                                       \
        __VAR_ARGS__                                                        \
        ENTER_NUMBER("nhap lua chon ",key,condition,"vui long nhap lai")    \
    } while (condition);                                                    \
}

#define ENTER_NUMBER(introduction,var,condition,reminder)  \
    do                                          \
    {                                           \
        cout<<introduction<<endl;               \
        while(!(cin>>var)){                     \
            cin.clear();                        \
            cout<<reminder<<endl;               \
            cin.ignore(200,'\n') ;              \
        }                                       \
    } while (condition);

#define VALUE(content)\
cout<<content<<endl;

KEY_FUNC_INPUT(fix,key!=0&&key!=1&&key!=2,
                    VALUE("1. sua ten")
                    VALUE("2. sua sđt")
                    VALUE("0. quay lai"))
