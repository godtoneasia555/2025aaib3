/// week07-1.cpp
/// TQC+ KYC01 ���_���k�ͽФj�_�������A�L�X�r��6�D
/// Input: 1-9 ����ư϶�  Output: ���c�ϰ����p���
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;  /// Step01: Input

    for (int i=1; i<=2*n-1; i++) {  /// Step03: �B�z�h��, ����h
        for (int j=1; j<=2*n-1; j++)  /// ���ܼ�
            cout << n;

        cout << " �{�b���b�B�z i = " << i;  /// Step04: �B�z�h��
        cout << endl; /// Step02: Output, ����
    }
}
