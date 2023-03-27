// This program calculates the salary and bi-weekly pay of a manager.
// It also calculates the weekly and biweekly pay of other workers
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
    const double taxes = 0.19;
    const int QUIT_CHOICE = 0;
    const double deduction = 27.85;
    const double managerdivisor = 32.6831564 , managerTax = (MANAGER_SAL * taxes);
    
    // Declaring variables
    int paycode , factoryworkhrs = 40;
    double overTime , factWorkSal;
    double salary;
    double Manbiweek, biWeekly;
    int weeklySales , pieces;
    int selection = 4;
    int totalhrs , hours;

    // Settting the output to two decimal places
    cout << setprecision(2) << fixed << showpoint;

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
    Manbiweek = MANAGER_SAL / managerdivisor;
    biWeekly = (Manbiweek * taxes);

    
    if(paycode >4 || paycode < QUIT_CHOICE )
    {
        
        cout <<"You have made an invalid selection! Enter a number between 1, 2, 3, and 4 \n\n";
    }

    else
    {
        
    }
    
    
    
    
    
    switch(paycode)
    {
    
    // End user can select option 1 to call on the manager.
    // The manager's weekly pay and bi-weekly pay was 
    // also calculated after taxes and other deductions
    
    case 1: cout << "Manager selected. " << endl;
    cout << "Manager's Annual Salary = " << MANAGER_SAL - deduction - managerTax<< endl;
    cout <<"Manager's bi-weekly pay is " << Manbiweek - biWeekly  << endl << endl;
    break;

    // End user can select option 2 to call on Factory worker.
    // Factory worker weekly pay and bi-weekly pay was 
    // also calculated after taxes and other deductions

    case 2: cout << "Factory worker selected. " << endl;
    cout << "Factory woker hourly salary = " << FACTORY_WORK << endl;
    cout << "Enter the total hours worked: ";
    cin >> hours;
    
    // If the factory worker exceeds 40 hours, the program
    // will automatically calculate the overtime pay and 
    // add it to the 40 hours pay.
    
    if(hours > 40)
    {
        salary = FACTORY_WORK * hours;
        overTime = 1.5 * FACTORY_WORK;
        factWorkSal = (salary + overTime) - taxes;
    }
    
    // And if the factory worker works for 40 hours or less,
    // the program will calculate their pay with the base pay provided.
    else
    {
        factWorkSal = (FACTORY_WORK * hours) - taxes ;
    }
    cout << "Factory Worker's pay is " << factWorkSal -(0.19 * factWorkSal) << endl;
    cout << "Factory Worker's bi-weekly pay is " << ((2 * factWorkSal) - (2 * deduction)) << endl;
    break;

    // End user can select option 3 to call on Sales staff worker.
    // Sales staff worker weekly pay and bi-weekly pay was 
    // also calculated after taxes and other deductions
    case 3: cout << "Sales Staff worker selected. \n";
    cout << "Enter Gross Weekly Sales: ";
    cin >> weeklySales;
    cout << "Sales Staff worker's pay is " << SALES_STAFF - (0.19 * SALES_STAFF) - (deduction) + (weeklySales * 0.057) << endl;
    cout << "Sales Staff's bi-weekly pay is "  << ((2 * SALES_STAFF) + ( 2 * (weeklySales * 0.057))- (2 * deduction) - (0.19 * (2 * SALES_STAFF))) << endl;
    break;

    // End user can select option 4 to call on pieceworkers.
    // Pieceworkers weekly pay and bi-weekly pay was 
    // also calculated after taxes and other deductions
    case 4: cout << "Pieceworker selected. \n";
    cout << "Enter number of pieces ";
    cin >> pieces;
    cout << "Wage per piece = " << wagePerPiece << endl;
    double pieceWage = wagePerPiece * pieces;
    double pieceTax = 0.19 * pieceWage;
    cout << "Piecewoker's pay is " << pieceWage - pieceTax << endl;
    cout << "Pieceworker's bi-weekly pay is " << ((2 * pieceWage) - (2*(pieceTax))) << endl;

    
    break;

    
    
    
    
    
    } 
    
    




}while (paycode != QUIT_CHOICE);







}
    



    