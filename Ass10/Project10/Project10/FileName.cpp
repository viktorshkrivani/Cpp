/*they need to exchange the dollar to their respective countries' currency Yuan, Euro, and Pounds. 

The conversion factors for Yuan is 6.77, for Euro is 0.98, and for Pounds is 0.83.The conversion fee for United States is 5 % .

Create three classes ctm, amount, and rc.The amount class is child to the parent ctm class and the rc class is child to the amount class.

In other words, ctm class is the parent, amount class is child, and rc class is grandchild
Parent class ctm which will contain all variables used in all child classes.

It will contain intro() method which takes input for currency selection(1 - 3).This input has to be either 1(Yuan), 2(Euro), or 3(Pounds).
Use two validations to ensure only one of these three numbers are entered.
• First validation should check if a positive integer is entered.
• The second validation should check if the number is 1, 2, or 3.
• For both validations, an error message should be displayed : Invalid entry, Please enter a number between 1 - 3.
•(Make sure to use the correct spaces and letters) and you should be able to input again right after the error message

Based on the input number, the conversion factor will be assigned their int values and a string type is assigned the currency name Yuan, Euro, or Pounds(Beware of the UPPER case).

The amount class contains calculations() method which takes an input for the amount of currency needed in exchange.Then it calculates the conversion amount(in dollars), conversion fees(on the conversion amount), and total amount due(in dollars).


The rc class contains rctype() method which creates an output file receipt txt that contains the amount of exchange currency, conversion fees, and total amount due.
• These values should be limited to 2 decimal places.
The same contents are also printed on console by reading the contents of the
output file receipt.txt which was just created.


Input Format
There will be 2 inputs:
1. Number 1 - 3 for currency selection
2. The amount of currency needed in exchange(in Yuan, Euro, or Pounds).
Output Format
1. First line prints the amount of currency needed in exchange with the currency name
2. Second line prints the conversion amount(in dollars)
3. Third line prints the conversion fee amount(in dollars)
4. Fourth line prints the total amount due(in dollars)
Note: This output is first written on the output file "receipt.txt" and then read from that same file!


To - Do :
    Write a C++ program that takes an amount needed in exchange currency and calculates the total amount due in the United States dollar to complete the transaction.
    Note : No need to change anything in main()!


    int main()
{
    rc obj;
    obj.ctm::intro();
    obj.amount::calculations();
    obj.rctype();

    return 0;
}
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class ctm {
protected:
    int currencySelection;
    double conversionFactor;
    std::string currencyType;

public:
    void intro() {
        std::cin >> currencySelection;

        if (currencySelection == 1) {
            conversionFactor = 6.77;
            currencyType = "Yuan";
        }
        else if (currencySelection == 2) {
            conversionFactor = 0.98;
            currencyType = "Euro";
        }
        else if (currencySelection == 3) {
            conversionFactor = 0.83;
            currencyType = "Pounds";
        }
    }
};

class amount : public ctm {
protected:
    float exchangeAmount;
    double conversionAmount;
    double conversionFee;
    double totalAmountDue;

public:
    void calculations() {
        std::cin >> exchangeAmount;

        conversionAmount = exchangeAmount / conversionFactor;
        conversionFee = conversionAmount * 0.05;
        totalAmountDue = conversionAmount + conversionFee;
    }
};

class rc : public amount {
public:
    void rctype() {
        std::ofstream receiptFile("receipt.txt");
        if (receiptFile.is_open()) {
            receiptFile << std::fixed << std::setprecision(2);
            receiptFile << exchangeAmount << " " << currencyType << "\n";
            receiptFile << conversionAmount << " dollars\n";
            receiptFile << conversionFee << " dollars\n";
            receiptFile << totalAmountDue << " dollars\n";
            receiptFile.close();

            std::ifstream inputFile("receipt.txt");
            if (inputFile.is_open()) {
                std::string line;
                while (std::getline(inputFile, line)) {
                    std::cout << line << "\n";  // Print the line to the console
                }
                inputFile.close();
            }
        }
    }
};

int main() {
    rc obj;
    obj.intro();
    obj.calculations();
    obj.rctype();

    return 0;
}