#include <iostream>
using namespace std;
int main()
{
    cout << "請輸入數字a:";
    int a;
    cin >> a;

    cout << "請輸入數字b:";
    int b;
    cin >> b;

    cout << "想要做什麼運算? 1.加 2.減 3.乘 4.除 5.比大小" << endl;
    int c;
    cin >> c;
    if (c == 1)
    {
        cout << "數字a+數字b等於:" << a + b << endl;
    }
    else if (c == 2)
    {
        cout << "數字a-數字b等於:" << a - b << endl;
    }
    else if (c == 3)
    {
        cout << "數字a*數字b等於:" << a * b << endl;
    }
    else if (c == 4)
    {
        cout << "數字a/數字b等於:" << a / b << endl;
    }
    else if (c == 5)
    {
        // 如果a>b 則輸出"數字a大於數字b"
        if (a > b)
        {
            cout << "數字a大於數字b" << endl; // endl是換行
        }
        // 如果a<b 則輸出"數字a小於數字b"
        if (a < b)
        {
            cout << "數字a小於數字b" << endl;
        }
        // 如果a=b 則輸出"數字a等於數字b"
        if (a == b)
        {
            cout << "數字a等於數字b" << endl;
        }
    }
    else
    {
        cout << "輸入錯誤" << endl;
    }
    return 0;
}

/* C++ 7/15
輸出:
cout << "內容";

輸入:
cin >> 變數;

變數:
整數型別 int
字串型別 string

判斷:
if(條件){
    //條件成立執行
}
else{
    //條件不成立執行
}

判斷式:
> 大於
< 小於
== 等於


*/