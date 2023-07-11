#include <iostream>
#include "string"

int find(char a, char mass[]) {
    for (int i = 0; i < 27; i++) {
        if (a == mass[i]) {
            return i;
        }
    }

    return 0;
}


std::string translate(std::string str) { //ghbdtn
    std::string out_string;
    int a = 0;
    char mass[27] = { 'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    char mass1[27] = { 'й','ц','у','к','е','н','г','ш', 'щ', 'з', 'ф', 'ы', 'в', 'а', 'п', 'р', 'о', 'л', 'д', 'я', 'ч', 'с', 'м', 'и', 'т', 'ь', };

    for (int i = 0; i < str.length(); i++) {
        a = find(str[i], mass);
        out_string += mass1[a];
    }
   
    return out_string;
}

//ghbdtn
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string a;
    std::cin >> a;
    std::cout << translate(a);
   

    return 0;
}

