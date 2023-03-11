#include <iostream>
#include <string>
//#include <cctype>

using namespace std;

// --------Функция проверки на корректность ввода---
bool check_symbol(const string &str) {
  int count = 0;
  for (int i = 0; (i < str.length()); i++) {
    string dictionary = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz";
    // if (!isalpha(str[i]))
    for (int q = 0; (q < dictionary.length()); q++) {
      if (str[i] == dictionary[q])
        count++;
    }
  }
  if (count == str.length()) {
    return true;
  }
  cout << "Incorrect surname!" << endl;
  return false;
}
//----------Функция ввода фамилий + проверка на корректность ввода
void in_surname(string str[], int size) {
  string tenant;
  int count = 0;
  do {
    cout << "Input surname " << count + 1 << ":" << endl;
    cin >> str[count];
    tenant = str[count];
    if (!check_symbol(tenant))
      continue;
    else count++;
  } while (count < size);
}
// -------- Функция вывода по номеру
void output_by_number(string str[]) {
  string s;
  int n;
  while (s != "n") {
    cout << " Input number: ";
    cin >> n;
    cout << str[n - 1] << endl;
    cout << "Continue work? y/n  - ";
    cin >> s;
  }
}
int main() {
  const int a = 5;
  string tenants[a];
  in_surname(tenants, a);//Ввод и проверка данных
  output_by_number(tenants); // Вывод по номеру
}

