#include<iostream>
#include<string>
using namespace std;
class invoice{
public:
string part,description_part;
int quantity,price;
double VAT,Discount;
public:
invoice(string P1,string D,int Q,int P,double v1,double d1){
part=P1;
description_part=D;
quantity=Q;
price=P;
VAT=v1;
Discount=d1;
cout<<"Part number\t"<<"Parts Description\t"<<"Quantity of item\t"<<"Price\t"<<"VAT\t"<<"Discount\t"<<endl;
}
public:
void getparts ()
{
cout<<"\t"<<part<< "\t\t" <<description_part<< "\t\t" <<quantity<<"\t\t"<< price<<"\t\t"<<VAT<<"\t\t"<<Discount<<"\t"<<endl<<endl;
}
void setpart(string a){
part = a;
}
};
int main()
{

invoice a("Bulb","Light",5,550,0.2,0);
a.getparts();
return 0;
}
