<<<<<<< HEAD
#include<iostream>
#include<string> 
using namespace std;
int main()

{

    //declaring constant conversion values of currency per dollar
    const float ColombianPeso = 2000;
    const float MexicanPeso = 13.25;
    const float ArgentinePeso = 8.4;
    const float VenesuelanBolivar = 6.28;
    const float ChileanPeso = 593.719;

    //designing statement to allow user to input curency type

    char currency[] = "show me the money (USDollar, MexicanPeso, ArgentinePeso, ColombianPeso, VenesuelanBolivar, or ChileanPeso):\n";
    char answer1[17];
    char USDollar
    
    cout << currency;
    cin >> answer1;

    //designing statement to imput amount
    float amount = 0;   
    cout << "enter amount:\n";
    cin >> amount;l

    //creating if/else statement to convert for diffent money values

    if (answer1 == USDollar)
    cout << "number of Colombian Pesos:\n" << amount * ColombianPeso;
    cout << "number of Venesuelan Bolivars:\n" << amount * VenesuelanBolivar;
    cout << "number of Mexican Pesos:\n" << amount * MexicanPeso;
    cout << "number of Argentine Pesos:\n" << amount * ArgentinePeso;
    cout << "number of Chilean Pesos:\n" << amount * ChileanPeso;
    else if (answer1 == MexicanPeso)
    cout << "number of US Dollars:\n" << amount / MexicanPeso;
    else if (answer1 == ColombianPeso)
    cout << "number of US Dollars:\n" << amount / ColombianPeso;
    else if (answer1 == ArgentinePeso)
    cout << "number of US Dollars:\n" << amount / ArgentinePeso;
    else if (answer1 == ChileanPeso)
    cout << "number of US Dollars:\n" << amount / ChileanPeso;  
    else if (answer1 == VenesuelanBolivar)
    cout << "number of US Dollars:\n" << amount / VenesuelanBolivar;
    else
    cout << "try again with VenesuelanBolivar, USDollar, ChileanPeso, ArgentinePeso, ColombianPeso, or MexicanPeso:\n";
    return 0;

}
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<string> 
using namespace std;
int main()

{

    //declaring constant conversion values of currency per dollar
    const float ColombianPeso = 2000;
    const float MexicanPeso = 13.25;
    const float ArgentinePeso = 8.4;
    const float VenesuelanBolivar = 6.28;
    const float ChileanPeso = 593.719;

    //designing statement to allow user to input curency type

    char currency[] = "show me the money (USDollar, MexicanPeso, ArgentinePeso, ColombianPeso, VenesuelanBolivar, or ChileanPeso):\n";
    char answer1[17];
    char USDollar
    
    cout << currency;
    cin >> answer1;

    //designing statement to imput amount
    float amount = 0;   
    cout << "enter amount:\n";
    cin >> amount;

    //creating if/else statement to convert for diffent money values

    if (answer1 == USDollar)
    cout << "number of Colombian Pesos:\n" << amount * ColombianPeso;
    cout << "number of Venesuelan Bolivars:\n" << amount * VenesuelanBolivar;
    cout << "number of Mexican Pesos:\n" << amount * MexicanPeso;
    cout << "number of Argentine Pesos:\n" << amount * ArgentinePeso;
    cout << "number of Chilean Pesos:\n" << amount * ChileanPeso;
    else if (answer1 == MexicanPeso)
    cout << "number of US Dollars:\n" << amount / MexicanPeso;
    else if (answer1 == ColombianPeso)
    cout << "number of US Dollars:\n" << amount / ColombianPeso;
    else if (answer1 == ArgentinePeso)
    cout << "number of US Dollars:\n" << amount / ArgentinePeso;
    else if (answer1 == ChileanPeso)
    cout << "number of US Dollars:\n" << amount / ChileanPeso;  
    else if (answer1 == VenesuelanBolivar)
    cout << "number of US Dollars:\n" << amount / VenesuelanBolivar;
    else
    cout << "try again with VenesuelanBolivar, USDollar, ChileanPeso, ArgentinePeso, ColombianPeso, or MexicanPeso:\n";
    return 0;

}
=======
#include<iostream>
#include<string> 
using namespace std;
int main()

