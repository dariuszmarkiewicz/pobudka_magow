#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long tablica_1[n];
    long long tablica_2[n];

    for(int i=0; i<n; i++)
            cin >> tablica_1[i];

    int z=0;

    for(int i=0; i<n; i++)
        if(tablica_1[i]>12*3600000)
        {
            tablica_2[z]=tablica_1[i];
            z++;
        }

    for(int i=0; i<n; i++)
        if(tablica_1[i]<=12*3600000)
        {
            tablica_2[z]=tablica_1[i];
            z++;
        }

    int mediana=n/2;

    int k = n-1;
    int wynik=0;

           for(int i=0; i<mediana; i++)
           {
               if((tablica_2[mediana])> tablica_2[i])
               {
                   wynik += (tablica_2[mediana]-tablica_2[i]);

                   if(tablica_2[mediana]>tablica_2[k]+12*3600000)
                        wynik+=(tablica_2[k]-tablica_2[mediana])+24*3600000;
                   else
                        wynik+=tablica_2[k]-tablica_2[mediana];
               }


               else
                    wynik += ((tablica_2[mediana]-tablica_2[i])+24*3600000) + (tablica_2[k]-tablica_2[mediana]);

               k--;

           }

    cout << wynik << endl;

    return 0;
}
