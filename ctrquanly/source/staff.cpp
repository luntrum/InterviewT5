#include"../header/staff.hpp"
#include"../header/manageStore.hpp"


void staff::updateStaff(manager ql){
    menuofStore=ql.getMenu();
    for (int i = 0; i < (int)ql.getNumberTable(); i++)
    {        
        tableInform data;
        tableData.push_back(data);
        tableData[i].resetTableInform(i);
    }
}
void staff::showAllTableStatus(){
    for (int i = 0; i < (int)tableData.size(); i++)
    {

        cout<<"trang thai cua ban thu "<<i<<" la: "<<endl;
        tableData[i].getTableStatus();
    }
    
}

void staff::openmenu(){
    for (auto item:menuofStore)
    {
        item.showInfo();
    }
    
}
list<food> staff::getMenu(){
    return this->menuofStore;
}
void staff::choseTable(){
    int NUMBEROFTABLE,selecContact,selecTable,id=100,numofOrder,choice;
    double price=1000;
   // int tableOn=1,tableOff=0;
    string nameofOder="k";
    orderedFood ordered(id,nameofOder,price);
    do
    { 
        cout<<"chon thao tac: "<<endl;
        cout<<"1. nhap so ban. "<<endl;
        cout<<"0. quay lai."<<endl;
        ENTER_INFORM("nhap lua chon hanh dong cua ban: ",selecTable,selecTable<0&&selecTable>1,"chon 1 hoac 0");
        switch (selecTable)
        {
        case 1:
            showAllTableStatus();
            ENTER_INFORM("nhap so ban: ",NUMBEROFTABLE,NUMBEROFTABLE<0,"nhap lai so ban");
            do
            {
                cout<<"lua chon thao tac"<<endl;
                cout<<"1. Them mon"<<endl;
                cout<<"2. Sua mon"<<endl;
                cout<<"3. Xoa mon"<<endl;
                cout<<"4. Danh sach mon da dat"<<endl;
                cout<<"5. Thanh toan"<<endl;
                cout<<"0. quay lai"<<endl;
                ENTER_INFORM("vui long nhap thao tac: ",selecContact,selecContact<0&&selecContact>5,"vui long chon cac so tu 0 den 5");
                switch ((tableContact)selecContact)
                {
                case ADD_ORDER:
                    cout<<"------MENU------"<<endl;
                    openmenu();
                    cout<<"--------------------"<<endl;
                    do
                    {
                        tableData[NUMBEROFTABLE].changeTableStatus();
                        ENTER_INFORM("nhap id mon an ban muon: ",id,id<100&&id>125,"vui long chon id co trong menu");
                        ENTER_INFORM("nhap so luong mon an: ",numofOrder,numofOrder<=0,"nhap so luong lon hon 0");
                        for(auto item:menuofStore){
                        if (item.getID()==id){
                            price=item.getFoodPrice();
                            nameofOder=item.getFoodName();
                        }
                        }
                        ordered.setFoodInform(id,nameofOder,price,numofOrder);
                        tableData[NUMBEROFTABLE].addOdered(ordered);
                        cout<<"1. tiep tuc them mon."<<endl;
                        cout<<"0. quay lai."<<endl;
                        ENTER_INFORM("lua chon cua ban: ",choice,choice<0&&choice>1,"vui long chon 1 hoac 0 ");

                    } while (choice!=0);
                    tableData[NUMBEROFTABLE].listOfOdered();
                   
                    break;
                case UPDATE_ORDER:
                    do
                    {
                        cout<<"danh sach mon da dat la: "<<endl;
                        tableData[NUMBEROFTABLE].listOfOdered();
                        ENTER_INFORM("nhap id mon ban can sua: ",id,id<100&&id>125,"vui long chon id lon hon 100 va co trong danh sach");
                        ENTER_INFORM("nhap so luong can thay doi: ",numofOrder,numofOrder<=0,"vui long nhap so luong lon hon 0");
                        tableData[NUMBEROFTABLE].updateOdered(id,numofOrder);

                        cout<<"1. tiep tuc sua mon."<<endl;
                        cout<<"0. quay lai."<<endl;
                        ENTER_INFORM("lua chon cua ban: ",choice,choice<0&&choice>1,"vui long chon 1 hoac 0 ");
                    } while (choice!=0);
                    
                    break;
                case DELETE_ORDER:
                    do
                    {
                        cout<<"danh sach mon da dat la: "<<endl;
                        tableData[NUMBEROFTABLE].listOfOdered();
                        ENTER_INFORM("nhap id mon ban can xoa: ",id,id<100&&id>125,"vui long chon id lon hon 100 va co trong danh sach");
                        tableData[NUMBEROFTABLE].deleteOdered(id);
                        cout<<"1. tiep tuc xoa mon."<<endl;
                        cout<<"0. quay lai."<<endl;
                        ENTER_INFORM("lua chon cua ban: ",choice,choice<0&&choice>1,"vui long chon 1 hoac 0 ");
                    } while (choice!=0);
                    

                    break;
                case LIST_OF_OREDER:
                    tableData[NUMBEROFTABLE].listOfOdered();
                    break;
                case BILL:
                    tableData[NUMBEROFTABLE].bill();
                    tableData[NUMBEROFTABLE].resetTableInform(NUMBEROFTABLE);
                    selecContact=0;
                    break;
                case QUIT_ORDER:
                    break;
                
                default:
                    break;
                }
            } while (selecContact!=0);
            
            break;
        case 0:
            break;
        default:
            break;
        }
        
    } while (selecTable!=0);
    
    
   // cout<<"trang thai cua ban"<<NUMBEROFTABLE<<"la: "<<tableData[NUMBEROFTABLE].getTableStatus();
}
//void staff::contactWithStaff(){

//}
