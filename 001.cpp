#include <iostream>
using namespace std;
int main()
{
    cout << "�п�J�Ʀra:";
    int a;
    cin >> a;

    cout << "�п�J�Ʀrb:";
    int b;
    cin >> b;

    cout << "�Q�n������B��? 1.�[ 2.�� 3.�� 4.�� 5.��j�p" << endl;
    int c;
    cin >> c;
    if (c == 1)
    {
        cout << "�Ʀra+�Ʀrb����:" << a + b << endl;
    }
    else if (c == 2)
    {
        cout << "�Ʀra-�Ʀrb����:" << a - b << endl;
    }
    else if (c == 3)
    {
        cout << "�Ʀra*�Ʀrb����:" << a * b << endl;
    }
    else if (c == 4)
    {
        cout << "�Ʀra/�Ʀrb����:" << a / b << endl;
    }
    else if (c == 5)
    {
        // �p�Ga>b �h��X"�Ʀra�j��Ʀrb"
        if (a > b)
        {
            cout << "�Ʀra�j��Ʀrb" << endl; // endl�O����
        }
        // �p�Ga<b �h��X"�Ʀra�p��Ʀrb"
        if (a < b)
        {
            cout << "�Ʀra�p��Ʀrb" << endl;
        }
        // �p�Ga=b �h��X"�Ʀra����Ʀrb"
        if (a == b)
        {
            cout << "�Ʀra����Ʀrb" << endl;
        }
    
    else
    {
        cout << "��J���~" << endl;
    }
    return 0;
}

/* C++ 7/15
��X:
cout << "���e";

��J:
cin >> �ܼ�;

�ܼ�:
��ƫ��O int
�r�ꫬ�O string

�P�_:
if(����){
    //���󦨥߰���
}
else{
    //���󤣦��߰���
}

�P�_��:
> �j��
< �p��
== ����


*/