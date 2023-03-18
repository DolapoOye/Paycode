#include <iostream>
#include <iomanip> // This is for setting decimal places
using namespace std;

int main()
{
    // Defining Constants
    const double MANAGER_SAL = 50000;
    const double FACTORY_WORK = 13.85;
    const double SALES_STAFF = 250;
    const double wagePerPiece = 11.30;
    const double taxes = 27.85;
    const int QUIT_CHOICE = 0;
    const double deduction = 27.85;
    const double managerdivisor = 32.6831564;
    // Declaring variables
    int paycode , factoryworkhrs = 40;
    double Manbiweek , overTime , factWorkSal;
    double salary;
    int weeklySales , pieces;
    int selection;
    
    //double salesBiweekly = 

    // Settting the output to two decimal places
    cout << setprecision(2) << fixed << showpoint;
    
    

    int totalhrs;
    int hours;

// This is for my program to perform what is listed below if the 
// user's selection falls within the ones provided.
// If the user enters a value outside the ones provided,
// the program will prompt them to enter a valid selection
do
{
    cout << "Enter paycode (1, 2, 3, or 4) " << endl;
    cout << "Enter 1 for Manager " << endl;
    cout << "Enter 2 for Factory Hourly Worker \n";
    cout << "Enter 3 for Sales Staff Worker \n";
    cout << "Enter 4 for PieceWorker. (0 to end): ";
    cin >> paycode;
    

    // Calculations
    Manbiweek = (MANAGER_SAL - deduction)/ managerdivisor;

    
    while(paycode >4 || paycode < QUIT_CHOICE )
    {
        cout <<"You have made an invalid selection! \n";
    }

    if (paycode != QUIT_CHOICE)
    {
        
    }
    
    
    
    
    switch(paycode)
    {
    case 1: cout << "Manager selected. " << endl;
    cout << "Manager's Annual Salary = " << MANAGER_SAL - (deduction)- (MANAGER_SAL * taxes);
    cout <<"Manager's bi-weekly pay is " << Manbiweek - (Manbiweek * taxes) << endl << endl;
    break;


    case 2: cout << "Factory worker selected. " << endl;
    cout << "Factory woker hourly salary = " << FACTORY_WORK << endl;
    cout << "Enter the total hours worked: ";
    cin >> hours;
    if(hours > 40)
    {
        salary = FACTORY_WORK * hours;
        overTime = 1.5 * FACTORY_WORK;
        factWorkSal = (salary + overTime) - taxes;
    }
    else
    {
        factWorkSal = (FACTORY_WORK * hours) - taxes ;
    }
    cout << "Factory Worker's pay is " << factWorkSal -(0.19 * factWorkSal) << endl<<endl;
    break;

    
    case 3: cout << "Sales Staff worker selected. \n";
    cout << "Enter Gross Weekly Sales: ";
    cin >> weeklySales;
    cout << "Sales Staff worker's pay is " << SALES_STAFF + (weeklySales * 0.057) << endl;
    //cout << "Sales Staff's bi-weekly pay is " 
    break;


    case 4: cout << "Pieceworker selected. \n";
    cout << "Enter number of pieces ";
    cin >> pieces;
    cout << "Wage per piece = " << wagePerPiece << endl;
    cout << "Piecewoker's pay is " << wagePerPiece * pieces << endl;
    //cout << "Pieceworker's bi-weekly pay is ";

    
    break;

    
    
    
    
    
    } 
    
    




}while (paycode != QUIT_CHOICE);







}
    



    