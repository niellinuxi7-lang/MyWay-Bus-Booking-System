#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, MMU_CyberJaya,DpulzeMallX, Apple_Store, Mamak_Power, IOI_CyberJaya;
    float password, p_station, d_station, total_price, price_per_station, shift;

    password = 123456;
    total_price = 0;
    price_per_station = 1.50;

    cout << "Enter your username: ";
    getline(cin, username);
    cout << "Enter your password: ";
    cin >> password;
        if (password == 123456)
            {
                cout << "Welcome " << username << "!" << endl;
                cout << "Bus routines are as follows: " << endl;
                cout << " MMU CyberJaya -> DpulzeMallX -> Apple Store -> Mamak Power -> IOI CyberJaya -> MMU Cyberjaya" << endl;
                cout << "----------------------------------------------------------------------------------------------" << endl;
                cout << "Please select your pickup station: " << endl;
                cout << "1. MMU_CyberJaya " << "Shift available: 7:00 AM, 10:00 AM, 1:00 PM, 4:00 PM" << endl;
                cout << "2. DpulzeMallX " << "Shift available: 7:15 AM, 10:15 AM, 1:15 PM, 4:15 PM" << endl;
                cout << "3. Apple_Store " << "Shift available: 7:30 AM, 10:30 AM, 1:30 PM, 4:30 PM" << endl;
                cout << "4. Mamak_Power " << "Shift available: 7:45 AM, 10:45 AM, 1:45 PM, 4:45 PM" << endl;
                cout << "5. IOI_CyberJaya " << "Shift available: 8:00 AM, 11:00 AM, 2:00 PM, 5:00 PM" << endl;
                cin >> p_station;
                if (p_station == 1)
                {
                    cout << "Please select your shift: " << endl;
                    cout << "1. 7:00 AM" << endl;
                    cout << "2. 10:00 AM" << endl;
                    cout << "3. 1:00 PM" << endl;
                    cout << "4. 4:00 PM" << endl;
                    cin >> shift;
                    cout << "Please select your destination station: " << endl;
                    cout << "1. DpulzeMallX" << endl;
                    cout << "2. Apple_Store" << endl;
                    cout << "3. Mamak_Power" << endl;
                    cout << "4. IOI_CyberJaya" << endl;
                    cin >> d_station;
                    if (d_station == 1)
                    {
                        total_price = price_per_station * 1;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 2)
                    {
                        total_price = price_per_station * 2;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 3)
                    {
                        total_price = price_per_station * 3;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 4)
                    {
                        total_price = price_per_station * 4;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }

                }
                if (p_station == 2)
                {
                    cout << "Please select your shift: " << endl;
                    cout << "1. 7:15 AM" << endl;
                    cout << "2. 10:15 AM" << endl;
                    cout << "3. 1:15 PM" << endl;
                    cout << "4. 4:15 PM" << endl;
                    cin >> shift;
                    cout << "Please select your destination station: " << endl;
                    cout << "1. Apple_Store" << endl;
                    cout << "2. Mamak_Power" << endl;
                    cout << "3. IOI_CyberJaya" << endl;
                    cout << "4. MMU_CyberJaya" << endl;
                    cin >> d_station;
                    if (d_station == 1)
                    {
                        total_price = price_per_station * 1;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 2)
                    {
                        total_price = price_per_station * 2;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 3)
                    {
                        total_price = price_per_station * 3;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 4)
                    {
                        total_price = price_per_station * 4;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                }
                if (p_station == 3)
                {
                    cout << "Please select your shift: " << endl;
                    cout << "1. 7:30 AM" << endl;
                    cout << "2. 10:30 AM" << endl;
                    cout << "3. 1:30 PM" << endl;
                    cout << "4. 4:30 PM" << endl;
                    cin >> shift;
                    cout << "Please select your destination station: " << endl;
                    cout << "1. Mamak_Power" << endl;
                    cout << "2. IOI_CyberJaya" << endl;
                    cout << "3. MMU_CyberJaya" << endl;
                    cout << "4. DpulzeMallX" << endl;
                    cin >> d_station;
                    if (d_station == 1)
                    {
                        total_price = price_per_station * 1;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 2)
                    {
                        total_price = price_per_station * 2;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 3)
                    {
                        total_price = price_per_station * 3;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 4)
                    {
                        total_price = price_per_station * 4;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                }
                if (p_station == 4)
                {
                    cout << "Please select your shift: " << endl;
                    cout << "1. 7:45 AM" << endl;
                    cout << "2. 10:45 AM" << endl;
                    cout << "3. 1:45 PM" << endl;
                    cout << "4. 4:45 PM" << endl;
                    cin >> shift;
                    cout << "Please select your destination station: " << endl;
                    cout << "1. IOI_CyberJaya" << endl;
                    cout << "2. MMU_CyberJaya" << endl;
                    cout << "3. DpulzeMallX" << endl;
                    cout << "4. Apple_Store" << endl;
                    cin >> d_station;
                    if (d_station == 1)
                    {
                        total_price = price_per_station * 1;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 2)
                    {
                        total_price = price_per_station * 2;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 3)
                    {
                        total_price = price_per_station * 3;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 4)
                    {
                        total_price = price_per_station * 4;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                }
                if (p_station == 5)
                {
                    cout << "Please select your shift: " << endl;
                    cout << "1. 8:00 AM" << endl;
                    cout << "2. 11:00 AM" << endl;
                    cout << "3. 2:00 PM" << endl;
                    cout << "4. 5:00 PM" << endl;
                    cin >> shift;
                    cout << "Please select your destination station: " << endl;
                    cout << "1. MMU_CyberJaya" << endl;
                    cout << "2. DpulzeMallX" << endl;
                    cout << "3. Apple_Store" << endl;
                    cout << "4. Mamak_Power" << endl;
                    cin >> d_station;
                    if (d_station == 1)
                    {
                        total_price = price_per_station * 1;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 2)
                    {
                        total_price = price_per_station * 2;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 3)
                    {
                        total_price = price_per_station * 3;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                    if (d_station == 4)
                    {
                        total_price = price_per_station * 4;
                        cout << "The total price is RM" << total_price << endl;
                        return 0;
                    }
                }
                else
                {
                    cout << "Invalid station. Please try again." << endl;
                    return 0;
                }

            }
        else
        {
            cout << "Invalid password. Please try again." << endl;
            return 0;
        }

}
