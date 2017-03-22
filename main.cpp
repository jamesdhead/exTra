#include <iostream>  //to use cout and cin and endl// allows using cout without std::cout
#include <string> // to use string data type
#include <cstring> //to use strlen, strcmp, strcpy
#include <cmath>   //for pow function,sqrt,abs
#include <iomanip>  // for set precision, setw,
#include <fstream> //for file input
#include <cassert> // to use assert  to disable place before #define NDEBUG
#include <cstdlib>//for random numbers, exit function
#include <ctime>//time function used for rand seed
#include <cctype>  // for toupper, tolower
#include <algorithm>
#include <locale.h>
#include <stdio.h>
using namespace std;



/*
 *
 */
void print(string figure, int radius, int side, double area, double volume);

void calccube (int radius);
const double PI = 3.14159265359;
const char *path="/var/www/html/class/extra.html";
ofstream outfile(path);


int main(int argc, char** argv) {

    ofstream outfile(path);   //original language "outfile.open("extra.html");"
    if(!outfile)              //did not allow for absolute path
    {
        cout << "Can not open file"<< endl;
        return 1;
    }
    int r = 1;
    outfile << "<!DOCTYPE html> <html> <head>\r\n";
    outfile << "<style>\r\n";
    outfile << "table\r\n";
    outfile << "{\r\n";
    outfile << "border:solid 4px green;\r\n";
    outfile << "border-style:groove;\r\n";
    outfile << "border-spacing:10px;\r\n";
    outfile << " background-color:lightblue;\r\n";
    outfile << " border-collapse:collapse;\r\n";
    outfile << "}\r\n";


    outfile << "td\r\n";
    outfile << "{\r\n";
    outfile << "border:solid 5px blue; border-style:ridge;padding:20px;width:50px;\r\n";
    outfile << "height:30px;text-align:right;\r\n";
    outfile << "}\r\n";
    outfile << "</style>\r\n";
    outfile << "</head><body style='background-color:silver;'>\r\n";
    outfile << "<table>";

    void calccylinder (int radius);
    for(r=1;r<=10;r++)
    {
        if (r==5)
        {
            continue;

        }
        calccube (r);
        //calcsphere (r);
        calccylinder(r);
        //calccone (r));
    }
    outfile<<"</table> </body> </html>";

    outfile.close();
    return 0;
}
void calccylinder (int radius) {


    {
        string figure = "Cylinder";
        {
            double area = 0, volume = 0;
            int height = radius * 2;
            area = (2 * PI * radius * height) + (2 * PI * pow(radius, 2.0));
            volume = PI * (radius, 2.0) * height;
            print(figure, radius, height, area, volume);
        }

    }
}
void calccube (int radius)
{

    string figure="Cube";
    {
        double area = 0, volume = 0;
        int height = radius * 2;
        area = 6 * pow(height, 2) ;
        volume = pow(height, 3);
        print(figure, radius, height, area, volume);
    }

}
void calcsphere (int radius) {


    {
        string figure = "Cylinder";
        {
            double area = 0, volume = 0;
            int height = radius * 2;
            area = (2 * PI * radius * height) + (2 * PI * pow(radius, 2.0));
            volume = PI * (radius, 2.0) * height;
            print(figure, radius, height, area, volume);
        }

    }
}
void calccone (int radius) {


    {
        string figure = "Cylinder";
        {
            double area = 0, volume = 0;
            int height = radius * 2;
            area = (2 * PI * radius * height) + (2 * PI * pow(radius, 2.0));
            volume = PI * (radius, 2.0) * height;
            print(figure, radius, height, area, volume);
        }

    }
}
void print(string figure, int radius, int side, double area, double volume) {
    printf("%4s   %4d   %4d   %10.2f    %10.2f\n", figure.c_str(), radius, side, area, volume);
    outfile << fixed << setprecision(0);
    outfile << "<tr> <td>" << figure << "</td>" << "<td>" << radius << "</td> <td>" << setprecision(2) << side
            << "</td>  <td>" << area << "/td><td>" << volume << "</td><tr> \r\n";

}

