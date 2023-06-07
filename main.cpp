#include <iostream>
using namespace std;
int Fib(int i)

{
int f1 = 0;
int f2 = 1;
int fn;
if (i < 1) { return 0; }
if (i == 1){ cout << "0 1\n"; }
if (i > 1)
{

cout << "0 1 ";
for (int j = 1; j < i;j++)

{
fn = f1 + f2;
cout << fn << " ";
f1 = f2;
f2 = fn;

}

}
cout << "\n\n";

return 0;

};
int main()
{

char choice;
int input;
cout << "Enter how long you wish the Fibanacci series to display: ";
cin >> input;
Fib(input);
cout << "Again? Y/N: ";
cin >> choice;
while (choice == 'y' || choice == 'Y')

{
cout << "\nEnter how long you wish the Fibanacci series to display: ";
cin >> input;
Fib(input);
cout << "Again? Y/N: ";
cin >> choice;

}

system("Pause");
return 0;

}