{

    //declaring constant conversion values of currency per dollar
    const float ColombianPeso = 2000;
    const float MexicanPeso = 13.25;
    const float ArgentinePeso = 8.4;
    const float VenesuelanBolivar = 6.28;
    const float ChileanPeso = 593.719;

    //designing statement to allow user to input curency type

    char currency[] = "show me the money (USDollar, MexicanPeso, ArgentinePeso, ColombianPeso, VenesuelanBolivar, or ChileanPeso):\n";
    char answer1[17];
    char USDollar
    
    cout << currency;
    cin >> answer1;

    //designing statement to imput amount
    float amount = 0;   
    cout << "enter amount:\n";
    cin >> amount;

    //creating if/else statement to convert for diffent money values

    if (answer1 == USDollar)
    cout << "number of Colombian Pesos:\n" << amount * ColombianPeso;
    cout << "number of Venesuelan Bolivars:\n" << amount * VenesuelanBolivar;
    cout << "number of Mexican Pesos:\n" << amount * MexicanPeso;
    cout << "number of Argentine Pesos:\n" << amount * ArgentinePeso;
    cout << "number of Chilean Pesos:\n" << amount * ChileanPeso;
    else if (answer1 == MexicanPeso)
    cout << "number of US Dollars:\n" << amount / MexicanPeso;
    else if (answer1 == ColombianPeso)
    cout << "number of US Dollars:\n" << amount / ColombianPeso;
    else if (answer1 == ArgentinePeso)
    cout << "number of US Dollars:\n" << amount / ArgentinePeso;
    else if (answer1 == ChileanPeso)
    cout << "number of US Dollars:\n" << amount / ChileanPeso;  
    else if (answer1 == VenesuelanBolivar)
    cout << "number of US Dollars:\n" << amount / VenesuelanBolivar;
    else
    cout << "try again with VenesuelanBolivar, USDollar, ChileanPeso, ArgentinePeso, ColombianPeso, or MexicanPeso:\n";
    return 0;

}
>>>>>>> f0f3f437c04926d0d2ac4925751d325b794ea580
=======
#include<iostream>
#include<string> 
using namespace std;
int main()

{

    //declaring constant conversion values of currency per dollar
    const float ColombianPeso = 2000;
    const float MexicanPeso = 13.25;
    const float ArgentinePeso = 8.4;
    const float VenesuelanBolivar = 6.28;
    const float ChileanPeso = 593.719;

    //designing statement to allow user to input curency type

    char currency[] = "show me the money (USDollar, MexicanPeso, ArgentinePeso, ColombianPeso, VenesuelanBolivar, or ChileanPeso):\n";
    char answer1[17];
    char USDollar
    
    cout << currency;
    cin >> answer1;

    //designing statement to imput amount
    float amount = 0;   
    cout << "enter amount:\n";
    cin >> amount;

    //creating if/else statement to convert for diffent money values

    if (answer1 == USDollar)
    cout << "number of Colombian Pesos:\n" << amount * ColombianPeso;
    cout << "number of Venesuelan Bolivars:\n" << amount * VenesuelanBolivar;
    cout << "number of Mexican Pesos:\n" << amount * MexicanPeso;
    cout << "number of Argentine Pesos:\n" << amount * ArgentinePeso;
    cout << "number of Chilean Pesos:\n" << amount * ChileanPeso;
    else if (answer1 == MexicanPeso)
    cout << "number of US Dollars:\n" << amount / MexicanPeso;
    else if (answer1 == ColombianPeso)
    cout << "number of US Dollars:\n" << amount / ColombianPeso;
    else if (answer1 == ArgentinePeso)
    cout << "number of US Dollars:\n" << amount / ArgentinePeso;
    else if (answer1 == ChileanPeso)
    cout << "number of US Dollars:\n" << amount / ChileanPeso;  
    else if (answer1 == VenesuelanBolivar)
    cout << "number of US Dollars:\n" << amount / VenesuelanBolivar;
    else
    cout << "try again with VenesuelanBolivar, USDollar, ChileanPeso, ArgentinePeso, ColombianPeso, or MexicanPeso:\n";
    return 0;

}
>>>>>>> f0f3f437c04926d0d2ac4925751d325b794ea580
=======
#include<iostream>
#include<string> 
using namespace std;
int main()

