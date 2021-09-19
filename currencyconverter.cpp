#include<iostream>
#include<process.h>
using namespace std;
class currency{
 private :
           
          int userchoice,currency;
         float currency_conversion_rate[6];
         string currency_prefix[7]={"Rs" , "USD" , "EUR" , "YANG" , "YEN"};
 public :
         void insert()
         {
             cout<<"Choose from the currency to enter the amount\n";
             cout<<"1.INR\n2.USD\n3.Euros \n4.Yangs \n5.Yens\n";
              cin>>userchoice;
             cout<<"Enter the amount : ";
             cout<<currency_prefix[userchoice-1]<<" ";
             cin>>currency;
             cout<<"\n";
         }
         void convert()
         {
             if(currency>=0)
             {
             currency=currency*currency_conversion_rate[userchoice];
             cout<<currency;
             }
             else
             {
             cout<<"the currency is invlaid";
              exit(0);
             }
         }
};
int main()
{
 currency c;
 
c.insert();
c.convert();
return 0;
}