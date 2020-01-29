#include <iostream>

using namespace std;

int ants;
int eyes;

int main(){
    bool troy = false;
    bool vlad = false;
    bool grae = false;

    cin >> ants;
    cin >> eyes;

    if(ants <= 6){
        vlad = true;
        if(ants <= 2){
            grae = true;
        }
    }
    if(ants >= 3 && eyes <= 4){
        troy = true;
    }
    if(eyes < 2){
        vlad = false;
    }
    if(eyes > 3){
        grae = false;
    }

    if(troy)
        cout << "TroyMartian" << endl;
    if(vlad)
        cout << "VladSaturnian" << endl;
    if(grae)
        cout << "GraemeMercurian" << endl;

    return 0;
}