{

    //declaring constant conversion values of currency per dollar
    const float ColombianPeso = 2000;
    const float MexicanPeso = 13.25;
    const float ArgentinePeso = 8.4;
    const float VenesuelanBolivar = 6.28;
    const float ChileanPeso = 593.719;

    //designing statement to allow user to input curency type

    char currency[] = "show me the money (USDollar, MexicanPeso, ArgentinePeso, ColombianPeso, VenesuelanBolivar, or ChileanPeso):\n";
    char answer1[17];
    char USDollar
    
    cout << currency;
    cin >> answer1;

    //designing statement to imput amount
    float amount = 0;   
    cout << "enter amount:\n";
    cin >> amount;

    //creating if/else statement to convert for diffent money values

    if (answer1 == USDollar)
    cout << "number of Colombian Pesos:\n" << amount * ColombianPeso;
    cout << "number of Venesuelan Bolivars:\n" << amount * VenesuelanBolivar;
    cout << "number of Mexican Pesos:\n" << amount * MexicanPeso;
    cout << "number of Argentine Pesos:\n" << amount * ArgentinePeso;
    cout << "number of Chilean Pesos:\n" << amount * ChileanPeso;
    else if (answer1 == MexicanPeso)
    cout << "number of US Dollars:\n" << amount / MexicanPeso;
    else if (answer1 == ColombianPeso)
    cout << "number of US Dollars:\n" << amount / ColombianPeso;
    else if (answer1 == ArgentinePeso)
    cout << "number of US Dollars:\n" << amount / ArgentinePeso;
    else if (answer1 == ChileanPeso)
    cout << "number of US Dollars:\n" << amount / ChileanPeso;  
    else if (answer1 == VenesuelanBolivar)
    cout << "number of US Dollars:\n" << amount / VenesuelanBolivar;
    else
    cout << "try again with VenesuelanBolivar, USDollar, ChileanPeso, ArgentinePeso, ColombianPeso, or MexicanPeso:\n";
    return 0;

}
>>>>>>> f0f3f437c04926d0d2ac4925751d325b794ea580
=======
#include<iostream>
#include<string> 
using namespace std;
int main()

{

    //declaring constant conversion values of currency per dollar
    const float ColombianPeso = 2000;
    const float MexicanPeso = 13.25;
    const float ArgentinePeso = 8.4;
    const float VenesuelanBolivar = 6.28;
    const float ChileanPeso = 593.719;

    //designing statement to allow user to input curency type

    char currency[] = "show me the money (USDollar, MexicanPeso, ArgentinePeso, ColombianPeso, VenesuelanBolivar, or ChileanPeso):\n";
    char answer1[17];
    char USDollar
    
    cout << currency;
    cin >> answer1;

    //designing statement to imput amount
    float amount = 0;   
    cout << "enter amount:\n";
    cin >> amount;

    //creating if/else statement to convert for diffent money values

    if (answer1 == USDollar)
    cout << "number of Colombian Pesos:\n" << amount * ColombianPeso;
    cout << "number of Venesuelan Bolivars:\n" << amount * VenesuelanBolivar;
    cout << "number of Mexican Pesos:\n" << amount * MexicanPeso;
    cout << "number of Argentine Pesos:\n" << amount * ArgentinePeso;
    cout << "number of Chilean Pesos:\n" << amount * ChileanPeso;
    else if (answer1 == MexicanPeso)
    cout << "number of US Dollars:\n" << amount / MexicanPeso;
    else if (answer1 == ColombianPeso)
    cout << "number of US Dollars:\n" << amount / ColombianPeso;
    else if (answer1 == ArgentinePeso)
    cout << "number of US Dollars:\n" << amount / ArgentinePeso;
    else if (answer1 == ChileanPeso)
    cout << "number of US Dollars:\n" << amount / ChileanPeso;  
    else if (answer1 == VenesuelanBolivar)
    cout << "number of US Dollars:\n" << amount / VenesuelanBolivar;
    else
    cout << "try again with VenesuelanBolivar, USDollar, ChileanPeso, ArgentinePeso, ColombianPeso, or MexicanPeso:\n";
    return 0;

}
>>>>>>> f0f3f437c04926d0d2ac4925751d325b794ea580
>>>>>>> origin/master
