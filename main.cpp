#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    struct timp
    {
        int minut;
        int secunda;
    } start,stop;

    /*caz if initial*/
    start.minut = 1;
    start.secunda = 0;
    stop.minut = 60;
    stop.secunda = 0;

    /*caz else if*/
    start.minut = 0;
    start.secunda = 45;
    stop.minut = 60;
    stop.secunda = 30;

    if(stop.minut-start.minut<60){
        cout<<"respins";
    }else if(start.secunda>stop.secunda){
        cout<"respins";
    }else{
        cout<<"acceptat";
    }


}
