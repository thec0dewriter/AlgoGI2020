#include <iostream>
/*
Állapítsuk meg (rekurzív algoritmussal), hogy az adott n 64 bites természetes szám palindromszám-e vagy sem!
*/
///n = eredeti szám amivel dolgozni fog az algoritmus,
///original = eredeti szám amit hasonlításnak fog használni a végén
///rep = ide fogja felépíteni az új számot amit majd össze hasonlít az eredetivel
bool palindrom(long long n, long long original, long long rep=0){
    if (n > 0){
        //Levesszük a szám végéröl a számjegyet majd hozzá rakjuk az új számunkhoz
        rep += n % 10;
        rep *= 10;
        n /= 10;
        return palindrom(n, original, rep);
    } else {
        if (original == rep / 10){
            return true;
        } else {
            return false;
        }
    }
}

/*
Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám. Írjunk programot, amely elköltözteti a szám első számjegyét a szám végére,
majd kiírja az így létrejött új számot. Ezt a műveletet addig ismételjük,
amíg az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)
*/
void reverse_num(){
    int n = 0;

    std::cin >> n;

    //Másolatot tartunk az n-rol amit majd összehasnolításnak használunk
    const int n_copy = n;

    //Ide mentjük minden cicklus végén az újonnan kapott számunkat
    int original = n;
   

    while (true) {
        //A számot végig osztva megkapjuk az elso számjegyet és ezt elmentjük
        int cycles = 0;
        int last_num = 0;
        while (n > 0) {
            last_num = n % 10;
            n /= 10;
            cycles++;
        }

        //A kapott számjegyet levesszük a szám elejéröl és berakjuk a végére
        n = original;
        n -= std::pow(10, cycles - 1) * last_num;
        n *= 10;
        n += last_num;
        original = n;
        std::cout << original << " ";

        if (n_copy == original){
            break;
        }
    }
}

int main(){

    std::cout << palindrom(123212, 123212);
    reverse_num();

    return 0;
}