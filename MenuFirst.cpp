#include<iostream>
using namespace std;
class Menu{
    public:
    static void subMenu(){
        cout<<"======== Menu ========"<<endl;
        cout<<"1. Search For Phone"<<endl;
        cout<<"2. History"<<endl;
        cout<<"3. View All Phones"<<endl;
        cout<<"4. Exit"<<endl;
    }
    static void FirstMenu(){
        Menu::subMenu();
        cout<<"5. Login"<<endl;
        cout<<"6. Sign Up"<<endl;
        cout<<"======================"<<endl;
    }
    static void SecondMenu(const char *user_name){
        cout<<"**Hello "<<user_name<<"**"<<endl;
        Menu::subMenu();
        cout<<"View Your Profile!"<<endl;
    }
    static void TypeofPhoneMenu(){
        cout<<"==== Type of Phones ===="<<endl;
        cout<<"1. Apple"<<endl;
        cout<<"2. Samsung"<<endl;
        cout<<"3. Google Pixel"<<endl;
        cout<<"4. Vivo"<<endl;
        cout<<"5. Oppo"<<endl;
        cout<<"========================"<<endl;
    }
    static void HistoryMenu(){
        cout<<"===== History ====="<<endl;
        cout<<"1. See all history"<<endl;
        cout<<"2. One Week ago"<<endl;
        cout<<"3. One Day ago"<<endl;
        cout<<"4. One Month ago"<<endl;
        cout<<"==================="<<endl;
    }
    static void AddMoreMenu(){
        cout<<"===== Add More ====="<<endl;
        cout<<"1. Search For Phone"<<endl;
        cout<<"2. View All Phones" <<endl;
        cout<<"3. Check Your Cart" <<endl;
        cout<<"4. Exit"<<endl;
        cout<<"===================="<<endl;
    }
    static void PayMenu(){
        cout<<"==== Pay ===="<<endl;
        cout<<"1. ABA"<<endl;
        cout<<"2. ACILIDA"<<endl;
        cout<<"3. WING"<<endl;
        cout<<"4. BARKORNG"<<endl;
        cout<<"5. SATHABNA"<<endl;
        cout<<"============="<<endl;
    }
    static void TitleInvoice(const char *customer_name){
        cout<<"Congratulation!!"<<endl;
        cout<<"Your Buying Successed!!"<<endl;
        cout<<"#FIVE MEN PHONE SHOP "<<endl;
        cout<<"#Address: 12st, sangkat Teukthla, khan SenSok, Phnom Penh "<<endl;
        cout<<"#Phone Number : 012345678 / 0986654372"<<endl;
        cout<<"$CUSTOMER : "<<customer_name<<endl;
        cout<<"=== INVOICE DETAILS ==="<<endl;
        //Mettering //5//7//3//5 space
        // cout<<"----------------------------------------------"<<endl;
        for(int i = 0 ;i < 46 ; i++ ) cout<<'-';cout<<endl;
        cout<<"_No.     Phone Name       Qty   Price     More"<<endl;
        for(int i = 0 ;i < 46 ; i++ ) cout<<'-';cout<<endl;
        // cout<<"----------------------------------------------"<<endl;
    }
    Menu(){
        //Main right here
        // Menu::FirstMenu();
        // Menu::SecondMenu("Vathana");
        // Menu::TypeofPhoneMenu();
        // Menu::PayMenu();
        // Menu::HistoryMenu();
        // Menu::AddMoreMenu();
        // Menu::TitleInvoice("Vathana");
    }
};
int main(){
    Menu men;
    return 0;
}