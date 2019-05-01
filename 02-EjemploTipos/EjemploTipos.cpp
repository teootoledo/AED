/*  Ejemplo de tipos de datos
    Toledo, Teo Martin
    1/5/2019
*/

#include <cassert>
#include <string>

using namespace std;

int main(){
    int ent1 = 1, ent2 = 2, ent3 = ent1+ent2;
    assert(ent3 == 3);
    double dou1 = 185.6, dou2 = 1.53;
    double dou3 = (dou1 * dou2);
    assert(dou3 < 3000);
    bool cond = true;
    assert(cond != false);
    char car = 'c';
    string palabra = "centena";
    assert(car = 'c');
    string texto = palabra + " decena";
    return 0;
}