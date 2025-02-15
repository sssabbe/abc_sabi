// перевод числа из троичной системы счисления в десятичную и обратно

// to_string() - число в строки

#include <iostream> 
#include <string> 
#include <cmath> 


using namespace std; 


// из троичной системы в десятичную 
int tr(string num3) 
{ 
    int num10 = 0; 
    int step3 = 0; 

    for (int i = num3.length() - 1; i >= 0; --i) 
    { 
        int digit;
        if (num3[i] == '0') 
        { 
            digit = 0;
        } 
        else if (num3[i] == '1') 
        { 
            digit = 1;
        } 
        else if (num3[i] == '2') 
        { 
            digit = 2;
        } 
        else 
        { 
            cout << "Error: Invalid character in a ternary number "<< endl;
            return -1; 
        }

        num10 += digit * pow(3, step3); 
        step3++; 
    }
    return num10; 
}





// из десятичной системы в троичную 
string dc(int num_dc) 
{ 

    if (num_dc == 0) 
    { 
        return "0"; 
    }

    string ternaryNum = ""; 
    
    while (num_dc > 0) 
    { 
        int ostatok = num_dc % 3; 
        ternaryNum = to_string(ostatok) + ternaryNum; 
        num_dc /= 3; 
    }

    return ternaryNum; 
}




int main() 
{ 

    // троичная в десятичную
    string ternaryInput; 
    cout << "Enter a ternary number: (example 12) ";
    cin >> ternaryInput; 

    int dcvivod=tr(ternaryInput); 
    if (true)
    { 
        cout << "Decimal CC: (example 5) "<<  dcvivod<< endl; 
    }
    

    // десятичная в троичную
    int decimalInput; 
    
    cout << "Enter a decimal number (example 5) "; 
    cin >> decimalInput;

    string ternaryOutput = dc(decimalInput);
    cout << "The Trinity SS: (example 12) "<< ternaryOutput << endl; 



    return 0; 
}