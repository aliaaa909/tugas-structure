#include <iostream>
using namespace std;


// struct of zodiac including day, month and year
struct Date {
    int day;
    int month;
    int year;
};


//function to find out whats ur zodiac is
string zodiac (Date bD ){

    if (bD.month == 12 && bD.day >= 22 || bD.month == 1 && bD.day <= 19)
    return "  capricorn ! ";
        else if (bD.month == 1 && bD.day >= 20 || bD.month == 2 && bD.day <= 18)
            return  "oh! so u are an : aquarius !";
        else if (bD.month == 2 && bD.day >= 19 || bD.month == 3 && bD.day <= 20)
            return  "oh! so u are a : pisces ! ";
        else if (bD.month == 3 && bD.day >= 21 || bD.month == 4 && bD.day <= 19)
            return  "oh! so u are an : aries ! ";
        else if (bD.month == 4 && bD.day >= 20 || bD.month == 5 && bD.day <= 20)
            return  "oh! so u are a : taurus ! ";
        else if (bD.month == 5 && bD.day >= 21 || bD.month == 6 && bD.day <= 20)
            return  "oh! so u are a : gemini ! ";
        else if (bD.month == 6 && bD.day >= 21 || bD.month == 7 && bD.day <= 22)
            return  "oh! so u are a : cancer ! ";
        else if (bD.month == 7 && bD.day >= 23 || bD.month == 8 && bD.day <= 22)
            return  "oh! so u are a : leo ! ";
        else if (bD.month == 8 && bD.day >= 23 || bD.month == 9 && bD.day <= 22)
            return  "oh! so u are a : virgo ! ";
        else if (bD.month == 9 && bD.day >= 23 || bD.month == 10 && bD.day <= 22)
            return  "oh! so u are a : libra ! ";
        else if (bD.month == 10 && bD.day >= 23 || bD.month == 11 && bD.day <= 21)
            return  "oh! so u are a : scorpio ! ";
        else if (bD.month == 11 && bD.day >= 22 || bD.month == 12 && bD.day <= 21)
            return  "oh! so u are a : sagittarius ! ";
        else {
            return "what? that's not a valid date ... " ; }
}


int main (){
    Date birthDate;
    string ulang;

    cout << "                 " << endl;
    cout << "--- Hi there! ---" << endl;
    cout << " Let's check whats ur zodiac is! " << endl;
    cout << "                 " << endl;
    cout << " please input ur birthdate! " << endl;

do { //loopinggg buat yes or no di bawah

    cout << " day   : " ;
    cin >> birthDate.day ;
    cout << " month : " ;
    cin >> birthDate.month;
    cout << "                            " << endl;

//calling forrr zodiac determining functionn
    string urZodiac = zodiac (birthDate);

    cout << urZodiac << endl;
    cout << " " << endl;
    cout << "-------------------------------" << endl;
    cout << " " << endl;
    cout << " do u want to do another zodiac checking?";
    cout << " y/n?" << endl;
    cin >> ulang;

}

        while (ulang == "y" );

}



