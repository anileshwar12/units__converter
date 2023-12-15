#include<stdio.h>
#include<stdlib.h>

// Functions for units
void temperature();
void currency();
void mass();
void length();
void speed();
void volume();
int main(){

    char retry, category;

    do
    {
        

        printf("\nWelcome to Unit Converter!\n");
        printf("Here is a list of converters to choose from: \n");
        printf("Enter 'T' for Temperature convertion.\n");
        printf("Enter 'M' for Mass convertion.\n");
        printf("Enter 'L' for Length conversion.\n");
        printf("Entre 'C' for Currency convertion.\n");
        printf("Enter 'S' for Speed conversion.\n");
        printf("Enter 'V' for Volume conversion.\n\n");
        printf("Enter input: ");
        scanf(" %c", &category);

        

        switch (category)
        {
            case 'T':
            case 't':
                temperature();
                break;
            case 'M':
            case 'm':
                mass();
                break;
            case 'C':
            case 'c':
                currency();
                break;
            case 'L':
            case 'l':
                length();
                break;
            case 'S':
            case 's':
                speed();
                break;
            case 'V':
            case 'v':
                volume();
                break;
            default:
                printf("\nError: Invalid Input. \n");
                break;
        }

        printf("\nDo you wanna try again [Y/N]: ");
        scanf(" %c", &retry);
        

    } while (retry == 'y' || retry == 'Y');

    return 0;
}

// Function for temperature conversion
void temperature()
{   
    

    int input;
    float  celsius, fahrenheit;
    
    printf("\nWelcome to Temperature Converter!\n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for Celsius to Fahrenheit. \n");
    printf("Enter 2 for Fahrenheit to Celisus. \n\n");
    printf("Enter input: ");
    scanf("%d", &input);

    
    if(input==1)
    {
        printf("Enter Celisus: ");
        scanf("%f",&celsius);

        fahrenheit = celsius * 1.8000 + 32.00;

        printf("Fahrenheit: %.2f \n", fahrenheit);
    } 
    else if (input==2)
    {
        printf("Enter Fahrenheit: ");
        scanf("%f",&fahrenheit);

        celsius = (fahrenheit - 32)*5/9;

        printf("Celsius: %.5f \n",celsius);
    } 
    else 
        printf("ERROR: Invaild Input.");
}

// Function for mass conversion
void mass()
{
    

    int input;
    printf("\nWelcome to Mass Converter!\n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for ounces to pounds. \n");
    printf("Enter 2 for gram to pounds. \n\n");
    printf("Enter input: ");
    scanf("%d",&input);

    

    if(input==1)
    {
        int userinputOunce;
        float ounceToPounds;

        printf("Please enter the ounce amount: ");
        scanf("%d",&userinputOunce);
        ounceToPounds = userinputOunce * 0.0625;
        printf("Pounds: %.2f \n",ounceToPounds);
    }
    else if (input==2)
    {
        int userinputGram;
        float gramsToPounds;

        printf("Please enter the gram amount: ");
        scanf("%d",&userinputGram);
        gramsToPounds = userinputGram * 0.00220462;
        printf("Pounds: %.2f \n",gramsToPounds);
    }
    else 
        printf("ERROR: Invaild Input.");
}

// Function for length conversion
void length()
{
    float M,F,I,C,MI,K;
    int input;
    printf("\nWelcome to Length Converter! \n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for Meters to Foot\n");
    printf("Enter 2 for MeterS to Inches\n");
    printf("Enter 3 for Inches to Centimeters\n");
    printf("Enter 4 for kilometers to Miles\n");
    printf("Enetr input: ");
    scanf("%d",&input);
    if (input==1)
    {
        printf("Enter the value in Meters: ");
        scanf("%f",&M);
        F = M*3.28084;
        printf("Foot: %.2f\n",F);

    }
    else if (input==2)
    {
        printf("Enter the value in Meters: ");
        scanf("%f",&M);
        I = M*39.3701;
        printf("Inches: %.2f\n",I);
    }
    else if (input==3)
    {
        printf("Enter the value in Inches: ");
        scanf("%f",&I);
        C = I*2.54;
        printf("Centimeters: %.2f\n",C);
    }
    else if (input==4)
    {
        printf("Enter the value in Kilometers: ");
        scanf("%f",&K);
        MI = K*0.6213;
        printf("Miles: %.2f\n",MI);
    }
    else
    {
        printf("ERROR: Invaild Input.");
    }
}
// Function for currency conversion
void currency()
{
    

    int input;
    float usd, inr, eur, cny, jpy;
    printf("\nWelcome to Currency Converter! \n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for INR to Euro. \n");
    printf("Enter 2 for INR to JPY. \n");
    printf("Enter 3 for INR to CNY. \n");
    printf("Enter 4 for INR to USD. \n\n");
    printf("Enter input: ");
    scanf("%d",&input);

    

    if (input==1)
    {
        printf("Enter the INR amount: ");
        scanf("%f",&inr);

        eur = inr * 0.011;

        printf("Euro: %.2f \n ",eur);
    }
    else if (input==2)
    {
        printf("Enter the INR amount: ");
        scanf("%f",&inr);

        jpy = inr * 1.79;

        printf("Japanese Yen: %.2f \n ",jpy);
    }
    else if (input==3)
    {
        printf("Enter the INR amount: ");
        scanf("%f",&inr);

        cny = inr * 0.086;

        printf("Chinese Yuan: %.2f \n ",cny);
    }
    else if (input==4)
    {
        printf("Enter the INR amount: ");
        scanf("%f",&inr);

        usd = inr * 0.012;

        printf("US Dollars: %.2f \n ",usd);
    }
    else
        printf("ERROR: Invaild Input.");
}

// Function for speed conversion
void speed() {
    float kmph, mph;

    printf("\nSpeed Converter\n");
    printf("1. Kilometers per hour to Miles per hour\n");
    printf("2. Miles per hour to Kilometers per hour\n");
    printf("Enter your choice: ");
    int input;
    scanf("%d", &input);

    if (input == 1) {
        printf("Enter Kilometers per hour: ");
        scanf("%f", &kmph);
        mph = kmph * 0.621371;
        printf("Miles per hour: %.2f\n", mph);
    } else if (input == 2) {
        printf("Enter Miles per hour: ");
        scanf("%f", &mph);
        kmph = mph * 1.60934;
        printf("Kilometers per hour: %.2f\n", kmph);
    } else {
        printf("Error: Invalid Input.\n");
    }
}

// Function for volume conversion
void volume() {
    float gallon, liter;

    printf("\nVolume Converter\n");
    printf("1. Gallons to Liters\n");
    printf("2. Liters to Gallons\n");
    printf("Enter your choice: ");
    int input;
    scanf("%d", &input);

    if (input == 1) {
        printf("Enter Gallons: ");
        scanf("%f", &gallon);
        liter = gallon * 3.78541;
        printf("Liters: %.2f\n", liter);
    } else if (input == 2) {
        printf("Enter Liters: ");
        scanf("%f", &liter);
        gallon = liter * 0.264172;
        printf("Gallons: %.2f\n", gallon);
    } else {
        printf("Error: Invalid Input.\n");
    }
}