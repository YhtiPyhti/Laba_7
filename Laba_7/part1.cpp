#include "part1.h"
void  part1(){
    //если 2 символ равен 'a' то выводим первый найденный
    vector<string> v = { "a","ba","c","aa","bb","cc" };
    auto b = find_if(v.begin(), v.end(), [](const string& s) {
        return (s[1] == 'a'); });
    cout << "exp_1: " << *b << endl;

    //сортируем по возрастанию
    cout << endl;
    vector<int> v1;
    mt19937 gen(time(0));
    uniform_int_distribution<int> uid1(0, 100);
    for (size_t i = 0; i < 10; i++) {
        v1.push_back(uid1(gen));
    }
    cout << "exp_2: " << v1 << endl;
    sort(v1.begin(), v1.end(), [](int x, int y) {
        return (x < y);
        });
    cout << "exp_2: " << v1 << endl;


    /*Если встречается 'w' хотя бы один раз на 2 месте то выводим 1(true)*/
    cout << endl;
    vector<vector<char>> v3 = { {'a','b','c','d'}, {'a','b','z'}, {'y','w','x'}, {'s','t','v','q','r'} };
    cout << "exp_3: " << any_of(v3.begin(), v3.end(), [](vector<char> x) {
        return (x[1] == 'w');
        }) << endl;
}