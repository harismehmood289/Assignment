
#include<iostream>
#include<string> 
using namespace std;

int main()
{
	/*   Declaring  */
	/* for question 1*/    int x;
	/*for question 2 */    int first,second;
	/*for question 3 */    string arr;
	/*for question 4 */    int f_1,s_2;
	/*for question 5 */    int radius;
	/*for question 7 */    int f_2;
	/*for question 8 */    int num1, num2, num3, num4, num5, largest, smallest;
    /*for question 9 */               	int n;
	x=3+3*4/2-2;
	x=4%2+2*4-2/2;
	x=(2*4*2+(9*3/3));
	cout<<endl;
	cout<<"                                    Assignment NO 1 OPP "<<endl;
	cout<<"                                           Instructor Prof Umair "<<endl<<endl;
	cout<<"Question #1:State the order of evaluation of the operators in each of the following and show the value of x? \n x=3+3*4/2-2\nx=4%2+2*4-2/2\nx=(2*4*2=(9*3/3))"<<endl;
	cout<<"\t     The Value of :	"<<x<<endl;
	cout<<"----------------------------------------------------------"<<endl<<endl;
	cout<<"Question #2 :Write the program that ask the user to enter two numbers Obtains the two number From the user and print the sum,product,difference and quotient ?"<<endl<<endl;
	 cout<<"\t Enter the 1st Number :"<<endl;
	 cin >> first;
	 cout<<"\t Enter the Second Number : "<<endl;
	 cin>>second;
	int  sum=first+second;
	int product =first*second;
	int diff=first/second;
	int qout=first%second;
	cout<<"The sum is :"<<sum<<endl;
	cout<<"The Product is :"<<product<<endl;
	cout<<"The Differnce is :"<<diff<<endl;
	cout<<"The Quotient :"<<qout<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Question #3 :Write the program that print the message Welcome  to C++ Programming and and one line With each Word separated?  "<<endl;
	cout<<"Welcome to C++ Programming "<<endl;
	cout<<"Welcome"<<"To"<<"C++"<<"Programming"<<endl;
	cout<<"Welcome "<<endl;
	cout<<"To "<<endl;	
	cout<<"C++ "<<endl;	
	cout<<"Programming "<<endl<<endl;
	cout<<"-------------------------------------------------------------"<<endl<<endl;
	cout<<"Question no 4:Input from the user and check the number are equal or not ?"<<endl<<endl;
	cout<<"Enter the 1st number :"<<endl;
	cin>>f_1;
	cout<<"Enter the Second Number :"<<endl;
	cin>>s_2;
	if(f_1==s_2)
	{
		cout<<"These are equal";	
	}
	else 
	{
		cout<<"These Numbers Are not Equal "<<endl;
	}
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Question #5 :Write the program that ask the user to enter two numbers Obtains the two number From the user and print the sum,product,difference and quotient smallest and largest? ?"<<endl;
	cout<<"\t Enter the 1st Number :"<<endl;
	cin >> first;
	cout<<"\t Enter the Second Number : "<<endl;
	cin>>second;

	cout<<"The sum is :"<<sum<<endl;
	cout<<"The Product is :"<<product<<endl;
	cout<<"The Differnce is :"<<diff<<endl;
	cout<<"The Quotient :"<<qout<<endl;
	if (first>second){
		cout<<"The First NUmber is Largest:"<<first<<endl;
		
	}
	if(second>first){
		cout<<"The second is Largest :"<<second<<endl;
	}
	if (first<second){
		cout<<"The First NUmber is smallest:"<<first<<endl;
		
	}
	if(second<first){
		cout<<"The second is smallest " <<second<<endl;
	}
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Question #6 :Input the Number as integer of radius and calculate the area,circumfernce and circle diamater?"<<endl;
	cout<<"Input the radius :"<<endl;
	cin>> radius;
int	circle =2*radius;
int	circum= 2*3.14*radius;
int	area=3.14*radius*radius;
cout<<"The Circel's Diameter is "<<circle<<endl;
cout<<"The Circumfernce of  circle is "<<circum<<endl;
cout<<"The area  is "<<area<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"Question #7 :Dislay the output ?"<<endl<<endl<<endl;
cout<<"     CCC"<<endl;
cout<<"   C"<<endl;
cout<<"  C"<<endl;
cout<<"   C"<<endl;
cout<<"     CCC"<<endl;
cout<<"  *"<<endl;
cout<<"  *"<<endl;
cout<<"*****"<<endl;
cout<<"  *"<<endl;
cout<<"  *"<<endl;
cout<<"-------------------------------------------------------------"<<endl;
cout<<"Question #8 :Read the Five number and find the largesta and smallest?"<<endl;

 

 cout << "Enter five integers: ";
 cin >> num1 >> num2 >> num3 >> num4 >> num5;

 largest = num1;
 smallest = num1;

 if ( num1 > largest )
 largest = num1;

 if ( num2 > largest )
 largest = num2;

 if ( num3 > largest )
 largest = num3;

 if ( num4 > largest )
 largest = num4;

  if ( num5 > largest )
 largest = num5;

 if ( num1 < smallest )
 smallest = num1;

 if ( num2 < smallest )
 smallest = num2;

  if ( num3 < smallest )
 smallest = num3;

 if ( num4 < smallest )
 smallest = num4;

 if ( num5 < smallest )
 smallest = num5;

 cout << "Largest is " << largest<< "\nSmallest is " << smallest << endl;
 	cout<<"-------------------------------------------------------------"<<endl;
 	cout<<" Question #9 :Enter the Number and find Even or Odd?"<<endl;

    
    cout << "Enter an integer: "<<endl;
    cin >> n;
    if ( n % 2 == 0)
        cout << n << " is even."<<endl;
    else
        cout << n << " is odd."<<endl;
   
cout<<"-------------------------------------------------------------"<<endl;
 	cout<<" Question #10:Output?"<<endl;
 	cout<<"* * * * * * * * *"<<endl;
 	cout<<" * * * * * * * * *"<<endl;
	cout<<"* * * * * * * * *"<<endl;
	cout<<" * * * * * * * * *"<<endl;
	cout<<"* * * * * * * * *"<<endl;
	cout<<" * * * * * * * * *"<<endl;	
	cout<<"* * * * * * * * *"<<endl;
	




	
	
	
	

         	
	
	return 0;
}

