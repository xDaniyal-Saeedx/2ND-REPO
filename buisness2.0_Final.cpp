#include<iostream>
#include<windows.h>
#include<iomanip>
#include<conio.h>
using namespace std;


void result(float &itemPrice1,float &itemQuantity1,float &itemPrice2,float &itemQuantity2,float &itemPrice3,float&itemQuantity3,float &total,string &itemName1,string &itemName2,string &itemName3,float &TitemPrice1,float &TitemPrice2,float &TitemPrice3);
void calculate(float &itemprice1,float &itemquantity1,float &itemprice2,float &itemquantity2,float &itemprice3,float &itemquantity3,float &total,float &TitemPrice1,float &TitemPrice2,float &TitemPrice3);
void add_data(string& itemname,float& itemprice,float& itemquantity);
void admin(string username,string password);
void Header() {
    cout << " __________________________________ "<<endl;
    cout << "      SALES MANAGEMENT SYSTEM       "<<endl;
    cout << " __________________________________ "<<endl;
}


main()
{
    string itemName1,itemName2,itemName3, password, username, choice;
    float itemPrice1 = 0;
    float itemQuantity1 = 0;
    float itemPrice2 = 0;
    float itemQuantity2 = 0;
    float itemPrice3 = 0;
    float itemQuantity3 = 0;
    float total = 0;
     float TitemPrice1=0;
      float TitemPrice3=0;
       float TitemPrice2=0;
    
   admin(username,password);
    Header();

   while (true)
   {
   
  cout<<"1. enter data for item 1"<<endl;
  cout<<"2. enter data for item 2"<<endl;
  cout<<"3. enter data for item 3"<<endl;
  cout<<"4. calculate data"<<endl;
  cout<<"5. display result"<<endl;
  cout<<"6. EXIT"<<endl;
  cout <<"your choice:";
  cin >> choice;
  if(choice == "1")
  {
   add_data(itemName1,itemPrice1,itemQuantity1);
   }
   else if(choice == "2")
   {
    add_data(itemName2,itemPrice2,itemQuantity2);
   }
   else if(choice == "3")
   {
    add_data(itemName3,itemPrice3,itemQuantity3);
   }
   else if(choice == "4")
   {
    calculate(itemPrice1,itemQuantity1,itemPrice2,itemQuantity2,itemPrice3,itemQuantity3,total,TitemPrice1,TitemPrice2,TitemPrice3);
   }
   else if(choice == "5")
   {
   result(itemPrice1,itemQuantity1,itemPrice2,itemQuantity2,itemPrice3,itemQuantity3,total,itemName1,itemName2,itemName3,TitemPrice1,TitemPrice2,TitemPrice3);
   itemPrice1 = 0;
    itemQuantity1 = 0;
    itemPrice2 = 0;
    itemQuantity2 = 0;
    itemPrice3 = 0;
    itemQuantity3 = 0;
    total = 0;
    TitemPrice1=0;
    TitemPrice3=0;
    TitemPrice2=0;

   }
  else if (choice == "6")
{   cout <<"press q to exit\n";
   char ch = _getch();
    if(ch=='q'){ 
    cout << "exiting program\n" << endl;
    Sleep(2000);
    break;
    }
}
  
   else
   {
     cout << "choose from above options!!!"<<endl;
   }
}
}

void add_data(string &itemname,float &itemprice,float &itemquantity)
{
   
    cout << "enter the item name: ";
    cin>> itemname;
    if(itemname=="cake" or itemname=="sundae" or itemname=="coffee" or itemname=="donut" or itemname=="brownie")
    {
       cout << "enter the item price: ";
    cin>> itemprice;
    cout << "enter the quantity: ";
    cin >> itemquantity;
    cout <<"press any to continue\n";
    _getch();
       
    }
    else{ 
      cout << "we dont sell it!"<<endl ;
      itemname="";
      itemprice=0;
      itemquantity=0;
    
    }
}
void calculate(float &itemprice1,float &itemquantity1,float &itemprice2,float &itemquantity2,float &itemprice3,float &itemquantity3,float &total,float &TitemPrice1,float &TitemPrice2,float &TitemPrice3)
{
         
   TitemPrice1 = itemprice1 * itemquantity1;
  TitemPrice2 = itemprice2 * itemquantity2;
TitemPrice3 = itemprice3 * itemquantity3;
    total = TitemPrice1 + TitemPrice2 + TitemPrice3;
  
  
   cout <<"press any to continue\n";
    _getch();
      
        
        
    
}

void result(float &itemPrice1,float &itemQuantity1,float &itemPrice2,float &itemQuantity2,float &itemPrice3,float&itemQuantity3,float &total,string &itemName1,string &itemName2,string &itemName3,float &TitemPrice1,float &TitemPrice2,float &TitemPrice3)
{
   if(total==0)
      {
        cout << "enter data first."<<endl;
      }
      else
      {
      cout << left << setw(12) << "name"    << setw(12) << "quantity"    <<setw(12)<<"unit"    <<setw(12)<<"Total item price" << endl;
      cout << left << setw(12) << itemName1 << setw(12) << itemQuantity1 <<setw(12)<<itemPrice1<<setw(12)<<TitemPrice1 << endl;
      cout << left << setw(12) << itemName2 << setw(12) << itemQuantity2 <<setw(12)<<itemPrice2<<setw(12)<< TitemPrice2 << endl;
      cout << left << setw(12) << itemName3 << setw(12) << itemQuantity3 <<setw(12)<<itemPrice3<<setw(12)<< TitemPrice3 << endl;
    if (total > 6000)
{
    cout << "your grand total : " << (total - (total*0.15)) << endl;
    cout << "you got 15 percent discount" << endl;
}
else
{
    cout << "your grand total is: " << total << endl;
}
cout <<"press any to continue\n";
    _getch();     
    
    
}
}

void admin(string username,string password)
{
  
system("cls");
 cout<< "Username:";
 cin>>username;
 cout<<"Password:";
 cin >> password ;
 if(username=="admin23" && password=="2nifjakl")
 { 
  system("cls");
  cout<<"Welcome Admin!!"<<endl;
  Sleep(2000);
  system("cls");
 }
 else
 {
   cout << "wrong username or password"<<endl<<"WAIT FOR 5 SECONDS"<<endl;
   Sleep(5000);
   admin(username,password);
}
}