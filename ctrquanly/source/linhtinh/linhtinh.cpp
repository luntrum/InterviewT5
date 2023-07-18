#include<iostream>
#include<vector>
using namespace std;


typedef struct 
    {
        int tableNumber;
        bool tableStatus;
    }numberofTables;
int main(){


    int NUMBEROFTABLE=5;
    vector<numberofTables> numberofTable;
    for (int i = 0; i < NUMBEROFTABLE; i++)
    {
        numberofTables x;
        x.tableNumber=i;
        x.tableStatus=true;
        numberofTable.push_back(x);
    }
    return 0;
}





        
            do
            {
                
                cout<<"lua chon thao tac"<<endl;
                cout<<"1. Them mon"<<endl;
                cout<<"2. Sua mon"<<endl;
                cout<<"3. Xoa mon"<<endl;
                cout<<"4. Danh sach mon da dat"<<endl;
                cout<<"5. Thanh toan"<<endl;
                cout<<"0. quay lai"<<endl;
                ENTER_INFORM("vui long nhap thao tac: ",inputContact,inputContact<0&&inputContact>5,"vui long chon cac so tu 0 den 5");
                
                switch ((tableContact)inputContact)
                {
                case ADD_ORDER:

                    cout<<"menu cua quan la "<<endl;
                    for (auto item:menuofStore)
                    {
                       item.showInfo();
                    }
                    
                    ENTER_INFORM("vui long nhap ID mon ban muon chon: ",id,id<100,"nhap id lon hon 100");
                    for(auto item:menuofStore)
                    {
                        if (item.getID()==id)
                        {
                            
                            nameofOder=item.getFoodName();
                            price=item.getFoodPrice();   
                            food ordered(id,nameofOder,price)  ;                    
                            tableData[NUMBEROFTABLE].addOdered(ordered);  
                            //tableData[NUMBEROFTABLE].setTableStatus(tableOn); 
                            break;
                        }
                    }
                    break;
                
                default:
                    break;
                }
                
            } while (inputContact!=0);
            

            //tableData[NUMBEROFTABLE].contactWithTable();
       
        
        
        
        
        