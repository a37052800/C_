#include <iostream>
using namespace std;
int main()
{
    cout << "叫块计a:";
    int a;
    cin >> a;

    cout << "叫块计b:";
    int b;
    cin >> b;

    cout << "稱璶暗ぐ或笲衡? 1. 2.搭 3. 4.埃 5.ゑ" << endl;
    int c;
    cin >> c;
    if (c == 1)
    {
        cout << "计a+计b单:" << a + b << endl;
    }
    else if (c == 2)
    {
        cout << "计a-计b单:" << a - b << endl;
    }
    else if (c == 3)
    {
        cout << "计a*计b单:" << a * b << endl;
    }
    else if (c == 4)
    {
        cout << "计a/计b单:" << a / b << endl;
    }
    else if (c == 5)
    {
        // 狦a>b 玥块"计a计b"
        if (a > b)
        {
            cout << "计a计b" << endl; // endl琌传︽
        }
        // 狦a<b 玥块"计a计b"
        if (a < b)
        {
            cout << "计a计b" << endl;
        }
        // 狦a=b 玥块"计a单计b"
        if (a == b)
        {
            cout << "计a单计b" << endl;
        }
    
    else
    {
        cout << "块岿粇" << endl;
    }
    return 0;
}

/* C++ 7/15
块:
cout << "ず甧";

块:
cin >> 跑计;

跑计:
俱计 int
﹃ string

耞:
if(兵ン){
    //兵ンΘミ磅︽
}
else{
    //兵ンぃΘミ磅︽
}

耞Α:
> 
< 
== 单


*/