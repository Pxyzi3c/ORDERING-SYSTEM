#include <iostream>
#include <iomanip>

using namespace std;

//PROGRAMMER: HARVY JONES PONTILLAS DICT 1-2
int main()
{   //variables and constants declaration
    double pork_siomai_price = 20.00;
    double beef_siomai_price = 25.00;
    double shrimp_siomai_price = 30.00;
    double coke_price = 20.00;
    double royal_price = 20.00;
    double sprite_price = 20.00;
    double amount_porkS = 0.00;
    double amount_beefS = 0.00;
    double amount_shrimpS = 0.00;
    double amount_coke = 0.00;
    double amount_royal = 0.00;
    double amount_sprite = 0.00;
    double total = 0.00;
    double grandTotal = 0.00;
    int quantity_porkS = 0;
    int quantity_beefS = 0;
    int quantity_shrimpS = 0;
    int quantity_coke = 0;
    int quantity_royal = 0;
    int quantity_sprite = 0;
    char ans = 'Y';

    //loop process
    do{
    system("cls");

    //heading
    cout <<"\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout <<"\t  %%%%%%%\t\t\t\t\t    %%%%%%%\n\t   %    %\t\t\t\t\t    %    %\n\t    %   %\tCARDO D'S SIOMAI AND BEV. CART\t    %   %" <<endl;
    cout <<"\t   %    %\t\t\t\t\t    %    %\n\t  %%%%%%%\t\t\t\t\t    %%%%%%%\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" <<endl;
    cout <<"\n\t\t\tWHAT'S YOUR ORDER MA'AM/SIR...."<<endl;

    //input items and amount computation
    cout <<"\n\t    ENTER THE NUMBER OF PORK SIOMAI ORDERED (20.00)  : ";
    cin >> quantity_porkS;
    amount_porkS = quantity_porkS*pork_siomai_price;
    cout <<"\n\t    ENTER THE NUMBER OF BEEF SIOMAI ORDERED (25.00)  : ";
    cin >> quantity_beefS;
    amount_beefS = quantity_beefS*beef_siomai_price;
    cout <<"\n\t    ENTER THE NUMBER OF SHRIMP SIOMAI ORDERED (30.00): ";
    cin >> quantity_shrimpS;
    amount_shrimpS = quantity_shrimpS*shrimp_siomai_price;
    cout <<"\n\t    ENTER THE NUMBER OF COKE ORDERED (20.00)\t     : ";
    cin >> quantity_coke;
    amount_coke = quantity_coke*coke_price;
    cout <<"\n\t    ENTER THE NUMBER OF ROYAL ORDERED (20.00)\t     : ";
    cin >> quantity_royal;
    amount_royal = quantity_royal*royal_price;
    cout <<"\n\t    ENTER THE NUMBER OF SPRITE ORDERED (20.00)\t     : ";
    cin >> quantity_sprite;
    amount_sprite = quantity_sprite*sprite_price;

    //formula for total and grand total
    total = amount_porkS + amount_beefS + amount_shrimpS + amount_coke + amount_royal + amount_sprite;
    grandTotal += total;

    //displaying orders, quantity, amount, and total
    system("cls");
    //heading
    cout <<"\n\n\t\t\t CARDO D'S SIOMAI AND BEV. CART" <<endl;
    cout <<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout <<"\n\t\tPARTICULARS\t\tQUANTITY\t  AMOUNT"<<endl;
    //diplay output in fixed-point notation with two decimal places
    cout <<fixed <<setprecision(2)<<endl;
    //determine what items the user has ordered based on quantity
    //pork siomai
    if(quantity_porkS>0)
    {
        cout << "\n\t\tPORK SIOMAI\t\t   "<<quantity_porkS<<"\t\t  "<<pork_siomai_price;
    }
    else if(quantity_porkS==0)
    {
        cout <<" ";
    }
    //beef siomai
    if(quantity_beefS>0)
    {
        cout << "\n\t\tBEEF SIOMAI\t\t   "<<quantity_beefS<<"\t\t  "<<beef_siomai_price;
    }
    else if(quantity_beefS==0)
    {
        cout <<" ";
    }
    //shrimp siomai
    if(quantity_shrimpS>0)
    {
        cout << "\n\t\tSHRIMP SIOMAI\t\t   "<<quantity_shrimpS<<"\t\t  "<<shrimp_siomai_price;
    }
    else if(quantity_shrimpS==0)
    {
        cout <<" ";
    }
    //coke
    if(quantity_coke>0)
    {
        cout << "\n\t\tCOKE\t\t\t   "<<quantity_coke<<"\t\t  "<<coke_price;
    }
    else if(quantity_coke==0)
    {
        cout <<" ";
    }
    //royal
    if(quantity_royal>0)
    {
        cout << "\n\t\tROYAL\t\t\t   "<<quantity_royal<<"\t\t  "<<royal_price;
    }
    else if(quantity_royal==0)
    {
        cout <<" ";
    }
    //sprite
    if(quantity_sprite>0)
    {
        cout << "\n\t\tSPRITE\t\t\t   "<<quantity_sprite<<"\t\t  "<<sprite_price;
    }
    else if(quantity_sprite==0)
    {
        cout <<" ";
    }

    //display total
    cout <<"\n\t\t________________________________________________"<<endl;
    cout <<"\t\tTOTAL\t\t\t   :\t\t  ";
    cout << total<<endl;
    cout <<"\n\n\t\t\tTHANK YOU FOR COMING! COME AGAIN!"<<endl;

    //user's decision to process/continue another order/s or not
    cout << "\n\n\t\tDO YOU WANT TO CONTINUE? (Y/N) ";
    cin >> ans;
    }while((ans=='Y')||(ans=='y'));

    //display grand total in a clear screen
    system("cls");
    cout <<"\n\tGRAND TOTAL : " <<grandTotal <<endl;
    return 0;
}
