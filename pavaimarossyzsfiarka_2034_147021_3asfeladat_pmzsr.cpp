//3.Adva van egy legtöbb 10 számjegyet tartalmazó
//természetes szám. Írjunk programot, amely
//elköltözteti a szám első számjegyét a szám végére,
//majd kiírja az így létrejött új számot.
//Ezt a műveletet addig ismételjük,
//amíg az eredeti számot vissza nem kapjuk!
//(Ne használjunk tömböt vagy karakterláncot!)
//Pavai-Marossy Zsofia-Reka, GI2

#include <iostream>

using namespace std;

int main()
{
    //beolvassuk a szamot, megszamoljuk, hogy hany szamjegye van, ha ez tobb 10-nel kidob a program
    //egy segedvaltozo segitsegevel levalasztjuk az elso szamjegyet, majd odaragasztjuk a szam vegere ---- while ciklussal?

    int n;
    int szamlalo=0;

    cin>>n;

    int masolat=n;

    while(masolat!=0)
    {
        masolat=masolat/10;
        szamlalo++;
    }
    if(szamlalo>10)
    {
        cout<<"Adjon meg egy 10 szamjegyunel kisebb szamot!"<<endl;
        return 0;
    }

    int seged=n; // ujbol eltaroljuk az n erteket
    int forditott=0;

    while(seged!=0)                                       //megforditjuk a szamot
        {
            forditott=forditott*10+seged%10;
            seged=seged/10;
        }
    //cout<<forditott<<endl;

    int ujszam=0; // a forditott szam utolso szamjegyei
    int vegso=0;    // osszeg
    int levagott=n; // nbol vagdosgatunk le
    int tizszerezes=0;
    while(ujszam!=n)
    {
            ujszam=ujszam*10+forditott%10;
            forditott=forditott/10;
            levagott=levagott/10;
            cout<<"levagott: "<<levagott<<endl;
            szamlalo=szamlalo-1;
            cout<<"szamlalo: "<<szamlalo<<endl;
                while(szamlalo!=0)
                {
                    tizszerezes=tizszerezes*10;             //annyiszor szorozzuk meg tizszer, ahany szam maradt
                }
            vegso=levagott * tizszerezes + ujszam;
            cout<<vegso<<endl;
    }


    return 0;
}
