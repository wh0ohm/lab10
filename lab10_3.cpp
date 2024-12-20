#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float x = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        //cout << textline << '\n';
        sum += atof(textline.c_str());
        x += pow(atof(textline.c_str()),2);
        count++;
    }
    float mean = (sum/count);
    float sd = sqrt((x / count) - pow(mean, 2));

    cout << setprecision(3);
    cout << "Number of data = "<< count << '\n';
    cout << "Mean = "<< mean << '\n';
    cout << "Standard deviation = " << sd;

    return 0;
}