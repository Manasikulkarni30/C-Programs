/* Write a C++ program that accepts sales unit price and sales quantity of various items and compute total sales amount and the average sales 
quantity. All input values must greater than or equal to 0 and less than or equal to 1,000, and the number of pairs of sales unit and 
sales quantity does not exceed 100. If a fraction occurs in the average of the sales quantity, round the first decimal place. */

#include<iostream>
using namespace std;
int main()
{
int prc[5],qt[5],i,n,total=0;
cout<<"\n Enter the number of sales product: ";
cin>>n;
	for(i=1;i<=n;i++)
		{
			cout<<" Enter the details of the "<<i<<" No. product : " << endl;
			cout<<"\n Enter the unit price of the sales product (between 0 to 1000): " << endl;
			cin>>prc[i];
			cout<<"Enter the quantity of the sales product (between 0 t0 1000): " << endl;
			cin>>qt[i];
			total=(total+(prc[i]*qt[i]));
		}

	for(i=1;i<=n;i++)
		{
			cout<<"\n________________________________________";
			cout<<"\n\n The details of the "<<i<<" No. product";
			cout<<"\n The unit price of the sales product is: "<<prc[i];
			cout<<"\n The quantity of the sales product is: "<<qt[i];
			cout<<"\n\n";
		}
		cout<<"\n________________________________________";
cout<<"\n The total sales amount is: "<<total;
}
