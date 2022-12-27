#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
    int n;
    n=1;
    double initial=0;
    double money=0;
    double interest=0;
    double interestrate=0;
    double payment=0;
    double total=0;
    double newbalance=0;
    cout << "Enter initial loan: ";
    cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
    cin >> payment;
    
    money= initial;
    total=(((interest+100)/100)*money) ;
    interestrate=(money*(interest/100)) ;
    newbalance = (total-payment);
    
    
    cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	double x = payment;
	if(x>total)
	{
	    x=total;
	}
	while(true){
    
	if(total<payment)
	{
	    payment=total;
	    newbalance=0;
	    cout << fixed << setprecision(2); 
	cout << setw(13) << left << n; 
	cout << setw(13) << left << money;
	cout << setw(13) << left << interestrate;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newbalance;
	cout << "\n";
	
	n+=1;
    newbalance = (total-payment);
	    break;
	}
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n; 
	cout << setw(13) << left << money;
	cout << setw(13) << left << interestrate;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newbalance;
	cout << "\n";
	
	n+=1;
	
	money=newbalance;
	 interestrate=(money*(interest/100)) ;
    total=(((interest+100)/100)*money) ;
   
    newbalance = (total-payment);
	if(money<0)
	break;
	}
    
    
    
    
    
    return 0;
}