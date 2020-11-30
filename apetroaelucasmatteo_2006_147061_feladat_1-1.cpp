#include <iostream>

using namespace std;

void Maximumkivalasztas(int n, unsigned long int* tomb);
void csere(unsigned long int* a, unsigned long int* b);

int main()
{
    int n;
    cout <<"n=";
    cin >> n;
    unsigned long int* tomb = new unsigned long int[n];
    for (int i=0; i<n; i++)
    {
        cin >> tomb[i];
    }

    Maximumkivalasztas(n, tomb);

    cout << endl;

    for (int i=0; i<n; i++)
    {
        cout << tomb[i] << endl;
    }

    delete [] tomb;
    return 0;
}

void Maximumkivalasztas(int n, unsigned long int* tomb)
{

    for (int i=0; i<n-1; i++)
    {
        int index_max = i;

        for (int j=i+1; j<n; j++)
        {
            if (tomb[index_max]>tomb[j])
            {
                index_max = j;

            }
        }
        csere(&tomb[i], &tomb[index_max]);
    }

}


void csere(unsigned long int* a, unsigned long int*b)
{
    int seged = *a;
    *a=*b;
    *b=seged;

}
