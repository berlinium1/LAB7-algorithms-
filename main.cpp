
//
//  main.cpp
//  LAB3
//
//  Created by Берлинский Ярослав Владленович on 11.11.2020.


#include <iostream>
using namespace std;

int n=0;
const int a=10;
char array3[10];

void array3_formation(char[], char[]);
char maximum(char[]);
char minimum(char[]);

int main()
{
    char array1[a];
    char array2[a];
    for (int i=0; i<a; i++){
        array1[i]=2*i+23;
        printf("Елемент[%d] 1-го массиву: '%c' - код ASCII: %d\n", i, array1[i], int(array1[i]));
    }
    cout<<endl;
    for (int i=0; i<a; i++){
        array2[i]=49-2*i;
        printf("Елемент[%d] 2-го массиву: '%c' - код ASCII: %d\n", i, array2[i], int(array2[i]));
    }
    cout<<endl;
    
    array3_formation(array1, array2);
    cout<<endl<<endl;
    for (int i=0; i<n; i++){
        printf("Елемент[%d] 3-го массиву: '%c' - код ASCII: %d\n", i, array3[i], int(array3[i]));
    }
    cout<<endl;
    cout<<"Код максимального: "<<int(maximum(array3))<<endl;
    cout<<"Код мінімального: "<<int(minimum(array3))<<endl;
    int result = maximum(array3)-minimum(array3);
    printf("Різниця макс. і мін. елементів: %d(символ - %c)\n", result, result);
    return 0;
}

void array3_formation(char* numbers1, char* numbers2)
{
    for (int i=0; i<a; i++){
        for (int j=0; j<a;j++){
        if (int(numbers1[j])==int(numbers2[i])){
            array3[n]=numbers1[j];
            cout<<n<<" - "<<int(array3[n])<<endl;
            n++;
        }
        }
    }
}
char maximum(char* symbs){
   char max=symbs[0];
   for (int i=0; i<n; i++){
       if (symbs[i]>max){
           max=symbs[i];
       }
   }
    return max;
}

char minimum(char* array){
   char min=array[0];
   for (int i=0; i<n; i++){
       if (array[i]<min){
           min=array[i];
       }
   }
    return min;
}
