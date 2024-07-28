//******************************************************************************
// Mega Calculator
//******************************************************************************
#include <iostream>
#include <bits/stdc++.h> //for converting string input in temp converter into lowercase
using namespace std;
int main()
{
    char main_choice, Reuse_1; //global 
    long long n1, n2, ans; //arithmetic , data converter
    char opr, unit_1, unit_2;//arithmetic , data converter
    string temp_unit1, temp_unit2; //temp converter
    float converted_temp; //temp converter
    short temp; //temp converter
No:
    cout << "Enter your selection(1-4):\n1:Arithmetic Calculator\n2:Digital Storage Converter\n3:Temperature Converter\n4:Close Calculator\n";
    cin >> main_choice;
    // Main switch ---- Program Starts
    switch (main_choice)
    {
        // Arithmetic Calculator
    case '1':
    Yes:
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter operator (+,-,*,/,%): ";
        cin >> opr;
        cout << "Enter second number: ";
        cin >> n2;
        if (opr == '+')
        {
            ans = n1 + n2;
            cout << "Answer = " << ans << endl;
        }
        else if (opr == '-')
        {
            ans = n1 - n2;
            cout << "Answer = " << ans << endl;
        }
        else if (opr == '*')
        {
            ans = n1 * n2;
            cout << "Answer = " << ans << endl;
        }
        else if (opr == '/')
        {
            ans = n1 / n2;
            cout << "Answer = " << ans << endl;
        }

        cout << "Enter your selection:\n1:Proceed with answer\n2:Perform new Calculation\n3:Goto main Menu\n";
        cin >> Reuse_1;
        if (Reuse_1 == '2')
        {

            goto Yes;
        }
        else if (Reuse_1 == '1')
        {
        continue_with_ans:
            n1 = ans;
            cout << "Enter operator (+,-,*,/,%): ";
            cin >> opr;
            cout << "Enter second number: ";
            cin >> n2;
            if (opr == '+')
            {
                ans = n1 + n2;
                cout << "Answer = " << ans << endl;
            }
            else if (opr == '-')
            {
                cout << "Answer = " << ans << endl;
            }
            else if (opr == '*')
            {
                ans = n1 * n2;
                cout << "Answer = " << ans << endl;
            }
            else if (opr == '/')
            {
                ans = n1 / n2;
                cout << "Answer = " << ans << endl;
            }
            cout << "Enter your selection:\n1:Proceed with answer\n2:Perform new Calculation\n3:Goto main Menu\n";
            cin >> Reuse_1;
            if (Reuse_1 == '2')
            {
                goto Yes;
            }
            else if (Reuse_1 == '3')
            {
                goto No;
            }
            else if (Reuse_1 == '1')
            {
                goto continue_with_ans;
            }
        }

        else if (Reuse_1 == '3')
        {
            goto No;
        }
        ///////// Storage Convertor
    case '2':
    Ok:
        cout << "Convert data from(1-5):\n1:PetaByte(PB)\n2:TeraByte(TB)\n3:GigaByte(GB)\n4:MegaByte(MB)\n5:KiloByte(KB)\n6:Byte\n";
        cin >> unit_1;
        cout << "Convert data to(1-6):\n1:TeraByte(TB)\n2:GigaByte(GB)\n3:MegaByte(MB)\n4:KiloByte(KB)\n5:Byte\n6:Bit\n";
        cin >> unit_2;
        cout << "Enter value of data:";
        cin >> n1;
        if (unit_1 == '1' && unit_2 == '1')
        {
            n2 = n1 * 1000;
            cout << n1 << " PB = " << n2 << " TB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '2')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " GB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '3')
        {
            n2 = n1 * 1000 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " MB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '4')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 1000;
            cout << n1 << " PB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '1' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 1000 * 8;
            cout << n1 << " PB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '2')
        {
            n2 = n1 * 1000;
            cout << n1 << " TB = " << n2 << " GB" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '3')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " TB = " << n2 << " MB" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '4')
        {
            n2 = n1 * 1000 * 1000 * 1000;
            cout << n1 << " TB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000;
            cout << n1 << " TB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '2' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 1000 * 8;
            cout << n1 << " TB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '3')
        {
            n2 = n1 * 1000;
            cout << n1 << " GB = " << n2 << " MB" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '4')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " GB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000 * 1000;
            cout << n1 << " GB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '3' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 1000 * 8;
            cout << n1 << " GB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '4' && unit_2 == '4')
        {
            n2 = n1 * 1000;
            cout << n1 << " MB = " << n2 << " KB" << endl;
        }
        else if (unit_1 == '4' && unit_2 == '5')
        {
            n2 = n1 * 1000 * 1000;
            cout << n1 << " MB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '4' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 1000 * 8;
            cout << n1 << " MB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '5' && unit_2 == '5')
        {
            n2 = n1 * 1000;
            cout << n1 << " KB = " << n2 << " Bytes" << endl;
        }
        else if (unit_1 == '5' && unit_2 == '6')
        {
            n2 = n1 * 1000 * 8;
            cout << n1 << " KB = " << n2 << " Bits" << endl;
        }
        else if (unit_1 == '6' && unit_2 == '6')
        {
            n2 = n1 * 8;
            cout << n1 << " Bytes = " << n2 << " Bits" << endl;
        }
        cout << "Do you want to use it again?(y/n)";
        cin >> Reuse_1;
        if (Reuse_1 == 'y' || Reuse_1 == 'Y')
        {
            goto Ok;
        }
        else if (Reuse_1 == 'n' || Reuse_1 == 'N')
        {
            goto No;
        }
        break;
    case '3':
        cout << "Enter temperature: ";
        cin >> temp;
        cout << "Convert From(Celsius,Farenheit,Kelvin,Rankine): ";
        cin >> temp_unit1;
        transform(temp_unit1.begin(), temp_unit1.end(), temp_unit1.begin(), ::tolower);
        cout << "Convert To(Celsius,Farenheit,Kelvin,Rankine): ";
        cin >> temp_unit2;
        transform(temp_unit2.begin(), temp_unit2.end(), temp_unit2.begin(), ::tolower);
        if (temp_unit1 == "celsius" && temp_unit2 == "farenheit")
        {
            converted_temp = (temp * 1.8) + 32;
            cout << converted_temp<<"Farenheit"<<endl;
        }
        else if (temp_unit1 == "celsius" && temp_unit2 == "celsius")
        {
            converted_temp = temp;
            cout << converted_temp<<"Celsius"<<endl;
        }
        else if (temp_unit1 == "celsius" && temp_unit2 == "kelvin")
        {
            converted_temp = temp + 273.15;
            cout << converted_temp<<"Kelvin"<<endl;
        }
        else if (temp_unit1 == "celsius" && temp_unit2 == "rankine")
        {
            converted_temp = (temp*1.8) +491.67;
            cout << converted_temp<<"Rankine"<<endl;
        }
        else if (temp_unit1 == "farenheit" && temp_unit2 == "rankine")
        {
            converted_temp = temp + 459.67;
            cout << converted_temp<<"Rankine"<<endl;
        }
        else if (temp_unit1 == "farenheit" && temp_unit2 == "kelvin")
        {
            converted_temp = (temp - 32) * (.5556) + 273 ;
            cout << converted_temp<<"Kelvin"<<endl;
        }
        else if (temp_unit1 == "farenheit" && temp_unit2 == "farenheit")
        {
            converted_temp = temp ;
            cout << converted_temp<<"Farenheit"<<endl;
        }
        else if (temp_unit1 == "farenheit" && temp_unit2 == "celsius")
        {
            converted_temp = (temp - 32) / 1.8 ;
            cout << converted_temp<<"Celsius"<<endl;
        }
        else if (temp_unit1 == "kelvin" && temp_unit2 == "celsius")
        {
            converted_temp = (temp - 273.15) ;
            cout << converted_temp<<"Celsius"<<endl;
        }
        else if (temp_unit1 == "kelvin" && temp_unit2 == "farenheit")
        {
            converted_temp = (temp - 273.15)*(1.8)+32 ;
            cout << converted_temp<<"Farenheit"<<endl;
        }
        else if (temp_unit1 == "kelvin" && temp_unit2 == "kelvin")
        {
            converted_temp = temp ;
            cout << converted_temp<<"Kelvin"<<endl;
        }
        else if (temp_unit1 == "kelvin" && temp_unit2 == "rankine")
        {
            converted_temp = temp *  1.8 ;
            cout << converted_temp<<"Rankine"<<endl;
        }
        else if (temp_unit1 == "rankine" && temp_unit2 == "celsius")
        {
            converted_temp = (temp - 491.67) * (.5556) ;
            cout << converted_temp<<"Celsis"<<endl;
        }
        else if (temp_unit1 == "rankine" && temp_unit2 == "farenheit")
        {
            converted_temp = (temp - 459.67) ;
            cout << converted_temp<<"Farenheit"<<endl;
        }
        else if (temp_unit1 == "rankine" && temp_unit2 == "kelvin")
        {
            converted_temp = (temp) * (.5556) 
            cout << converted_temp<<"Kelvin"<<endl;
        }
        else if (temp_unit1 == "rankine" && temp_unit2 == "kelvin")
        {
            converted_temp = temp;
            cout << converted_temp<<"Kelvin"<<endl;
        }
        break;
    case '4':
        return 0;
        break;
    default:
        break;
    }
    return 0;
}