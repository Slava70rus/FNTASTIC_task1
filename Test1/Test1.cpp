// Test1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int serch(string str, char temp)
{
    int count = 0 , len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (temp == str[i]) count++;

    }

    return count;

}


int main()
{
    string str;

    vector<int> counts;

    getline(cin , str);
    
    int len = str.length();

    // приводим к нижнему регистру
    transform(str.begin(), str.end(), str.begin(), tolower); 

    // запоминаем дублирующиеся индексы
    for (int i = 0; i < len; i++)
    {
        counts.push_back( serch(str, str[i]) ); 
    }
    

    // производим замену
    for (int i = 0; i < len; i++)
    {
        str[i] = counts[i] > 1 ? ')' : '(';
    }

    cout <<str;
}

