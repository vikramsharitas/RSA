#include "RSA.h"

int main()
{
    srand(time(NULL));
    long long int e = 0, d;
    int a = 43;
    fstream f;
    f.open("values", ios::binary | ios::out);
    f.write((char*)&a, sizeof(a));
    a = 3;
    f.write((char*)&a, sizeof(a));
    f.close();
    RSA r1("values");
    r1.encryption_key(e, d);
    vector<long long int> en;
    string s = "HELLO";
    r1.RSAencrypt(e, s, en);
    r1.RSAdecrypt(d, en, s);
    cout << endl << s << endl;
    //cout << e << "\t" << d;
}