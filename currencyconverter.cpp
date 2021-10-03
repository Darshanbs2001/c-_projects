#include<iostream>
#include<process.h>
using namespace std;
class currency{
 private :
           
          int userchoice;
         float currency,currency_conversion_rate[6]={1.0,0.013,0.012,0.0819,1.498},usd_rates[6]={74.15,1.0,0.86,6.45,111.08},euro_rates[6]={85.96,1.16,1,7.47,128.78},yuan_rates[6]={11.50,0.16,0.13,1.0,17.23},yens_rates[6]={0.67,0.0090,0.0078,0.058,1.0};
         string currency_prefix[7]={"Rs" , "USD" , "EUR" , "YUAN" , "YENS"};
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
         float convert_INR(int currency_selection,float a[])
         {
             
             return currency*a[currency_selection-1];
         }
         void convert()
         {
             int currency_selection;
             cout<<"Choose from the currency to enter the amount\n";
             cout<<"1.INR\n2.USD\n3.Euros \n4.Yangs \n5.Yens\n";
              cin>>currency_selection;
             switch(userchoice)
             {
                case 1:cout<<"the converted amount is " <<currency_prefix[currency_selection-1]<<" "<<convert_INR(currency_selection,currency_conversion_rate)<<"\n";
                        break;
                case 2:cout<<"the converted amount is " <<currency_prefix[currency_selection-1]<<" "<<convert_INR(currency_selection,usd_rates)<<"\n";
                        break;
                case 3:cout<<"the converted amount is " <<currency_prefix[currency_selection-1]<<" "<<convert_INR(currency_selection,euro_rates)<<"\n";
                        break;
                case 4:cout<<"the converted amount is " <<currency_prefix[currency_selection-1]<<" "<<convert_INR(currency_selection,yuan_rates)<<"\n";
                        break;
                case 5:cout<<"the converted amount is " <<currency_prefix[currency_selection-1]<<" "<<convert_INR(currency_selection,yens_rates)<<"\n";
                        break;
                default:cout<<"Invalid selection or the currency is not supported for now \n";
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