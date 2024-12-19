#include <iostream>
using namespace std;
int main() {
int arr[3] = {10, 20, 30}; 
// Arreglo de enteros
int* ptr = arr; 
// Puntero que apunta al primer elemento del arreglo
for (int i = 0; i < 3; ++i) {
cout << "El valor de arr[" << i << "] es: " << arr[i] << endl;
cout << "La dirección de arr[" << i << "] es: " << &arr[i] << endl;
cout << "El valor apuntado por ptr + " << i << " es: " << *(ptr + i) << endl;
}
return 0;
}