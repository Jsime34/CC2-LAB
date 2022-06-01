#include <iostream>
#include <string.h>

using namespace std;

void concatenar(string *Start, string*End){
    *Start = *Start + " " + *End;
    cout << *Start;    
}

int main(){
    string *Start, *End;
    Start = new string;
    End = new string;
    cout << "Escribe la primera palabra: " << endl; getline(cin, *Start);
    cout << "Escribe la segunda palabra: " << endl; getline(cin, *End);

    concatenar(Start, End);
    return 0;
}
