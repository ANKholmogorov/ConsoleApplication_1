#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <functional>
#include <string>

using namespace std;


char* settime(struct tm *u) 
{
    char s[40];
    char *tmp; 
    for (int i = 0; i < 1; i++) s[i] = 0;
    int length = strftime(s, 40, "%d.%m.%Y %H:%M:%S, %A", u);
    tmp = (char*)malloc(sizeof(s)); 
    strcpy(tmp, s);   
    }
int main()
{
    struct tm* u;
    char* f;
    system("chcp 1251");
    system("cls");
    const time_t timer = time(NULL);
    u = localtime(&timer);
    f = settime(u);
    puts(f);
    getchar();

    std::int16_t s = 1 + 2 + 3 + 4 + 5 + 6;
    std::hash<std::int16_t> hash_fn;
    size_t hash = hash_fn(s);
    std::cout << hash << '\n';
   
    return 0;
    }